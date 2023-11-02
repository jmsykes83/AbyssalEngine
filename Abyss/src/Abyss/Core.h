#pragma once

#ifdef AB_PLATFORM_WINDOWS
	#ifdef AB_BUILD_DLL
		#define ABYSS_API __declspec(dllexport)
	#else
		#define ABYSS_API __declspec(dllimport)
	#endif
#else
	#error Abyss is a windows only platform
#endif