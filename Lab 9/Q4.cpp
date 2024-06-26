#include <iostream>
#include <string>

using namespace std;

class Payment {
protected:
	int payment;
public:
	Payment(int p): payment(p) {}

	virtual void processPayment() = 0;

};

class CreditcardPayment: public Payment {
private:
	string cardNumber;
	string cardHolderName;
	string expiryDate;
	string CVV;
public:
	CreditcardPayment(string cN, string cHN, string eD, string cvv, int p) :cardNumber(cN), cardHolderName(cHN),
		expiryDate(eD), CVV(cvv), Payment(p) {}

	void processPayment() override {
		cout << "Processing credit card payment of Rs" << payment << endl;
		cout << "Card Number: " << cardNumber << endl;
		cout << "Card Holder: " << cardHolderName << endl;
		cout << "Expiry Date: " << expiryDate << endl;
		cout << "CVV: " << CVV << endl;
		cout << "Payment processed successfully!" << endl;
	}
};

class PaypalPayment : public Payment {
private:
	string email;
	string password;
public:
	PaypalPayment(string e, string pW, int p) : email(e), password(pW), Payment(p) {}

	void processPayment() override {
		cout << "Processing PayPal payment of Rs" << payment << endl;
		cout << "Email: " << email << endl;
		cout << "Payment processed successfully!" << endl;
	}
};


int main() {
	int payment;
	string method;

	cout << "Tooba Farooq SE-009" << endl;

	cout << "Enter amount of payment: ";
	cin >> payment;

	cout << "Which payment method you want to use? Credit card/Paypal: ";
	cin.ignore();
	getline(cin, method);

	if (method == "Credit card") {
		Payment* creditcardPtr = new CreditcardPayment("1234-5678-9012-3456", "Tooba Farooq", "12/2025", "123", payment);
		creditcardPtr->processPayment();
	}
	else {
		Payment* paypalPtr = new PaypalPayment("toobafar004@gmail.com", "abc123", payment);
		paypalPtr->processPayment();

	}

	return 0;
}
