#include<stdio.h>
int main()
{int A[5]={10,20,30,40,50};
int i,key,flag=0;
printf("enter search key:\n");
scanf("%d",&key);
for(i=0;i<5;i++)
{if(key==A[i])
{flag=1;
break;
}
}
if(flag==1)
printf("key element is found\n");
else
printf("key element not found\n");
}
