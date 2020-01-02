//FizzBuzz
//Write a program that prints the numbers from 1 to 100 and for multiples of '3' print "Fizz" instead of the number
//and for the multiple of '5' print "Buzz"

#include<stdio.h>
int main(void){
    int i;

    for(i=1; i<=100; i++){

        if(i%15 == 0)  //number divisible by 3&5 will be divisible by 15 & will print FizzBuzz in place of the number
        printf("FizzBuzz\t");

        else if(i%3 == 0) //number divisible by 3 will print Fizz in place of the number
        printf("Fizz\t");

        else if(i%5 == 0) //number divisible by 3 will print Fizz in place of the number
        printf("Buzz\t");
        else              // print the other numbers
        printf("%d\t", i);
    }
    return 0;
}
