import flashdb
import struct
import time
import os
DB_PATH = "test/out/fdb_tsdb"


tsdb = flashdb.TSDB("env", DB_PATH, max_len=512)

tic = time.time() * 1000
for i in range(10):
    blob_i = struct.pack('i', i)
    time.sleep(0.001)
    ret = tsdb.tsl_append(blob_i)

toc = time.time() * 1000
assert ret == 0


sum_by_time = 0


def callback(tsl, user_data) -> int:
    global sum_by_time
    # print(tsl.get_time(), tsl.to_blob())
    t = tsl.get_time()
    blob_i = tsl.to_blob()
    i = struct.unpack('i', blob_i)[0]
    print(t, i, user_data)
    if user_data == 'user_data_by_time':
        sum_by_time += i
    return False  # False: continue, True: stop

assert tsdb.tsl_iter(callback, 'user_data') == 0
assert tsdb.tsl_iter_reverse(callback, 'user_data_reverse') == 0
print('toc - tic', toc - tic)
assert tsdb.tsl_iter_by_time(tic, toc, callback, 'user_data_by_time') == 0
assert sum_by_time == 45

print('PASS')
