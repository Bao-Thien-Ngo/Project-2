#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {

	int numpeople;
	char option;
	char upperOption;
	string address; // shipping address

	int i = 1;
	bool x = true; // set x to true to run the while loop
	double total = 0;

	const double price_smallBox = 7.99;
	const double price_mediumBox = 12.99;
	const double price_largeBox = 16.99;
	const double price_xlargeBox = 22.99;

	cout << "--Welcome to USPS system--" << endl;
	cout << endl;
	cout << "How many customer you want to serve >> ";
	cin >> numpeople;
	cout << endl;

	while (i <= numpeople) {

		int a = 0; //smallBox required
		int b = 0; //mediumBox required
		int c = 0; //largeBox required
		int d = 0; //XlargeBox required

		int total_small = 0; // total small box
		int total_medium = 0; // total medium box
		int total_large = 0; // total large box
		int total_Xlarge = 0; // total xlarge box

		double e; // total money for a customer
		cout << "Starting Customer #" << i << endl;
		cout << endl;

		while (x) {

			cout << endl;
			cout << "Choose from the following:" << endl;
			cout << "(S) for smallBox, (M) for mediumBox, (L) for largeBox, (X) for XlargeBox or (Q) to Quit >> ";
			cin >> option;
			upperOption = toupper(option);
			cout << endl;

			switch (upperOption) {

			case 'S':

				cout << "How many small boxes? ";
				cin >> a;
				cout << endl;
				total_small += a;
				break;

			case 'M':

				cout << "How many medium boxes? ";
				cin >> b;
				cout << endl;
				total_medium += b;
				break;

			case 'L':

				cout << "How many large boxes? ";
				cin >> c;
				cout << endl;
				total_large += c;
				break;

			case 'X':

				cout << "How many xlarge boxes? ";
				cin >> d;
				cout << endl;
				total_Xlarge += d;
				break;

			case 'Q':

				cout << "Where do you want to send this: " << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				getline(cin, address);
				cout << endl;
				cout << "Customer #" << i << endl;
				cout << "     " << "smallBoxes " << total_small << " @ " << price_smallBox << " = " << total_small * price_smallBox << endl;
				cout << "     " << "mediumBoxes " << total_medium << " @ " << price_mediumBox << " = " << total_medium * price_mediumBox << endl;
				cout << "     " << "largeBoxes " << total_large << " @ " << price_largeBox << " = " << total_large * price_largeBox << endl;
				cout << "     " << "extra large boxes " << total_Xlarge << " @ " << price_xlargeBox << " = " << total_Xlarge * price_xlargeBox << endl;
				cout << endl;
				cout << "Sending to:" << endl;
				cout << "(" << address << ")" << endl;
				cout << endl << endl;
				e = total_small * price_smallBox + total_medium * price_mediumBox + total_large * price_largeBox + total_Xlarge * price_xlargeBox;
				cout << "     " << "Total = " << e << endl << endl;
				total += e;
				x = false;
				break;

			default:

				cout << "You have to choose s, m, l, x, or q" << endl;
				break;
			}
		}
		x = true;
		i += 1;

	}
	cout << "The total for all Customers is " << total << endl;
	system("pause");
	return 0;
}
