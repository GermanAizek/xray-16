#pragma once

#include "Common/Platform.hpp"
#include "Common/Common.hpp"
#include "xrCore/xrCore.h"

#pragma warning(push)
#pragma warning(disable : 4995)
#include <d3dx9.h>
#include <commctrl.h>
#pragma warning(pop)

#define ENGINE_API
#define ECORE_API
#define XR_EPROPS_API
#include "xrCore/clsid.h"
#include "xrCDB/xrCDB.h"
#include "Common/_d3d_extensions.h"

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdio.h>

#ifdef AI_COMPILER
#include "smart_cast.h"
#endif

#include "utils/xrLCUtil/ILevelCompilerLogger.hpp"
#include "utils/xrLCUtil/xrThread.hpp"
#include "xrCore/cdecl_cast.hpp"

extern ILevelCompilerLogger& Logger;
extern CThread::LogFunc ProxyMsg;
extern CThreadManager::ReportStatusFunc ProxyStatus;
extern CThreadManager::ReportProgressFunc ProxyProgress;

#define READ_IF_EXISTS(ltx, method, section, name, default_value)\
    (ltx->line_exist(section, name)) ? ltx->method(section, name) : default_value

#undef THROW

#if XRAY_EXCEPTIONS
IC xr_string string2xr_string(LPCSTR s) { return s ? s : ""; }
#define THROW(xpr)\
    if (!(xpr))\
    {\
        throw __FILE__LINE__ "\"" #xpr "\"";\
    }
#define THROW2(xpr, msg0)\
    if (!(xpr))\
    {\
        throw xr_string(__FILE__LINE__).append(" \"").append(#xpr).append(string2xr_string(msg0));\
    }
#define THROW3(xpr, msg0, msg1)\
    if (!(xpr))\
    {\
        throw xr_string(__FILE__LINE__)\
            .append(" \"")\
            .append(#xpr)\
            .append(string2xr_string(msg0))\
            .append(", ")\
            .append(string2xr_string(msg1));\
    }
#else
#define THROW VERIFY
#define THROW2 VERIFY2
#define THROW3 VERIFY3
#endif

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
