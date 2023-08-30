#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	float T,Tv,Rd;
	int D;
	cout<<"Enter a True Value:"<<endl;
	cin>>T;
	cout<<"Enter the number of Decimal places you want :"<<endl;
	cin>>D;
	float factor=pow(10.0,D);
	Tv=int(T*factor)/factor;
	Rd=int (T*factor+0.5)/factor;
	cout<<"Original value:"<<T<<endl;
	cout<<"Truncated value:"<<Tv<<endl;
	cout<<"Rounded value:"<<Rd<<endl;
	return 0;
}
