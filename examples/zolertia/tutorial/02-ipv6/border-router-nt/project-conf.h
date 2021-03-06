/*
 * Copyright (c) 2015, George Oikonomou - <george@contiki-os.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*---------------------------------------------------------------------------*/
/**
 * \file
 *    Project specific configuration defines for the Ubidots demo
 *
 * \author
 *    George Oikonomou - <george@contiki-os.org>,
 */
/*---------------------------------------------------------------------------*/
/*#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_
/*---------------------------------------------------------------------------*/
/* User configuration */
//#define UBIDOTS_CONF_IN_BUFFER_SIZE    64
/*---------------------------------------------------------------------------*/

/* IPv6 address of things.ubidots.com is "2607:f0d0:2101:39::2", leave
 * commented to resolve the host name.  The NAT64 address is "::ffff:3217:7c44"
 */
/*#define UBIDOTS_CONF_REMOTE_HOST         "2607:f0d0:2101:39::2"

#endif /* PROJECT_CONF_H_ */

/* User configuration */
/*#define POST_PERIOD                      (CLOCK_SECOND * 40)
#define VARIABLE_BUF_LEN                 16
#define UBIDOTS_CONF_AUTH_TOKEN          "A1E-Zdfehlc7EmA9JEer6YIARbtHIMK1y8"
#define VARKEY_TEMPERATURE               "5ad89c45c03f974fd1c29035"
#define VARKEY_HUMIDITY                  "5ad89c80c03f974fd2d06bda"
#define UBIDOTS_DEMO_CONF_UPTIME    "5829f3f47625421b877bb542"
#define UBIDOTS_DEMO_CONF_SEQUENCE    "5829f02776254207233236fd"
#define UBIDOTS_CONF_IN_BUFFER_SIZE      64
/*---------------------------------------------------------------------------*/
