#define _WIN32_WINNT _WIN32_WINNT_WINXP
#define NOMINMAX
#include <windows.h>
#include <cstdlib>

// Start L2 as .bin with IP as parameter.
// You can use IP or DNS as IP parameter.
// You could include other parameters.
// You can change the path to the .bin file to avoid including the L2.exe inside the System folder.
// Author: Zoey76
int _stdcall wWinMain(HINSTANCE hInst, HINSTANCE prevInst, LPWSTR szCmdLine, int nCmdShow)
{
	ShellExecute(0, L"open", L"cmd.exe", L"/C start l2.bin IP=127.0.0.1", 0, SW_HIDE);
}