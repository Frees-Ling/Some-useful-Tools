#include <stdio.h>
int main(void)
{
    int value1, value2;
    char op;

    printf("Type in your expression:");
    scanf("%d %c %d", &value1, &op, &value2);
    switch (op)
    {
    case '+':
        printf("=%d\n", value1 + value2);
        break;
    case '-':
        printf("=%d\n", value1 - value2);
        break;
    case '*':
        printf("=%d\n", value1 * value2);
        break;
    case '/':
        if (value2 != 0){
            printf("=%d\n", value1 / value2);
        }else{
            printf("Error! Division by zero!\n");
        }
        break;
    case '%':
        if(value2 != 0){
            printf("=%d\n", value1 % value2);
        }else{
            printf("Error! Division by zero!\n");
        }
    default:
        printf("Error! Unknown operation.\n");
        break;
}