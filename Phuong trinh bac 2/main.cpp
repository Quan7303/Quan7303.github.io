#include <iostream>
#include <math.h>
using namespace std;
int main() {
	cout<<" PUONG TRINH BAC 2: ax*2+bx+c=0\n";
	double a,b,c;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"Nhap c:";
	cin>>c;
	if (a==0)
	{
		if(b==0 && c==0)
		{
			cout<<" PT vo so no";
		}
		else if(b==0 && c!=0)
		{
			cout<<"PT vo no";
		}
		else
		{
		    double 	x=-c/b;
	        cout<<"PT co 1 no:"<<x<<endl;  
		}
	}
	else
	{
		double denta=pow(b,2)-4*a*c;
		if(denta<0)
		{
			cout<<"PT vo no";
		}
		else if (denta==0)
		{
			double nkep=-b/(2*a);cout<<"PT co no kep x1=x2="<<nkep;
		}
		else
		{
			double x1=(-b-sqrt(denta))/(2*a);
			double x2=(-b+sqrt(denta))/(2*a);
			cout<<"PT co 2 no phan biet\n";
			cout<<"x1="<<x1<<endl;
			cout<<"x2="<<x2<<"\n";
		}
	}
	return 0;
}
