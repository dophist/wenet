// Copyright (c) 2021 Mobvoi Inc (Binbin Zhang)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#ifndef UTILS_FLAGS_H_
#define UTILS_FLAGS_H_

#ifdef USE_OPENFST_FLAGS
#include  "fst/flags.h"
#define ParseCommandLineFlags(argc, argv, flags) \
        SET_FLAGS("", argc, argv, true);
#else
#include "gflags/gflags.h"
#define ParseCommandLineFlags(argc, argv, flags) \
        google::ParseCommandLineFlags(argc, argv, flags);
#endif

#endif  // UTILS_FLAGS_H_
