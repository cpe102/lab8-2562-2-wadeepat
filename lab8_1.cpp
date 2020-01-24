#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	int i=1;
	double loan,interest,pay,x,dok,total,newbalance;	
	
	cout<<"Enter initial loan: ";
	cin>>loan;
	cout<<"Enter interest rate per year (%): ";
	cin>>interest;
	cout<<"Enter amount you can pay per year: ";
	cin>>pay;

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
	while(loan!=0){


	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		dok=loan*interest/100;
		cout << setw(13) << left << dok;
		total=loan+dok;
		cout << setw(13) << left <<total;
		if(pay>loan){
			x=total;
			newbalance=0;
		}else{
			x=pay;
			newbalance=total-x;
		}
		cout << setw(13) << left <<x;
		cout << setw(13) << left <<newbalance;
		cout << "\n";
		loan=newbalance;
		i++;
		
	}	
	
	return 0;
}
