#ifndef COLORPAIR_H
#define COLORPAIR_H
#include <iostream>


using namespace std;

namespace TelCoColorCoder
{
	enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
	enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

	class ColorPair {
	private:
		MajorColor majorColor;
		MinorColor minorColor;
	public:
		ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor) {
		}

		MajorColor getMajor() {
			return majorColor;
		}

		MinorColor getMinor() {
			return minorColor;
		}

		std::string ToString();
	};

	TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber);
	int GetPairNumberFromColor(MajorColor major, MinorColor minor);
	void PrintColorCodeManual();

}
#endif