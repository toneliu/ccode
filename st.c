#include <stdio.h> 
void trs(char *str,int length,unsigned char *fi)
{
	for(int i=0;i<length;i++)
		{
		if(str[i]>=0x41)
			str[i]=str[i]-0x37;
		else
			str[i]=str[i]-0x30;
		}
	for(int i=0,j=0,w=0;i<length;i=i+2)
{

	 fi[j]=(str[i]<<4)|(str[i+1]&0x0f);
		// fi[j]=str[i];
	 j=j+1;
	 // if(j==3)
	 // {
	 // 	j=0;
	 // 	w++;
	 // }
}
		
	
}

int main() 
{ 
	unsigned char fin[2][3]={0};
	char str1[] = { "bAba8f7f6d4e"}; 
	trs(str1,sizeof(str1),fin);
	for (int j=0;j<2;j++)
		{for(int i=0;i<3;i++)
		printf("0x%X",fin[j][i]);
		printf("\n");
		}

	return 0;
}

