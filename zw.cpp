#include <iostream>
using namespace std;
int main()
{
char 不管你信不信[]="我是信了";
cout<<"不管你信不信";
for(int i=0;i<sizeof(不管你信不信);i++)
  cout<<不管你信不信[i];
  cout<<endl;
return 0;
}