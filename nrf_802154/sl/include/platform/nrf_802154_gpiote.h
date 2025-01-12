/*
 * Copyright (c) 2020 - 2022, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
 * @brief Module that defines API of GPIOTE for the 802.15.4 driver.
 *
 */

#ifndef NRF_802154_GPIOTE_H_
#define NRF_802154_GPIOTE_H_

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_802154_gpiote GPIOTE for the 802.15.4 driver
 * @{
 * @ingroup nrf_802154_gpiote
 * @brief GPIOTE for the 802.15.4 driver.
 *
 * The GPIOTE is used to react on the Coex Grant line.
 *
 */

/**
 * @brief Initializes the GPIOTE.
 */
void nrf_802154_gpiote_init(void);

/**
 * @brief Deinitializes the GPIOTE.
 */
void nrf_802154_gpiote_deinit(void);

/**
 * @brief Function to be called when handling the pin triggering.
 */
extern void nrf_802154_wifi_coex_gpiote_irqhandler(void);

/**
 * @brief Enter the critical section of GPIOTE subsystem.
 *
 * @note The critical section can be nested.
 *
 */
void nrf_802154_gpiote_critical_section_enter(void);

/**
 * @brief Exit the critical section of GPIOTE subsystem.
 *
 * @note The critical section can be nested.
 *
 */
void nrf_802154_gpiote_critical_section_exit(void);

/**
 *@}
 **/

#ifdef __cplusplus
}
#endif

#endif /* NRF_802154_GPIOTE_H_ */
