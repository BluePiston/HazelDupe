#pragma once

#ifdef HZD_PLATFORM_WINDOWS
	#ifdef HZD_BUILD_DLL
		#define HAZELDUPE_API __declspec(dllexport)
	#else
		#define HAZELDUPE_API __declspec(dllimport)
	#endif
#else
#error Hazel only supports windows!
#endif