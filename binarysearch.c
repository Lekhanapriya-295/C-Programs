#include<stdio.h>
int main()
{
	int A[5]={10,20,30,40,50};
	int key,flag=0;
	int low=0,high=4,mid;
	printf("enter search key:\n");
	scanf("%d",&key);
while(low<=high)
{
	mid=(low+high)/2;
if(key==A[mid])
{
	flag=1;
	break;
}
else if(key<A[mid])
	high=mid-1;
else
	low=mid+1;
}
if(flag==1)
	printf("key element is found\n");
else
	printf("key element is not found");
}

