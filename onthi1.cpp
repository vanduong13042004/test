#include<iostream> 
#include<string>
using namespace std;
int main(){
	int n;
	string s[100];
	string a;
	do{
		cout<<"N = ";
		cin >> n; cin.ignore();
	}while(n<=0||n>=10);
	
	for(int i = 0; i< n;i++){
		cout<< "Ho ten thu "<<i+1<<": ";
		
		getline(cin,s[i]);	
	}
	int min = s[0].size();
	for(int i = 0; i<n ;i ++){
		if(min>s[i].size()){
			min=s[i].size();
			
		}
	}
	cout <<"Ho ten ngan nhat (dau tien): ";
	for(int i = 0; i<n ;i ++){
		if(min==s[i].size()){
			cout<<s[i];
			break;
		}
	}
	
}
