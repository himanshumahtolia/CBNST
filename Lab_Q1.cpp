#include<iostream>
using namespace std;
int main(){
	float T,A,Ea,Er,Pr;
	cout<<"Enter True Value:-"<<endl;
	cin>>T;
	cout<<"Enter Absolute Value:-"<<endl;
	cin>>A;
	Ea=T-A;
	Er=Ea/T;
	Pr=Er*100;
	cout<<"Absolute Error:  "<<Ea<<endl;
	cout<<"Relative Error:  "<<Er<<endl;
	cout<<"Percentage Error:  "<<Pr<<endl;
}
