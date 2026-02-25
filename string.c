#include<stdio.h>
#include<string.h>
int main()
{
int x;
char str1[15],str2[15],str3[15];
printf("\n enter the string1:");
gets(str1);
printf("\n enter string2:");
gets(str2);
printf("\n length of string1 is %d",strlen(str1));
printf("\n length of string2 is %d",strlen(str2));
strcpy(str3,str1);
printf("\n string3=%s",str3);
printf("\n upper case is %s",strupr(str1));
printf("\n lower case is %s",strlwr(str1));
printf("\n after concatination %s",strcat(str1,str2));
x=strcmp(str1,str2);
printf("\n the value of x is %d",x);
if(x==0)
printf("\n strings are equal:");
else
printf("\n strings are not equal:");
}

