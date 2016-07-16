#ifndef WINDOWS_HELPER_ERROR_HANDLING_H
#define WINDOWS_HELPER_ERROR_HANDLING_H

#include "WindowsHelper.h"
#include <string>

namespace WinHelper
{
	static WINHELP_FUN std::string GetLastSystemError();
}
#endif