#include<iostream>
using namespace std;



int main() {

	int a1,a2,a3;
	int m1,m2,m3;
	
	cout<<"Chinese Remainder For 3 Equation Calculator"<<endl;
	
	
	
	cout<<"------------------------------------"<<endl;
	cout<<"Enter the value of a1: ";
	cin>>a1;
	cout<<"Enter the value of a2: ";
	cin>>a2;
	cout<<"Enter the value of a3: ";
	cin>>a3;
	
	cout<<"------------------------------------"<<endl;
	cout<<"Enter the value of m1: ";
	cin>>m1;
	cout<<"Enter the value of m2: ";
	cin>>m2;
	cout<<"Enter the value of m3: ";
	cin>>m3;

	cout<<"------------------------------------"<<endl;
	cout<<"We have from chinese remainder theorem,"<<endl;
	cout<<"(M1x1a1 + M2x2a2 + M3x3a3) mod M"<<endl;

	cout<<"------------------------------------"<<endl;
	cout<<"M = m1*m2*m3"<<endl;
	cout<<"M = "<<m1<<"*"<<m2<<"*"<<m3<<endl;
	int M = m1 * m2 * m3;
	cout<<"M = "<<M<<endl;


	cout<<"------------------------------------"<<endl;
	cout<<"M1 = m1*m2*m3 / m1"<<endl;
	cout<<"M1 = "<<m1<<"*"<<m2<<"*"<<m3<<"/"<<m1<<endl;
	int M1 = M/m1;
	cout<<"M1 = "<<M1<<endl;


	cout<<"------------------------------------"<<endl;
	cout<<"M2 = m1*m2*m3 / m2"<<endl;
	cout<<"M2 = "<<m1<<"*"<<m2<<"*"<<m3<<"/"<<m2<<endl;
	int M2 = M/m2;
	cout<<"M2 = "<<M2<<endl;



	cout<<"------------------------------------"<<endl;
	cout<<"M3 = m1*m2*m3 / m3"<<endl;
	cout<<"M3 = "<<m1<<"*"<<m2<<"*"<<m3<<"/"<<m3<<endl;
	int M3 = M/m3;
	cout<<"M3 = "<<M3<<endl;



	cout<<"------------------------------------"<<endl;
	cout<<"Again,Usinr relation to find Xi,"<<endl;
	cout<<"Mi * Xi (mod mi) =1"<<endl;
    int rem = 0;
	

	cout<<"------------------------------------"<<endl;
	cout<<"For x1,"<<endl;
	cout<<"M1 * X1 (mod m1) =1"<<endl;
	cout<<M1<<" * x1 (mod "<<m1<<") =1"<<endl;
	int x1 = 0;
	while(rem != 1) {
		int s = M1 * x1;
		if(s % m1 == 1) rem = 1;
		else x1++;
	}
	cout<<M1<<" * "<<x1<<" (mod "<<m1<<") =1"<<endl;
	cout<<"Therefore, x1 = "<<x1<<endl;


	cout<<"------------------------------------"<<endl;
	cout<<"For x2,"<<endl;
	cout<<"M2 * X2 (mod m2) =1"<<endl;
	cout<<M2<<" * x2 (mod "<<m2<<") =1"<<endl;
	int x2 = 0;
	rem = 0;
	while(rem != 1) {
		int s = M2 * x2;
		if(s % m2 == 1) rem = 1;
		else x2++;
	}
	cout<<M2<<" * "<<x2<<" (mod "<<m2<<") =1"<<endl;
	cout<<"Therefore, x2 = "<<x2<<endl;
	

	cout<<"------------------------------------"<<endl;
	cout<<"For x3,"<<endl;
	cout<<"M3 * X3 (mod m3) =1"<<endl;
	cout<<M3<<" * x3 (mod "<<m3<<") =1"<<endl;
	int x3 = 0;
	rem = 0;
	while(rem != 1) {
		int s = M3 * x3;
		if(s % m3 == 1) rem = 1;
		else x3++;
	}
	cout<<M3<<" * "<<x3<<" (mod "<<m3<<") =1"<<endl;
	cout<<"Therefore, x3 = "<<x3<<endl;
	
	
    cout<<"------------------------------------"<<endl;
	cout<<"x = (M1x1a1 + M2x2a2 + M3x3a3) mod M"<<endl;
	float output = ((M1 * x1 * a1) + (M2 * x2 * a2) + (M3 * x3 * a3)) % M;
	cout<<"X = "<<output<<endl;


    cout<<"------------------------------------"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"------------Thank You---------------"<<endl;
	cout<<"------------------------------------"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"------------------------------------"<<endl;



















	




















	


	
	
	
	
	return 0;
}
