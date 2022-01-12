#pragma once

#ifdef ONONELINE_EXPORTS
#define ONONELINE_API __declspec(dllexport)
#else
#define ONONELINE_API __declspec(dllimport)
#endif

extern "C" ONONELINE_API bool on_one_line(int x1, int x2, int x3, int y1, int y2, int y3);