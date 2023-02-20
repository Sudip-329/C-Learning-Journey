#include<stdio.h>
#include<math.h>
int main()
{
int num1_329,num2_329,num3_329;
printf("Enter the valu of three numbers : \n");
scanf("%d  %d  %d",&num1_329,&num2_329,&num3_329);   //Name: Sudip Chakrabarty
if (num1_329>num2_329 && num1_329>num3_329)          //Roll: 21053329
{                                                    //Branch:CSE
    printf("\n%d is the largest number.",num1_329);  //Section:A10
}
else if (num2_329>num1_329&&num2_329>num3_329)
{
    printf("\n%d is the largest number.",num2_329);
}
else
printf("%d is the largest number.",num3_329);

return 0;
}