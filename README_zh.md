<p align="center">
	<img alt="logo" src="document/image/144221063-a85b2cb0-0416-493f-9afb-56cff31e977d.jpg" width="300">
</p>
<h1 align="center" style="margin: 30px 0 30px; font-weight: bold;">PikaPython</h1>
<h4 align="center">跨平台的超轻量级嵌入式 Python 引擎</h4>

> PikaPython V2 已发布，提供重新设计的内核、更高的执行性能、更低的 Flash 与静态
> RAM 占用，以及统一项目 CLI 和 Code Agent 开发流程。
> [前往 PikaPython V2](https://github.com/pikasTech/PikaPython/tree/v2)。

<p align="center">
	<a href="https://gitee.com/lyon1998/pikapython/stargazers"><img src="https://gitee.com/lyon1998/pikapython/badge/star.svg?theme=gvp"></a>
	<a href="https://gitee.com/lyon1998/pikapython/members"><img src="https://gitee.com/lyon1998/pikapython/badge/fork.svg?theme=gvp"></a>
	<a href="https://github.com/pikastech/pikapython/stargazers"><img src="https://img.shields.io/github/stars/pikastech/pikapython?style=flat-square&logo=GitHub"></a>
	<a href="https://github.com/pikastech/pikapython/network/members"><img src="https://img.shields.io/github/forks/pikastech/pikapython?style=flat-square&logo=GitHub"></a>
	<a href="https://github.com/pikastech/pikapython/blob/master/LICENSE"><img src="https://img.shields.io/github/license/pikastech/pikapython.svg?style=flat-square"></a>
        <a href="https://github.com/pikasTech/pikapython/actions/workflows/CI.yml"><img src="https://github.com/pikasTech/pikapython/actions/workflows/CI.yml/badge.svg"> </a>
        <a href="https://app.codecov.io/gh/pikasTech/PikaPython"><img src="https://codecov.io/gh/pikasTech/PikaPython/branch/master/graph/badge.svg"> </a>
</p>

<p align="center">
	<a href="https://whycan.com/f_55.html" >论坛</a> |
	<a href="http://pikascript.com/doc" >文档中心</a> |
	<a href="https://space.bilibili.com/5365336/channel/seriesdetail?sid=1034902">视频</a> |
        <a href="https://item.taobao.com/item.htm?spm=a1z10.3-c.w4002-23991764791.11.37216340XZtYt9&id=738387991209">开发板</a> |
        <a href="http://pikapython.com/doc/%E4%BD%BF%E7%94%A8%20BSP%20%E5%B7%A5%E7%A8%8B.html">BSP</a> |
	<a href="http://pikapython.com/doc/%E5%8C%85%E7%AE%A1%E7%90%86%E5%99%A8%E4%B8%8E%E6%A8%A1%E5%9D%97%E7%AE%A1%E7%90%86.html">包管理器</a> |
	<a href="http://pikapython.com/doc/%E4%BB%8E%20RT-Thread%20%E8%BD%AF%E4%BB%B6%E5%8C%85%E5%BC%80%E5%A7%8B.html" >RT-Thread 软件包</a> |
	<a href="http://pikapython.com/doc/%E5%A6%82%E4%BD%95%E5%8F%82%E4%B8%8E%E7%A4%BE%E5%8C%BA%E8%B4%A1%E7%8C%AE.html" >参与贡献</a> |
	<a href="http://pikapython.com/doc/%E5%95%86%E4%B8%9A%E5%90%88%E4%BD%9C%E6%96%B9%E5%BC%8F.html">商业合作</a> 
</p>

[![image](document/image/147997370-ff37b6e7-25b2-4174-aa64-c1fb92cede04.png)](https://pikastech.github.io/PikaPython/dev/bench/)


# 1.简介

PikaPython 是一个完全重写的超轻量级 python 引擎，零依赖，零配置，可以在  **Flash ≤ 64KB，RAM≤ 4KB**  的平台下运行(如 stm32g030c8 和 stm32f103c8)，极易部署和扩展，具有大量的中文文档和视频资料。

PikaPython 也称 PikaScript、PikaPy。

<img src="document/image/147799764-5db2cb30-ee74-4cde-a2bd-b91c358ae3d9.png" width="500"/>

PikaPython 具有框架式 C 模块开发工具，只要用 Python 写好调用 API ，就能够自动连接到 C 模块，非常方便快捷。不用手动处理任何全局表、宏定义、等等。

PikaPython 也支持 MDK、iar、RT-studio 等常见 ide 开发，能够轻松地调试 C 模块。

# 最新资讯

- [【回放来了！】首届PikaPython开发者大会精彩回放，可以在线观看！](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484966&idx=1&sn=7151a529c07955d932173916370af8da&chksm=fdebd14fca9c5859c41cb5a4f2884e1413ccb401221f61c8eb879512969a808411c95b392896&token=1783213956&lang=zh_CN#rd)

<img src="assets/6546.png" width="50%" height="auto">

- [发布公告：PikaPython v1.13.0 发布](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484923&idx=1&sn=5ee5e6913161ea37a04221c1fa138830&chksm=fdebd292ca9c5b84c8925da87daa97a3228717c31f861fb18a5b0f7cf89d73ccab0273ad5083&token=1783213956&lang=zh_CN#rd)

- [STM32嵌入式Python快速应用公开课](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484911&idx=1&sn=b8c465bb85aaa5e890d99951dc04657b&chksm=fdebd286ca9c5b90e1c3facd4f9f8b2b7fae074b2e10ad9d7548b139eeef7cfaf47dba65080f&token=1783213956&lang=zh_CN#rd)

- [发布公告：PikaPython v1.12.6 发布](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484881&idx=1&sn=84a9935ebd1fae90c5d2a3332f3019b9&chksm=fdebd2b8ca9c5bae3bf35c9f052989cc3410fae89388ea40f4011cfc93365c9a452c0b505e9b&token=1783213956&lang=zh_CN#rd)

- [【新品上架】PIKA 派 - WIRELESS 开发板！PikaPython官方力作!](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484877&idx=1&sn=d400f7a122ecc9f816392da209103413&chksm=fdebd2a4ca9c5bb24c59a65a73fb8980be273d5596a0696ed0a1ff006542e5f3dd9c045a4b02&token=1783213956&lang=zh_CN#rd)

- [PikaPython 两周年纪念——感谢您的伴随与支持](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484840&idx=1&sn=1724e2517e930dd8d2d96872f9e7f7ae&chksm=fdebd2c1ca9c5bd7ed832294e89f1fc03378af15cbac8f7d4eab867fb555ac3c7c588aa10c66&token=1783213956&lang=zh_CN#rd)

- [再创辉煌！PikaPython荣获2022年中国开源创新大赛优秀奖](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484796&idx=1&sn=d3bdf4c09e9456e929e95b7db15c9bb0&chksm=fdebd215ca9c5b03b40c7b0b490fc1e767d8c910174ef03c65fc188267710a4ccd2023656e31&token=1783213956&lang=zh_CN#rd)

- [📢 发布公告：PikaPython v1.12.2 发布 🚀](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484789&idx=1&sn=bedfc580932a4bd286264110a065de2a&chksm=fdebd21cca9c5b0a4654a394f48fb3cb0e743b4ad72fef4d96e4cf28fa4357349b4862f0be7e&token=2116766907&lang=zh_CN#rd)

- [万元结项奖金！学生报名开启！PikaPython 开源之夏 2023](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484785&idx=1&sn=1cf983057765198f53c4f6c8aa04e516&chksm=fdebd218ca9c5b0e3444112a5a033dc295c63482bcb8934422a199784e900c2cd95f633da5b4&token=2116766907&lang=zh_CN#rd)

- [【喜报】PikaPython突破 1000+ Github Star，物联网与边缘AI领域的轻量级Python解释器再创新高！](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484773&idx=1&sn=e0273c1c55614ea11387d6f785c4bfb9&chksm=fdebd20cca9c5b1a14fef9c2cd90f01551ce0c04eac4de0759fdc8ba27ae4158a68ce1eb5a5f&token=2116766907&lang=zh_CN#rd)

- [PikaPython项目入选中国开源创新大赛决赛，携手共建国内开源生态](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484762&idx=1&sn=2b3e570bbc7e98874b6773fe8e2678c7&chksm=fdebd233ca9c5b255296db6e9874035577a02b6b26354c4c2a2298696a02ec467149ca91a078&token=2116766907&lang=zh_CN#rd)

- [轻量级Python解释器PikaPython成功入选开源之夏，探索无限可能！](https://mp.weixin.qq.com/s?__biz=MzU4NzUzMDc1OA==&mid=2247484738&idx=1&sn=7af1c9bb61e6decd5c155924cb7a05f8&chksm=fdebd22bca9c5b3d3f2fbd8742941e6c33e86cbcba88c329b0b9550b54b0291b6f50553d5eea&token=709915806&lang=zh_CN#rd)

- [2022 年 PikaPython 年终总结](https://mp.weixin.qq.com/s/cWtujWF8EuJnuXuVUeWNKw)

- [【快讯】PikaScript 合并进入 LVGL 主线文档，创始人Gabor 这样说...](https://mp.weixin.qq.com/s/2vcZfRfAAmAqPfyOm7CqUg)

# 获取 PikaPython:

## 使用在线图形化工程生成器
生成器地址:
http://pikascript.com

[![](assets/1644129110261-049ad5bb-21af-40e2-9533-a1c8c86790f1.jpg)](http://pikascript.com)

## PikaPython Studio
PikaPython 串口终端、脚本下载、模块管理工具。

[![](assets/115.png)](https://gitee.com/Lyon1998/pikapython/attach_files/1285327/download)
[下载PikaPython Studio](https://gitee.com/Lyon1998/pikapython/attach_files/1285327/download)

## 相关开源项目 

- 🎮 [MicroLink](https://github.com/Aladdin-Wang/MicroLink) 一款集多功能于一体的嵌入式系统开发工具

- ▶️ [pikapython Binding For LVGL](https://github.com/lvgl/lv_binding_pikascript)

- ⭐ [pikapython Bluepill Demo In PlatformIO — Python-like REPL 🐍🔌](https://github.com/maxgerhardt/pikascript-pio-bluepill)

- ⭐ [pikapython Bluepill Demo In GCC 🐍](https://github.com/Chandler-Kluser/pikascript_gcc_bluepill)

- ⏩ [pika_startup_demo](https://gitee.com/kcfkwok/pika_startup_demo) This program demonstrate the 5 startup methods of pikapython.

- 🎮 [PikaPython-OpenHardware](https://gitee.com/Lyon1998/pikapython_openhardware) PikaPython 开源硬件

- 💻 [pikapython-msvc-qt](https://gitee.com/zuto360_460135301/pikapython-msvc-qt) 移植pikapython到windows平台，基于QT，采用MSVC编译器，移植pthread库，支持多线程。


3. 已发布的模块列表：[packages.toml](/packages.toml)

# 快速上手

可使用[仿真工程](https://pikapython.com/doc/Keil%20%E4%BB%BF%E7%9C%9F%E5%B7%A5%E7%A8%8B.html)快速上手，无需硬件，也可以使用官方支持的开发板[Pika派—Wireless](https://item.taobao.com/item.htm?spm=a1z10.3-c.w4002-23991764791.11.37216340XZtYt9&id=738387991209)，上手即玩。

[![PikaPi-WIRELESS](assets/%E5%B0%81%E9%9D%A2%E5%9B%BE.png)](https://item.taobao.com/item.htm?spm=a1z10.3-c.w4002-23991764791.11.37216340XZtYt9&id=738387991209)

开发板基于 ESP32S3 配套全流程移植、适配、模块开发课程。

# 开发手册

### [点此进入文档中心](http://pikascript.com/doc)
![image](document/image/144693400-99f9c038-76fd-4d95-b3d2-137bd972d580.png)

# 视频教程

### [点此进入视频中心](https://space.bilibili.com/5365336/channel/seriesdetail?sid=1034902)

![image](document/image/142173892-35e33f36-413c-4422-8470-b873b7c3bd71.png)

# 交流论坛

### [点此进入论坛](https://whycan.com/f_55.html)

![image](document/image/144693543-4aee46c8-b6c8-4282-99c4-e07271a4ba5f.png)

## 文件目录
[src](../../tree/master/src) - 内核源码

[bsp](../../tree/master/bsp) - 裸机芯片/板卡支持

[port](../../tree/master/port) - 操作系统和包管理器支持

[test](../../tree/master/port/linux/test) - 单元测试

[examples](../../tree/master/examples) - 示例脚本

[package](../../tree/master/package) - 模块目录

[pikaCompiler](../../tree/master/tools/pikaCompiler) - 使用 rust 编写的预编译器

[pikaPackageManager](../../tree/master/tools/pikaPackageManager) - 使用 go 编写的模块管理器

# 2.平台支持列表

## MCU support
|MCU               |bsp|gpio|time|uart|pwm|adc|i2c|dac|
|---               |---|--- |--- |--- |---|---|---|---|
|stm32g030c8       |√  |√   |√   |√   |√  |√  |√  |   |
|stm32g070cB       |√  |√   |√   |√   |√  |√  |√  |   |
|stm32f103c8       |√  |√   |√   |√   |√  |√  |√  |   |
|stm32f103rb       |√  |√   |√   |√   |√  |√  |√  |   |
|stm32f103ze       |√  |√   |√   |√   |√  |√  |√  |   |
|stm32f103rc       |√  |√   |√   |√   |√  |√  |√  |   |
|stm32f401cc       |√  |√   |√   |√   |√  |√  |√  |   |
|stm32f411ce       |√  |√   |√   |√   |√  |√  |√  |   |
|stm32f407ze       |√  |    |    |    |   |   |   |   |
|stm32f407zg       |√  |    |    |    |   |   |   |   |
|stm32h750vb       |√  |    |    |    |   |   |   |   |
|stm32f051r8       |√  |    |    |    |   |   |   |   |
|air32f103cb       |√  |√   |√   |    |   |   |   |   |
|ch582             |√  |√   |√   |√   |   |√  |√  |   |
|ch32v103r8t6      |√  |√   |√   |    |   |   |   |   |
|cm32m101a         |√  |    |    |    |   |   |   |   |
|w806              |√  |√   |√   |√   |√  |√  |√  |   |
|apm32f030r8       |√  |    |    |    |   |   |   |   |
|apm32e103vb       |√  |    |    |    |   |   |   |   |
|bl-602            |√  |√   |    |    |√  |√  |   |√  |
|bl-706            |√  |    |    |    |   |   |   |   |
|[bl-618](https://verimake.com/d/285-bl618-pikapython-led)|√  | √ | √   |  √  |  √ |  √ |  √ |  √ |
|Raspberry Pico    |√  |    |    |    |   |   |   |   |
|ESP32C3           |√  |√   |√   |    |   |   |   |   |
|TC264D            |√  |    |    |    |   |   |   |   |
|devc              |√  |    |    |    |   |   |   |   |
|visual-studio     |√  |    |    |    |   |   |   |   |
|EC600N            |√  |    |    |    |   |   |   |   |
|mm32f5277e9p      |√  |√   |    |    |   |   |   |   |
|xr806(openharmony)|√  |    |    |    |   |   |   |   |


## Board support
|Board|bsp|gpio|uart|pwm|adc|i2c|rgb|lcd|arm-2d|
|---|---|---|---|---|---|---|---|---|---|
|[Pika-Pi-Zero](https://item.taobao.com/item.htm?spm=a230r.1.14.1.4f2e27a8R0qWJn&id=654947372034&ns=1&abbucket=15#detail)|√|√|√|√|√|√|√|√|√|

|Board|bsp|pika_lvgl|
|---|---|---|
|lvgl-vs-simu|√|√|
|swm320|√|√|

|Board|bsp|arm-2d|
|---|---|---|
|QEMU-arm2d|√|√|

|Board|bsp|LED|KEY|
|---|---|---|---|
|SmartLoong|√|√|√|√|

## OS support
|OS|port|GPIO|TIME|PWM|
|---|---|---|---|---|
|RT-Thread|√|√|√|√|
|vsf|√|√| | |

|OS|port|Google Test|Benchmark|
|---|---|---|---|
|linux|√|√|√|

# 3.特性
### (1)运行环境

支持裸机运行，可运行于 **RAM ≥ 4kB** ，**FLASH ≥ 64kB** 的mcu中，如stm32g030, stm32f103c8t6，esp8266。

### (2)开发环境
支持串口下载 Python 脚本。

<img src="document/image/134841230-85de6734-8467-4245-93a5-d452b5022b42.gif" width="400" alt="微信交流群"/><br/>

支持 Keil、IAR、rt-thread studio、segger embedded studio 等IDE开发。

支持 CMake、makeFile、Scons 等构建工具

零依赖，零配置，开箱即用，极易集成进已有的C工程。

极易拓展自定义的C原生函数。

支持跨平台，可在 linux 环境开发内核。

### (3)语法特性

使用 python3 标准语法的子集。

在编译时支持 python 类和方法定义，完整支持封装、继承、多态、模块功能 - 基于 [Pika 预编译器](../../tree/master/tools/pikaCompiler)。

在运行时支持 python 方法调用、变量定义、对象构造、对象释放、控制流(if\while) - 基于 [Pika 运行时内核](../../tree/master/src)。

<details><summary>更多语法特性细节</summary>

|语法|编译时|运行时|Shell|
|---|---|---|---|
|模块定义   |√|-|-|
|模块导入   |√|√|√|
|类定义    |√|√|√|
|类继承    |√|√|√|
|方法定义   |√|√|√|
|方法重载   |√|√|√|
|方法调用   |√|√|√|
|参数定义   |√|√|√|
|参数赋值   |√|√|√|
|对象新建   |√|√|√|
|对象销毁   |√|√|√|
|对象嵌套   |√|√|√|
|控制流     |√|√|√|

#### Operator

| + | - | * | / | == | > | < | >= | <= | % | ** | // | != | & | >> | << | and | or | not | in | += | -= | *= | /= |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|√|

#### Control flow

| Syntax | State |
| --- | --- |
| if | √ |
| while | √ |
| for in [list] | √ |
| for in range(a, b) | √ |
| for in [dict] | √ |
| if elif else | √ |
| for break/continue | √ |
| while break/continue | √ |

#### Module

| Syntax | Python Module | C Module |
| --- | --- | --- |
| import [module] | √ | √ |
| import [module] as | √ | - |
| from [module] import [class/function>]| √ | - |
| from [module] import [class/function>] as | √ | - |
| from [module] import * | - | PikaObj Module Only |

#### List/Dict
| Syntax | State |
| --- | --- |
| l = list() | √  |
| l = [a, b, c] | √ |
| d = dict() | √ |
| d = {'a':x, 'b':y, 'c':z} | √ |

#### Exception

| Syntax | State |
| --- | --- |
|try:| √ |
|except:| √ |
|except [Exception]:| - |
|except [Exception] as [err]: | - |
|except: ... else:| - |
|raise:| √ |
|raise [Exception]:| - |
|finally:| - |

#### Slice

| Syntax | str | bytes | list |
| --- | --- | --- | --- |
| test[i] | √ | √ | √ |
| test[a : b] | √ | √ | √ | 
| test[a :] | √ | √ | √ |

#### Other keywords/Syntax

| yield | is | comprehensions |
| --- | --- | --- |
| - | √ | - |
</details>

### (4)源码规范

注重源码可读性，命名规范，标准统一，完全不使用宏，几乎不使用全局变量。

完整的 googletest 单元测试。

# 4.交流与技术支持：

## Tencent QQ Group:

<img src="document/image/136304186-e49610e4-ce01-4524-99b6-b56842d56411.png" width="300" alt="微信交流群"/><br/>

## E-mail: liang6516@outlook.com

# 5.Demo展示

## Demo 01 GPIO

<details><summary>查看代码</summary>

``` python
import PikaStdLib
import STM32G0

mem = PikaStdLib.MemChecker()
io1 = STM32G0.GPIO()
time = STM32G0.Time()

io1.setPin('PA8')
io1.setMode('out')
io1.enable()
io1.low()

print('hello pikapython')
print('mem.max :')
mem.max()
print('mem.now :')
mem.now()

while True:
    io1.low()
    time.sleep_ms(500)
    io1.high()
    time.sleep_ms(500)

```

</details>

![Hnet-image (2)](document/image/132943428-f2b365ca-140e-42f4-936c-db6a7d9f8dee.gif)

## Demo 02 USART

<details><summary>查看代码</summary>

``` python
import PikaStdLib
import STM32G0

time = STM32G0.Time()
uart = STM32G0.UART()
uart.setId(1)
uart.setBaudRate(115200)
uart.enable()

while True:
    time.sleep_ms(500)
    readBuff = uart.read(2)
    print('read 2 char:')
    print(readBuff)

```

</details>

![Hnet-image (3)](document/image/132943365-0f7059b3-4f9d-4989-a5ec-2cce72b0cc96.gif)


## Demo 03 ADC

<details><summary>查看代码</summary>

``` python
import PikaStdLib
import STM32G0

time = STM32G0.Time()
adc1 = STM32G0.ADC()

adc1.setPin('PA1')
adc1.enable()

while True:
    val = adc1.read()
    print('adc1 value:')
    print(val)
    time.sleep_ms(500)

```

</details>

![mmexport1631351523907](document/image/132944185-0a01b1ba-8cf7-4f9f-9d73-fe9cbcd52f0b.png)

## Demo 04 PWM output

<details><summary>查看代码</summary>

``` python
import PikaStdLib
import STM32G0

time = STM32G0.Time()
pwm = STM32G0.PWM()
pwm.setPin('PA8')
pwm.setFrequency(2000)
pwm.setDuty(0.5)
pwm.enable()

while True:
    time.sleep_ms(500)
    pwm.setDuty(0.5)
    time.sleep_ms(500)
    pwm.setDuty(0.001)
    
```

</details>

## Demo 05 RGB

<details><summary>查看代码</summary>

``` python
import STM32G0
import PikaPiZero
import PikaStdLib

rgb = PikaPiZero.RGB()
mem = PikaStdLib.MemChecker()

rgb.init()
rgb.enable()

print('hello 2')
print('mem used max:')
mem.max()

while True:
    print('flowing')
    rgb.flow()

```

</details>

## Demo 06 Snake(Need LCD)

<details><summary>查看代码</summary>

``` python
from PikaObj import *
import PikaStdLib
import PikaPiZero
import STM32G0

# hardware init
lcd = PikaPiZero.LCD()
lcd.init()
lcd.clear('white')
key = PikaPiZero.KEY()
key.init()
time = STM32G0.Time()
x_max = 120
y_max = 150

# snake init
s = PikaPiZero.Point()
w = 9
h = 9
s.x = 50
s.y = 10
len = 0
while len < 3:
    b = s
    i = 0
    while i < len:
        b = b.next
        i = i + 1
    b.next = PikaPiZero.Point()
    b.next.x = b.x - 10
    b.next.y = b.y
    b.next.prev = b
    len = len + 1
# ring link
b.next = s
s.prev = b

i = 0
b = s
while i < len:
    lcd.fill(b.x, b.y, w, h, 'blue')
    b = b.next
    i = i + 1

print('snake lengh')
print(len)

# fruit init
f = PikaPiZero.Point()
f.x = 30
f.y = 20
lcd.fill(f.x, f.y, w, h, 'green')

# memory check
mem = PikaStdLib.MemChecker()
print('mem used max:')
mem.max()

# main loop
d = 0
isUpdate = 1
isEat = 0
while True:
    if isUpdate:
        # isUpdate = 0
        # check eat fruit
        if f.x == s.x and f.y == s.y:
            # have eat fruit
            isEat = 1
            f.x = f.x + 30
            if f.x > x_max:
                f.x = f.x - x_max
            f.y = f.y + 30
            if f.y > y_max:
                f.y = f.y - y_max
            lcd.fill(f.x, f.y, w, h, 'green')
        # move snake by the direction
        if d == 0:
            x_new = s.x + 10
            y_new = s.y
            if x_new > x_max:
                x_new = 0
        elif d == 1:
            x_new = s.x
            y_new = s.y - 10
            if y_new < 0:
                y_new = y_max
        elif d == 2:
            x_new = s.x
            y_new = s.y + 10
            if y_new > y_max:
                y_new = 0
        elif d == 3:
            x_new = s.x - 10
            y_new = s.y
            if x_new < 0:
                x_new = x_max
        if isEat:
            isEat = 0
            b_new = PikaPiZero.Point()
            b_new.x = x_new
            b_new.y = y_new
            b_new.prev = s.prev
            b_new.next = s
            s.prev.next = b_new
            s.prev = b_new
            s = b_new
            len = len + 1
            print('snake lengh')
            print(len)
            print('mem used max:')
            mem.max()
        # drow the snake and fruit
        # clear last body
        lcd.fill(s.prev.x, s.prev.y, w, h, 'white')
        # new body
        s.prev.x = x_new
        s.prev.y = y_new
        # head is last body
        s = s.prev
        lcd.fill(s.x, s.y, w, h, 'blue')
        b = s
        i = 0
    # scan key
    key_val = key.get()
    if key_val == 0:
        d = 0
        isUpdate = 1
    elif key_val == 1:
        d = 1
        isUpdate = 1
    elif key_val == 2:
        d = 2
        isUpdate = 1
    elif key_val == 3:
        d = 3
        isUpdate = 1

```

</details>

![输入图片说明](document/image/imagefwef.png)

这几个 Demo 占用的 RAM 最大值只有3.56K，把1K的堆栈也算上就是4.56K，Flash 最大占用是30.4K，以 STM32F103C8T6 的 20K RAM 和 64K Flash 为标准，RAM 才用掉不到25%，Flash 才用掉不到50%。

我们可以简单对比一下 micropython 的常用芯片 STM32F405RG 和这次跑 pikapython 的芯片STM32G070CB

## RAM资源对比
![image](document/image/132944731-a55ece1d-061f-4b91-ba87-bd6547be96a7.png)

## Flash资源对比
![image](document/image/132944745-e9cf598d-e75f-40bb-873e-911819d535b7.png)

## 参考价对比(以2021年9月11日立创商城10片售价为参考)
![image](document/image/132944757-2b5cfda8-f93f-4456-8d7f-4e4767954056.png)

## 拓展能力如何呢？

除了设备驱动之外，为 mcu 开发自定义的 python 脚本绑定在 pikapython 的开发框架下非常轻松，下面两个 Demo 就是自定义的C模块拓展，这个 Demo 基于 ARM-2D 图像驱动库开发了一些 python 脚本接口。

## 几个小方块~
![Hnet-image (7)](document/image/132945282-bfd310df-8063-456d-b90c-6b798a2c8ed5.gif)

## 几个旋转太阳~
![Hnet-image (6)](document/image/132945107-e473a2cc-9fbc-47f9-aaed-a28d3ad1048c.gif)

# 6.内核测试与开发

## 在 Docker 中测试 (recommend)
[ Docker 开发环境搭建指南 ](http://pikapython.com/doc/get-start_linux.html)

# 7.贡献者
## [如何参与贡献](http://pikapython.com/doc/%E5%A6%82%E4%BD%95%E5%8F%82%E4%B8%8E%E7%A4%BE%E5%8C%BA%E8%B4%A1%E7%8C%AE.html)

<div class="log"></div>

### 贡献记录 (2023 年)

| 贡献记录 | 贡献者 |
| --- | --- |
|fix REPL echo for '\b' and 0x7F|[versaloon](https://github.com/versaloon)|
|pika_hal support for ESP32|[geekheart](https://gitee.com/geekheart)|
|Driver Design for PIKA-OPEN-HARDWARE|[Kirin](https://gitee.com/ztqkirin)|
|bsp support for `Makefile-win-mingw` |[unsigned_0](https://gitee.com/unsigned0)|
|Fix bug for STM32F4 `delay_unit()`|[MrLeekon](https://gitee.com/MrLeekon)|
|bsp support for `air780e`|[Kirin](https://gitee.com/ztqkirin)|
|Component Selection, Schematic Diagram, PCB Design for PIKA-OPEN-HARDWARE| 冰点 (WeChat Name)|
|Driver Design for PIKA-OPEN-HARDWARE|[Kirin](https://gitee.com/ztqkirin)|
|Product Design, Component Selection for PIKA-OPEN-HARDWARE| 方海钰 |
|Hardware Verification for PIKA-OPEN-HARDWARE|[HonestQiao](https://github.com/HonestQiao)|
|support PIKA_UNBUFFERD_ENABLE config item|[Seny Lee](https://gitee.com/SenyLee)|
|add `this` module|[blueloveTH](https://github.com/blueloveTH)|
|Fix memory leak in event queue|[randyscott](https://github.com/randyscott)|
|Fix a bug of _OP_POW|[blueloveTH](https://github.com/blueloveTH)|
|fix bsp/esp32/README.md|[erzongxie](https://gitee.com/erzongxie)|
|Fixed a bug where help("modules") crashed when no lib was loaded|[梦程MI](https://gitee.com/dreamcmi) |
|support GPIO driver for rt-thread| [supperthomas](https://github.com/supperthomas) |
|Fixed a typo|[J. Neuschäfer](https://github.com/neuschaefer)|
|codecov CI support| [Renzhihan](https://github.com/Renzhihan) |
|rt-thread build script fix and improve| [supperthomas](https://github.com/supperthomas) |
|support pikafs pack and unpack to path|[sjy](https://gitee.com/shanjiayang)|
|fix pika_platform_get_tick() in linux port|[梦程MI](https://gitee.com/dreamcmi) |
|CH307开发板、BL618开发板 | [VeriMake](https://space.bilibili.com/356383684) |
|VM instruction extension framework | [GorgonMeducer](https://github.com/GorgonMeducer) |
|iotcloud module|[梦程MI](https://gitee.com/dreamcmi) |
|implement shell filter | [GorgonMeducer](https://github.com/GorgonMeducer) |
|修复socket模块在lwip中fcntl的参数数量错误|[梦程MI](https://gitee.com/dreamcmi) |
|support GPIO pika_hal for BLMCU|[codercmd](https://gitee.com/codercmd)|
|Fix Typo on PikaVM.c|[Ikko Eltociear Ashimine](https://gitee.com/eltociear)|
|Fix type assert on dataArgs.c|[itschina](https://gitee.com/itschina)|
|add examples/Device/KEY_POLL.PY|[codercmd](https://gitee.com/codercmd)|
| hmac hashlib base64 aes modules | [梦程MI](https://gitee.com/dreamcmi) |
|fix pikaCompiler build error on macos|[梦程MI](https://gitee.com/dreamcmi) |

<details><summary>贡献记录 (2022 年)</summary>

| 贡献记录 | 贡献者 |
| --- | --- |
| request module | [onceday](https://gitee.com/onceday) |
| mqtt module | [FlintJ](https://gitee.com/flintj) |
| Donate：500¥ | [hardsofttech](https://gitee.com/hardsofttech) |
| Donate：500¥ | [edmund_wz](https://gitee.com/edmund_wz) |
| Donate：500¥ | [Meco Jianting Man](https://github.com/mysterywolf) |
| Donate：500¥ | [hardsofttech](https://gitee.com/hardsofttech) |
|PikaNN module| [Renzhihan](https://github.com/Renzhihan) |
| re module | [eglwang](https://gitee.com/eglwang) |
| PikaMath.Quaternion() | [purewind7](https://gitee.com/purewind7) |
| contrubute to PikaCV | [purewind7](https://gitee.com/purewind7) |
| xr806(openharmony) bsp |[sjy](https://gitee.com/shanjiayang)|
| ESP32 package |沧御|
| MM32F5277E9P package |[unsigned](https://gitee.com/unsigned0)|
| mm32f5277e9p BSP |[unsigned](https://gitee.com/unsigned0)|
| Add [CMSIS-PACK](https://pikadoc-en.readthedocs.io/en/latest/get-start_cmsis-pack.html) | [GorgonMeducer](https://github.com/GorgonMeducer) |
| donate: air32f103 board * 20 | 合宙 [xinxi204](https://gitee.com/xinxi204) |
| contrubute to PikaMath.Math() | [onceday](https://gitee.com/onceday) |
| add support for Unix Time | [onceday](https://gitee.com/onceday) |
| contrubute to PikaStdLib.String() | [purewind7](https://gitee.com/purewind7) |
| Add [PLOOC](https://github.com/GorgonMeducer/PLOOC) support for pikapython Core | [GorgonMeducer](https://github.com/GorgonMeducer) |
| Donate：500¥ (ctypes 相关) | 蒋太平 |
| fix linux install script | [Maximilian Gerhardt](https://github.com/maxgerhardt) |
| ch582 package | [梦程MI](https://gitee.com/dreamcmi) |
| ch582 BSP | [梦程MI](https://gitee.com/dreamcmi) |
| Donate：EC600X QuecPython Develop board| 移远通信 武加玉 |
| Performance Point: 900->1400 | [GorgonMeducer](https://github.com/GorgonMeducer) |
| stm32f051r8 BSP |[unsigned](https://gitee.com/unsigned0)|
| stm32f407ze BSP |[unsigned](https://gitee.com/unsigned0)|
| devc BSP |[unsigned](https://gitee.com/unsigned0)|
| TC264D BSP |[unsigned](https://gitee.com/unsigned0)|
| PikaVM improvement | [GorgonMeducer](https://github.com/GorgonMeducer) |
| W801Device package | 刘延(微信名) |
| W806 bsp | 刘延(微信名) |
| Donate：ESP32C3 5pic，linker|启明云端 沧御|
| Donate：LS1C101 mcu 10pic, LS1c101 develop board，debuger|龙芯俱乐部 石南|
| PikaVSF OS package | [versaloon](https://github.com/versaloon) |
| ESP32C3 BSP |沧御|

</details>

<details><summary>贡献记录 (2021 年)</summary>

| 贡献记录 | 贡献者 |
| --- | --- |
| Donate：ESP32 board、ink lcd*4 | name(微信名) |
| Donate：smartloong board | 龙芯俱乐部 石南 |
| package/STM32F1 | [sjy](https://gitee.com/shanjiayang) |
| package/STM32F103RBBooter | [sjy](https://gitee.com/shanjiayang) |
| bsp/stm32f103rb | [sjy](https://gitee.com/shanjiayang) |
| QEMU ARM-2D simulation proejct | [liuduanfei](https://github.com/liuduanfei) |
| Donate：GD32E103TB2 2 pic | 信息牛(微信名) |
| Rt-thread bsp、port、module| [Meco Jianting Man](https://github.com/mysterywolf) |
| Donate：EC600S-CN 4G| 移远模块 |
| Donate：BL706 board|博流智能 [bouffalolab](https://github.com/bouffalolab)|
| Donate：CM32M101A 开发板| 孟巍(微信名) |
| Donate：APM32F030R8 board | 极海半导体 陈成 |
| Donate：APM32E103VB board | 极海半导体 陈成 |
| Donate：APEX-Link| 极海半导体 陈成 |
| corde format，add gitattributes| [Meco Jianting Man](https://github.com/mysterywolf) |
| demo/simulation-keil | 千帆(微信名) |
| demo/stm32f103zet6/demo01-led-stm32f103zet6 | [甜航](https://github.com/easyzoom) |
| demo/stm32f103zet6/demo02-led-stm32f103zet6_tworoot | [甜航](https://github.com/easyzoom) |
| demo/stm32f407zgt/demo01-led-stm32f407vgt | [甜航](https://github.com/easyzoom) |

</details>
