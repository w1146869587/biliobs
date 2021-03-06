// Copyright 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_IOS_IOS_UTIL_H_
#define BASE_IOS_IOS_UTIL_H_

#include "base/base_export.h"
#include "base/basictypes.h"

namespace base {
namespace ios {

// Returns whether the operating system is iOS 8 or later.
BASE_EXPORT bool IsRunningOnIOS8OrLater();

// Returns whether the operating system is iOS 9 or later.
BASE_EXPORT bool IsRunningOnIOS9OrLater();

// Returns whether the operating system is at the given version or later.
BASE_EXPORT bool IsRunningOnOrLater(int32 major, int32 minor, int32 bug_fix);

// Returns whether iOS is signalling that an RTL text direction should be used
// regardless of the current locale. This should not return true if the current
// language is a "real" RTL language such as Arabic or Urdu; it should only
// return true in cases where the RTL text direction has been forced (for
// example by using the "RTL Psuedolanguage" option when launching from XCode).
BASE_EXPORT bool IsInForcedRTL();

}  // namespace ios
}  // namespace base

#endif  // BASE_IOS_IOS_UTIL_H_
