#include<iostream>
using namespace std;

void printO(int N,int M){
	int i=0,j=0;
	if(M>0 && N>0){
		while(i<N){
			while(j<M){
				cout<<"O";
				j++;
			}
			cout<<endl;
			j=0;
			i++;
		}
	}else{
		cout<<"Invalid input"<<endl;
	}
}
int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,0);
	cout << "\n";	
	
	return 0;
}
