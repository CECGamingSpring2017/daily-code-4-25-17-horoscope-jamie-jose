#include <iostream>
using namespace std;

bool Horoscope(int input);

int main() {
	
	int input;
	cout << "enter your sign." << endl;
	cout << "capricorn is the first sign." << endl;
	cin >> input;
	Horoscope(input);

	if (Horoscope(input) == true)
		cout << "You're a capricorn, you're a GOAT" << endl;

}

bool Horoscope(int input) {
	switch (input) {
	case 1:
		cout << "capricorn" << endl;
		cout << "you're a GOAT" << endl;
		break;
	case 2:
		cout << "aquarius" << endl;
		cout << "you're going to shower today" << endl;
		break;
	case 3:
		cout << "pisces" << endl;
		cout << "you had FISH today" << endl;
		break;
	case 4:
		cout << "aries" << endl;
		cout << "you're going to CSU" << endl;
		break;
	case 5:
		cout << "taurus" << endl;
		cout << "you're Michael Jordan" << endl;
		break;
	case 6:
		cout << "gemini" << endl;
		cout << "you're interracial" << endl;
		break;
	case 7:
		cout << "cancer" << endl;
		cout << "you're gonna die of cancer" << endl;
		break;
	case 8:
		cout << "leo" << endl;
		cout << "you're darkmastaleo" << endl;
		break;
	case 9:
		cout << "vigro" << endl;
		cout << "you like doing your makeup" << endl;
		break;
	case 10:
		cout << "libra" << endl;
		cout << "you're on a diet" << endl;
		break;
	case 11:
		cout << "scorpio" << endl;
		cout << "you're a scorpian" << endl;
		break;
	case 12:
		cout << "sagittarius" << endl;
		cout << "you're a bow and arrow" << endl;
		break;
	}
}
