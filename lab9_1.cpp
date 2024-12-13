#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int EndOfYear=1;
	double pay,interest,Prev,Interest,Total,Newbalance=0;
	cout << "Enter initial loan: ";
	cin >> Prev;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
    
	    	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

    do{
		Interest = (interest*Prev)/100;
	    Total = Prev + Interest;
		if(Total<pay){
			pay = Total;
		}
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

	}while(Newbalance!=0);
    

	return 0;
}
