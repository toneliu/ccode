#include <iostream>
using namespace std;

void doA()
{
	cout<<"hello world"<<endl;
	doA();
}

//n!=n*(n-1)!
long 阶乘(int n)
{
	if(n==0)
		return 1;
	else
		return n*阶乘(n-1);
}

int main()
{
	// doA();
	// cout<<阶乘(5)<<endl;
	for(int num=0;num<10;num++)
	{
		cout<<num<<"!="<<阶乘(num)<<endl;
	}
	return 0;
}
