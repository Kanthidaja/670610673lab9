#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int EndOfYear=1;
	double pay,interest,Prev,Interest,Total,Newbalance=0,NewPrev=0;
	cout << "Enter initial loan: ";
	cin >> Prev;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
    
    do{
		Interest = (interest*Prev)/100;
	    Total = Prev + Interest;
	    Newbalance = Total - pay;

			cout << fixed << setprecision(2); 
	cout << setw(13) << left << EndOfYear; 
	cout << setw(13) << left << Prev;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << Newbalance;
	cout << "\n";	
    
	Prev = Newbalance;
	EndOfYear++;

	}while(Newbalance>pay && Total>=pay);
    
	Interest = (interest*Prev)/100;
	Total = Prev + Interest;
	pay = Total;
	Newbalance = Total-pay;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << EndOfYear; 
	cout << setw(13) << left << Prev;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << Newbalance;
	cout << "\n";	


	
		

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

	
	return 0;
}
