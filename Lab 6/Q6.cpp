#include <iostream>

using namespace std;

class Fraction {
private:
	int numerator;
	int denominator;

public:
	Fraction(int n, int d) {
		numerator = n;
		denominator = d;
	}

	void simplifyFraction() {
		if (denominator == 0) {
			cout << "Denominator cannot be zero" << endl;
		}
		else {
			int max;
			if (numerator > denominator) {
				max = numerator;
			}
			else {
				max = denominator;
			}
			for (int i = 2; i <= max; i++) {
				if ((numerator % i)==0 && (denominator % i)==0) {
					numerator /= i;
					denominator /= i;
					i = 1;
				}
			}
			cout << "After simplification: " << numerator << "/" << denominator << endl;
		}
	}

};

int main() {
	cout << "Tooba Farooq SE-009" << endl;

	Fraction frac1(32, 16);
	cout << "Fraction before simplification: " << 32 << "/" << 16 << endl;
	frac1.simplifyFraction();

	return 0;
}
