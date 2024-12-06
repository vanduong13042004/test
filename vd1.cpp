#include<iostream>
#include<string>
using namespace std;
int main(){
	string x;
	char c;
	cin >> c;
	cin.ignore();
	getline(cin , x);
	int dem = 0;
	string vitri;
	int i ;
	int pos;
	for(i=0;i<x.size();i++){
		if(char(x[i])==c)
		dem++;
	}
	if(dem==0){
		cout << "Khong xuat hien";
		
	}cout << "So lan xuat hien cua "<<c<<"trong"<<x<<"la:"<<dem<<endl;
	
	 cout<<"vi tri cua "<<c<<" trong "<<x<<" la :";
	 for(i=0;i<=x.size;i++){
	 	if(char)
	 }
	

}
