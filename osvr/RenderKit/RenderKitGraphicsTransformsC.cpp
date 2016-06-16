/** @file
@brief Implementation of the OSVR direct-to-device rendering interface

@date 2016

@author
Russ Taylor <russ@sensics.com>
<http://sensics.com/osvr>
*/

// Copyright 2016 Sensics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Internal Includes
#include "RenderKitGraphicsTransformsC.h"
// @todo Avoid duplication of functions between the C and C++ APIs.

// Library/third-party includes
#include <quat.h>

// Standard includes
#include <iostream>
#include <string.h>

#include "RenderKitGraphicsTransformsCommonCode.cpp"
