#ifndef WINDOWS_HELPER_WINDOWS_HELPER_H
#define WINDOWS_HELPER_WINDOWS_HELPER_H

#ifdef WindowsHelper_EXPORTS
#define WINHELP_FUN __declspec(dllexport)
#else
#define WINHELP_FUN __declspec(dllimport)
#endif

#endif