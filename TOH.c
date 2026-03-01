#include<stdio.h>
void TOH(int n,char from_rod,char to_rod,char aux_rod)
{
if(n==1)
{
	printf("\n move disk1 from_rod %c to_rod %c",from_rod,to_rod);
	return;
}
	TOH(n-1,from_rod,aux_rod,to_rod);
	printf("\n move disk%d from_rod %c to_rod %c",n,from_rod,to_rod);
	TOH(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	TOH(n,'A','C','B');
	return 0;
}
