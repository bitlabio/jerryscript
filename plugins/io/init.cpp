/* Copyright 2015 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>

#include "init.h"
#include "jerry.h"

static void plugin_io_print_uint32 (uint32_t);

#include "io-extension-description.inc.h"

void
plugin_io_init (void)
{
  jerry_extend_with (&jerry_extension);
} /* plugin_io_init */

/**
 * Print an uint32 number without new-line to standard output
 */
static void
plugin_io_print_uint32 (uint32_t num) /**< uint32 to print */
{
  printf ("%lu", num);
} /* print_uint32 */