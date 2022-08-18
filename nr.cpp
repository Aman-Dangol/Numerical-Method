#include<iostream>
#include<cmath>
#include<iomanip>
#define e 0.001
#define f(x) 3*x-cos(x)-1
#define df(x) 3+sin(x)
using namespace std;
int main()
{
	float i=0,x0,x1,f0,f1,df0;
	cout<<"input initial value";
	cin>>x0;
	do{
		f0=f(x0);
		df0=df(x0);
		x1=x0-(f0/df0);
		f1=f(x1);
		x0=x1;
		i++;
		cout<<"no of interation="<<i<<"\t";
		cout<<"root="<<setprecision(5)<<x1<<"\t";
		cout<<"functoin="<<setprecision(5)<<f1<<endl;
	}while(fabs(f1)>e);
	return 0;
		
}
