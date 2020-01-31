// Copyright (c) 2013 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef SHELL_APP_ATOM_LIBRARY_MAIN_H_
#define SHELL_APP_ATOM_LIBRARY_MAIN_H_

#include "build/build_config.h"
#include "electron/buildflags/buildflags.h"

#if defined(OS_MACOSX)
extern "C" {
__attribute__((visibility("default"))) int ElectronMain(int argc, char* argv[]);

#if BUILDFLAG(ENABLE_RUN_AS_NODE)
__attribute__((visibility("default"))) int ElectronInitializeICUandStartNode(
    int argc,
    char* argv[]);
#endif
}
#endif  // OS_MACOSX

#endif  // SHELL_APP_ATOM_LIBRARY_MAIN_H_
