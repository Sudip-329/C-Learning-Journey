#include <stdio.h>
int main()
{
    char op_329;
    float num1_329, num2_329, result=0.0f;
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf(" Enter [number 1] [+, -, *, /, %%] [number 2] \n");
    scanf("%f %c %f", &num1_329, &op_329, &num2_329);
    switch(op_329)
    {
        case '+':{
            result = num1_329 + num2_329;
            break;
        }
        case '-':{
            result = num1_329 - num2_329;
            break;
        }
        case '*':{
            result = num1_329 * num2_329;
            break;
        }
        case '/':{ 
            result = num1_329 / num2_329;
            break;
        }
        case '%':{
            result = ((int)num1_329 % (int)num2_329);
            break;
        }
        default: 
            printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f", num1_329, op_329, num2_329, result);
    return 0;
}