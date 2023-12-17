//Implementing Lagrange
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	float x[100],y[100],xp,yp=0,p;
	int n;
	cout<<"enter the value of n :- ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"x "<<i<<endl;
		cin>>x[i];
		cout<<endl;
		cout<<"y "<<i<<endl;
		cin>>y[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<x[i]<<" -> "<<y[i]<<endl;
	}
	cout<<"enter the point of interpolation\n";
	cin>>xp;

	for(int i=0;i<n;i++){
		p=1;
		for(int j=0;j<n;j++){
			if(i!=j){
				p=p*(xp-x[j])/(x[i]-x[j]);
			}
		}
		yp=yp+p*y[i];
	}
		cout<<"\n the interpolated value for "<<xp<<" is "<<yp<<endl;
}
