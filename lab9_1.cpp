#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
	double loan, rate, ppy;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;

	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int year = 1;
	cout << fixed << setprecision(2);
	while (loan > 0)
	{
		cout << setw(13) << left << year++;
		cout << setw(13) << left << loan;
		double yearInterest = loan * rate / 100.0;
		cout << setw(13) << left << yearInterest;
		loan += yearInterest;
		cout << setw(13) << left << loan;
		double payment = ppy;
		if (payment > loan)
			payment = loan;
		cout << setw(13) << left << payment;
		loan -= ppy;
		if (loan < 0)
			loan = 0;
		cout << setw(13) << left << loan;
		cout << "\n";
	}

	return 0;
}