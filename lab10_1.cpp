#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,ppy;
	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year=1;
	double PrevBalance,interest,total,payment,NewBalance;
	
	while (NewBalance != 0) {
		if(year ==1){
			PrevBalance = loan;
	} else {
			PrevBalance = NewBalance;
	}
	interest = PrevBalance*(rate/100);
	total = PrevBalance + interest;
	if(ppy < total){
		payment = ppy;
	} else {
		payment = total;
	}
	NewBalance = total - payment;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";	
	year++;
	
}
	return 0;
}
