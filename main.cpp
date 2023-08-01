#include "TestColorCode.h"

using namespace TelCoColorCoder;
using namespace TestColor;

int main() {

	TestColor::testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
	TestColor::testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

	TestColor::testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
	TestColor::testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
	//TelCoColorCoder::PrintColorCodeManual();

	return 0;
}