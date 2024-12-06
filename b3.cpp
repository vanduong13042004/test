#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	string s;
	cout<<"Nhap xau S: ";
	getline(cin,s);
	int dem=0;
	for(int i = 0;i<s.size(); i++){
		if(s[i] == ' ' ){
			dem++;
		}
	}
	cout<<"So tu cua S: "<<dem+ 1<< endl; 
} 
