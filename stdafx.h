// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <cstdio>
#ifdef _WIN32
#include <tchar.h>
#else
#include "tchar_amigaos4.h"
#endif
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
#include "global.h"
// TODO: reference additional headers your program requires here
