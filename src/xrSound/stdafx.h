#pragma once

#include "Common/Platform.hpp"
#include "Common/Common.hpp"
#include "xrCore/xrCore.h"

// mmsystem.h
#define MMNOSOUND
#define MMNOMIDI
#define MMNOAUX
#define MMNOMIXER
#define MMNOJOY
#include <mmsystem.h>

// mmreg.h
#define NOMMIDS
#define NONEWRIFF
#define NOJPEGDIB
#define NONEWIC
#define NOBITMAP
#include <mmreg.h>

#include <vorbis/codec.h>
#include <vorbis/vorbisfile.h>

#include "xrCDB/xrCDB.h"
#include "Sound.h"

#undef ENGINE_API

#include "xrCore/xr_resource.h"

#ifdef _EDITOR
#include "utils/ETools/ETools.h"
#endif
