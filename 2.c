#include <iostream>
using namespace std;
int main()
{
//printf("hello world %d!\n",a-1);
	int a,b;
	a=1;
	b=2;
	cout<<"a="<<a<<",b="<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<",b="<<b<<endl;
	return 0;
}

// void swap(int *p,int *w)
// {
// 	int temp=0;
// 	temp=*p;
// 	*p=*w;
// 	*w=temp;
// }
void swap(int &p,int &w)
{
	int temp=0;
	temp=p;
	p=w;
	w=temp;
}

