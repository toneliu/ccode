#include <iostream>
using namespace std;

void per(char *p,const int k,const int m)
{
	if(k==m)
	{
		for(int i=0;i<=m;i++)
			cout<<p[i];
		cout<<endl;
	}
	for(int i=k;i<=m;i++)
	{
		swap(p[k],p[i]);
		per(p,k+1,m);
		swap(p[k],p[i]);
	}

}

int main()
{
	char s[]="abc";
	per(s,0,2);
	return 0;
}
