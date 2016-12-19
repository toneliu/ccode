#include <iostream>
using namespace std;
void selectsort(int list[],int n);
int main()
{
	int a[]={2,3,53,6,1,4,7,3,7,4,4,1,0,4,3,2,1,9,7,8,3,2,4,5,6,7,0};
	selectsort(a,sizeof(a)/4);
for(int k=0;k<sizeof(a)/4;k++)
	cout<<a[k]<<" ";
  	cout<<endl;
  	return 0;
}
void selectsort(int list[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(list[j]<list[min])
				// list[j]=list[j+1]
				//std::swap(list[j],list[min]);
				min=j;

			//cout<<list[j]<<"<->"<<list[min]<<endl;
		}
		cout<<list[i]<<"<->"<<list[min]<<endl;
		std::swap(list[i],list[min]);
	}
}
