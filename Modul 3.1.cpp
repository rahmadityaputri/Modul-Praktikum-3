#include<iostream>
#include<stdio.h>
using namespace std;

int HitungKarakter(const char*s){
	int x = 0;
		for (;*s!='\0';s++){
			++x;
		}
		return x;
}

main (void){
	char String [100];
	cout<<"Inputkan Kata : ";
	cin.getline(String,100);cout<<endl;
	cout<<"Jumlah Karakter : "<<HitungKarakter(String)<<" Huruf "<<endl;
}
