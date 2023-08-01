#include "TestColorCode.h"

namespace TestColor
{
	void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor)
	{
		TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
		std::cout << "Got pair " << colorPair.ToString().c_str() << std::endl;
		assert(colorPair.getMajor() == expectedMajor);
		assert(colorPair.getMinor() == expectedMinor);
	}

	void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
	{
		int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
		std::cout << "Got pair number " << pairNumber << std::endl;
		assert(pairNumber == expectedPairNumber);
	}
}