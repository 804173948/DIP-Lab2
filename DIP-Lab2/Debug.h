
#pragma once
#include <cstring>
#include <iostream>

#define USE_CONSOLE

#ifdef USE_CONSOLE
#define LOG(x) cout<<x<<endl
#else
#define LOG(x) ()
#endif

using namespace std;

static class DebugUtils {
public:
	static bool consoleOpened;

	static void openConsole();
	static void closeConsole();

	static void startTimer();
	static void endTimer();

private:
	static double ticks;
};