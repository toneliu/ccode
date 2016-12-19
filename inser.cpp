#include <iostream>
using namespace std;
template<class R> //函数模板
void insertionsort(R *a,int n)
{
	int in,out;
	for(out=1;out<n;out++)
	{
		R temp=a[out];
		in = out;
		while(in>0&&a[in-1]>temp)
		{
			a[in]=a[in-1];
			in--;
		}
		a[in]=temp;
	}
}
int main()
{
	float a[]={1,1.2,2.3,1.3,2,6,7,8,9,31,2};
	int b[]={1,3,5,7,9,0,2,4,6,8};
	insertionsort(b,10);
	for(int i=0;i<10;i++)
		cout<<b[i]<<endl;
	return 0;
}