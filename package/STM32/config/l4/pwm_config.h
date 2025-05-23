/*
 * Copyright (c) 2006-2023, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-12-13     zylx         first version
 */

#ifndef __PWM_CONFIG_H__
#define __PWM_CONFIG_H__

#include "../../pika_hal_stm32_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BSP_USING_PWM1
#define PWM1_CONFIG                             \
    {                                           \
       .tim_handle.Instance     = TIM1,         \
       .name                    = "pwm1",       \
       .channel                 = RT_NULL       \
    }
#endif /* BSP_USING_PWM1 */

#ifdef BSP_USING_PWM2
#define PWM2_CONFIG                             \
    {                                           \
       .tim_handle.Instance     = TIM2,         \
       .name                    = "pwm2",       \
       .channel                 = RT_NULL       \
    }
#endif /* BSP_USING_PWM2 */

#ifdef BSP_USING_PWM3
#define PWM3_CONFIG                             \
    {                                           \
       .tim_handle.Instance     = TIM3,         \
       .name                    = "pwm3",       \
       .channel                 = RT_NULL       \
    }
#endif /* BSP_USING_PWM3 */

#ifdef BSP_USING_PWM4
#define PWM4_CONFIG                             \
    {                                           \
       .tim_handle.Instance     = TIM4,         \
       .name                    = "pwm4",       \
       .channel                 = RT_NULL       \
    }
#endif /* BSP_USING_PWM4 */

#ifdef BSP_USING_PWM5
#define PWM5_CONFIG                             \
    {                                           \
       .tim_handle.Instance     = TIM5,         \
       .name                    = "pwm5",       \
       .channel                 = RT_NULL       \
    }
#endif /* BSP_USING_PWM5 */

#ifdef BSP_USING_PWM15
#define PWM15_CONFIG                            \
    {                                           \
       .tim_handle.Instance     = TIM15,        \
       .name                    = "pwm15",      \
       .channel                 = RT_NULL       \
    }
#endif /* BSP_USING_PWM15 */

#ifdef BSP_USING_PWM16
#define PWM16_CONFIG                            \
    {                                           \
       .tim_handle.Instance     = TIM16,        \
       .name                    = "pwm16",      \
       .channel                 = RT_NULL       \
    }
#endif /* BSP_USING_PWM16 */

#ifdef BSP_USING_PWM17
#define PWM17_CONFIG                            \
    {                                           \
       .tim_handle.Instance     = TIM17,        \
       .name                    = "pwm17",      \
       .channel                 = RT_NULL       \
    }
#endif /* BSP_USING_PWM17 */

#ifdef __cplusplus
}
#endif

#endif /* __PWM_CONFIG_H__ */
