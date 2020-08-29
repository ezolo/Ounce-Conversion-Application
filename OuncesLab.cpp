/* Name: Eva Zolotarev
Program Title: A Terribly Weighty Subject!
Type: Lab
Program Description:
1.The following program should convert ounces to pounds and calculate the remainder, as well.
*/

#include <iostream>

using namespace std;

int main()
{
	long ouncesHave;
	double ozLb = 16;

	cout << "Welcome to the Ounce Conversion Program!";

	cout << "\n\nHow many ounces do you have? ";
	cin >> ouncesHave;

	cout << "\n\nThank you! Calculating... Done.\n";

	double ouncesToPoundsWhole = ouncesHave / 16;
	double ouncesToPoundsRemainder = ((ouncesHave / 16.0) - (ouncesHave / 16)) / (1 / 16.0);
	double ouncesToPoundsTotal = ouncesHave / 16.0;
	cout << "\n\n" << ouncesHave << " oz. is equivalent to " << ouncesToPoundsWhole << " lbs. and " << ouncesToPoundsRemainder << " oz." << "(" << ouncesToPoundsTotal << " lbs.).";
	cout << "\n\nThank you for using the OCP!!\n";
	return 0;
}
