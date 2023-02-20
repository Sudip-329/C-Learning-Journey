#include<stdio.h>
#include<math.h>
int main()
{
int a329,b329,c329;                               //Name : Sudip Chakrabarty
printf("Enter two number:");                      //Roll : 21053329
scanf("%d %d",&a329,&b329);                       //Branch : CSE
c329=a329>b329?a329:b329>a329?b329:-1;            //Section : A10
if(c329==-1)
printf("Both are equal.");
else
printf("Lager number %d",c329);
return 0;
}