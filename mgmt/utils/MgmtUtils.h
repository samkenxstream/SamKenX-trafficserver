/** @file

  A brief file description

  @section license License

  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 */

/**************************************
 *
 * MgmtUtils.h
 *   Some utility and support functions for the management module.
 *
 * $Date: 2007-10-05 16:56:46 $
 *
 *
 */

#pragma once

#include "tscore/ink_platform.h"
#include "tscore/Diags.h"

#include "records/P_RecCore.h"

int mgmt_readline(int fd, char *buf, int maxlen);
int mgmt_writeline(int fd, const char *data, int nbytes);

int mgmt_read_pipe(int fd, char *buf, int bytes_to_read);
int mgmt_write_pipe(int fd, char *buf, int bytes_to_write);

void mgmt_use_syslog();
void mgmt_cleanup();

struct in_addr *mgmt_sortipaddrs(int num, struct in_addr **list);
bool mgmt_getAddrForIntr(char *intrName, sockaddr *addr, int *mtu = nullptr);

void mgmt_sleep_sec(int);
void mgmt_sleep_msec(int);

void load_config_file_callback(const char *parent_file, const char *remap_file);
