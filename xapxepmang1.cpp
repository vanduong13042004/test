#include<iostream>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for( int i = 0; i < n;i ++){
		for(int j = i+1;j < n; j++){
				if(a[i]>a[j]){
					int doi = a[i];
					a[i] = a[j];
					a[j]= doi;
				}
		}
	}
	for(int i = 0; i < n; i++){
	
	cout <<a[i]<< " ";}
}
