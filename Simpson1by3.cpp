#include<iostream>
#include<math.h>
using namespace std;
#define f(x) x*x
int main(){
	float l,u,intg=0,step,k;
	int subin;
	cout<<" cout lower limit :- ";
	cin>>l;
	
	cout<<" cout upper limit :- ";
	cin>>u;
	cout<<" enter subinterval :- ";
	cin>>subin;
	step=(u-l)/subin;
	intg=f(l)+f(u);
	for(int i=1;i<subin;i++){
		k=(l+i)*step;
		if(i%2==0){
			intg+=2*(f(k));
		}
		else{
			intg+=4*(f(k));
		}
	}
	intg*=step/3.0;
	cout<<endl <<"ans "<<intg;
	

return 0;
}
