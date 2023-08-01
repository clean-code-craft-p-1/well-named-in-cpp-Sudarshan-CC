#pragma once
#include <assert.h>
#include "ColorPair.h"

using namespace TelCoColorCoder;

namespace TestColor
{
	void testNumberToPair(int, TelCoColorCoder::MajorColor, MinorColor);
	void testPairToNumber(MajorColor, MinorColor, int);
}