
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
char a[100];
int n,i,j,temp=0;
scanf("%s",a);
n=strlen(a);
if(n%2==0)
	{
	for(i=0;i<n;i+=2)
	{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
	printf("%s",a);
	}
	else
	{
	for(i=0;i<n;i+=2)
	{
	 temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
	printf("%s%c",a,temp);  
	}
  }
