#include<iostream>
#include<vector>
using namespace std;
void chon(int a[] , int n) {
	for (int i = 0; i < n-1; i++) {
		int vt = i;
		for (int j = i + 1; j < n; j++)
			if (a[vt] > a[j])
				vt = j; 
		if (vt != i) {
			swap(a[vt],a[i]);
		}
	}
}
void bubbleSort(vector<int> & a) 
{
	for (int i = 0; i < a.size()-1; i++) 
	{
		// Buoc i
		for (int j = 0; j < a.size()-1-i; j++) 
		{
			if (a[j] > a[j+1]) 
			{
				int tg = a[j];
				a[j] = a[j+1];
				a[j+1] = tg;
			}
		}
		xuatmang(a);
		cout<<"\n";
	}
}


void chen(int a[],int n) {
	int j;
	for (int p = 1; p < n; p++) {
		int tmp = a[p]; 
		for (j = p; j > 0; j--) { 
			if (tmp < a[j-1])
				a[j] = a[j-1];
			else
				break;
		}
		a[j] = tmp;
	}
}
void nhap(int n,int a[]){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"So luong phan tu: ";
	cin>>n;
	int a[n];
	nhap(n,a);
	chon(a,n);
	cout<<"Day sau khi sap xep chon: ";
	in(a,n);
	//noibot(a,n);
	//cout<<"Day sau khi sap xep noi bot: ";
	//in(a,n);
	//chen(a,n);
	//cout<<"Day sau khi sap xep chen: ";
	//in(a,n);
return 0;
}


