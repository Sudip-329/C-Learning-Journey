#include<stdio.h>
int main()
{
    int digit;

    printf("enter a digit");
    scanf("%d",&digit);

    switch (digit)
    {
        case 0:
        printf("Zero\n");
        break;

        case 1:
        printf("one\n");
        break;

        case 2:
        printf("two\n");
        break;

        case 3:
        printf("three\n");
        break;

        case 4:
        printf("four\n");
        break;

        case 5:
        printf("five\n");
        break;

        case 6:
        printf("six\n");
        break;

        case 7:
        printf("seven\n");
        break;

        case 8:
        printf("eight\n");
        break;

        case 9:
        printf("nine\n");
        break;

        case 10:
        printf("ten\n");
        break;

        default:
        printf("NOt a valid digit");
    }

}