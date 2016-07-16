#include "winhelp/ErrorHandling.h"
#include <Windows.h>

namespace WinHelper {
	std::string GetLastSystemError()
	{
		DWORD error_code = GetLastError();
		if (error_code == 0)
			return "";

		LPSTR message_buffer = nullptr;
		DWORD size = FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL, error_code, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&message_buffer, 0, NULL);
		std::string message(message_buffer, size);
		LocalFree(message_buffer);
		return message;
	}
}
