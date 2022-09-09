#include<iostream>
using namespace std;

int main (){
	const float phi = 3.14;
	float L, r;
	
	//value r
	r = 7;
	
	cout<<"menghitung luas lingkaran\n";
	cout<<"masukkan jari-jari\n";
	cin>>r;
	L = phi * r * r;
	
	//penampilan hasil 
	cout<<L;
	
	return 0;
	
}
