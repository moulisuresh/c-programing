#include<stdio.h>
int main()
{char a[10],b[10];
int i,j,m,n,f=0;
printf("enter 2 strings:");
scanf("%s %s",&a,&b);
m=strlen(a);
n=strlen(b);
if(m==n)
{
for(i=0;i<m;i++)
{      
for(j=0;j<n;j++)
            {
if(a[i]!=b[j])
                {
                    f++;
                }
            i++;
            } }  }
    if(f==1)
    {
     printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
    }
