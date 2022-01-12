#include "pch.h"
#include "OnOneLine.h"
#include <cmath>
#include "limits"

const double EPS = 1e-8;

bool on_one_line(int x1, int x2, int x3, int y1, int y2, int y3)
{
	return std::abs(0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))) <= EPS;
}
