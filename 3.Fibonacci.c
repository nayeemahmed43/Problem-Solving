//write a program that gives the output of specific positioned fibonacci number
//Fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
#include<stdio.h>

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    printf("Position in Fibonacci series of the number = ");
    scanf("%d", &n);

    printf("%d", fib(n));
    getchar();
    return 0;
}

