#include "ColorPair.h"

const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

std::string TelCoColorCoder::ColorPair::ToString() {
	std::string colorPairStr = MajorColorNames[majorColor];
	colorPairStr += ", ";
	colorPairStr += MinorColorNames[minorColor];
	return colorPairStr;
}

TelCoColorCoder::ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber) {
	int zeroBasedPairNumber = pairNumber - 1;
	MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
	MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
	return TelCoColorCoder::ColorPair(majorColor, minorColor);
}

int TelCoColorCoder::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
	return major * numberOfMinorColors + minor + 1;
}

void TelCoColorCoder::PrintColorCodeManual()
{
	cout << "  Color Code Manual :  \n";
	cout << "----------------------------------------\n";
	cout << "| Pair No. | Major Color, Minor Color  |\n";
	cout << "----------------------------------------\n";

	for (int majorclr = 0; majorclr < numberOfMajorColors; majorclr++)
	{
		for (int minorclr = 0; minorclr < numberOfMinorColors; minorclr++)
		{
			int PairNo = GetPairNumberFromColor(MajorColor(majorclr), MinorColor(minorclr));
			cout << "| " << PairNo << string((PairNo < 10 ? 8 : 7), ' ').c_str();
			string ColorName = GetColorFromPairNumber(PairNo).ToString();
			cout << "| " << ColorName.c_str() << string(26 - ColorName.length(), ' ').c_str() << "|" << endl;
		}
	}

	cout << "----------------------------------------\n";
}