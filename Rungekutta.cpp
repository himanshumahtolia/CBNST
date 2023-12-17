//Implementing Rungekutta2nd
#include<iostream>
#include<iomanip>
using namespace std;

float f(float x,float y){
	
	return x+y*y;
}
int main(){
	float x0,y0,h,xn,x,y,k1,k2;
	cout<<"Enter initial value (x0,y0) :- ";
	cin>>x0>>y0;
	cout<<"Enter step size ,end point :- ";
	cin>>h>>xn;
	x=x0;
	y=y0;
	cout<<fixed;
	while(x<xn){
		k1=h*f(x,y);
		k2=h*f(x+h,y+k1);
		y+=(k1+k2)/2;
		x+=h;
		cout<<"when x = "<<setprecision(4)<<setw(8)<<x;
		cout<<endl<<" y= "<<setw(8)<<y<<endl;
	}
	
return 0;
}
