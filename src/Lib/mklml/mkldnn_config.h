/*******************************************************************************
* Copyright 2019 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#ifndef MKLDNN_CONFIG_H
#define MKLDNN_CONFIG_H

/* No backend. */
#define MKLDNN_BACKEND_NONE 0

/* Native backend (CPU only). */
#define MKLDNN_BACKEND_NATIVE 1

/* MKL-DNN CPU engine backend. */
#define MKLDNN_CPU_BACKEND MKLDNN_BACKEND_${MKLDNN_CPU_BACKEND}

#if defined(MKLDNN_CPU_BACKEND)
#    if MKLDNN_CPU_BACKEND != MKLDNN_BACKEND_NATIVE
#        error Unexpected MKLDNN_CPU_BACKEND
#    endif
#else
#    error MKLDNN_CPU_BACKEND must be defined
#endif

#endif
