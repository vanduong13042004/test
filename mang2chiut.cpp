#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cout<<"Nhap xau S:";
	getline(cin,s);
	string n=s;
	int dem =1;
	for(int i=0;i<s.size();i++){
		if(s[i]==s[i+1]&&s[i]==' '){
			s.erase(i,1);
			i--;
		}
		else if(s[0]==' '){
			s.erase(0,1);
		}
		else if(s[s.size()-1]==' '){
			s.erase(s.size()-1,1);
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]==' ') dem=dem+1;
	}
	cout<<"So tu cua S:"<<dem<<endl;
	string w;
	cout<<"Nhap xau W:";
	getline(cin,w);
	int vt=n.find(w);
	if(vt<=0){
	cout<<"Xau W khong xuat hien trong S!";
	}
	else{
	cout<<"Xau W xuat hien trong S o vi tri:"<<vt;
	}
return 0;
}
