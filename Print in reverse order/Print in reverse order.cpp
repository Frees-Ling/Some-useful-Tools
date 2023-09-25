/*
 * @Author: your name
 * @Date: 2023-09-22 00:05:57
 * @LastEditTime: 2023-09-22 00:09:16
 * @LastEditors: SKY-20220722LSO
 * @Description: In User Settings Edit
 * @FilePath: \编程\项目\逆序打印\Print in reverse order.cpp
 */

#include <stdio.h>
int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    do{
        printf("%d", number % 10);
        number /= 10;
    }while (number != 0);

    return 0;
    
}