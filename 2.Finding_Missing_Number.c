//an array will be given where a number is missing. Find the missing number
#include<stdio.h>

int getMissingNo(int a[], int n){  //getMissingNo takes array and size of array as arguments
            int i;
            int x1 = a[0];  //For XOR of all the elements in array
            int x2 = 1;    // For XOR of all the elements from 1 to n+1(including missing element

            for(i=1; i<n; i++)
                x1 = x1^a[i];

            for(i=2; i<n+1; i++)
                x2 = x2^i;

            return(x1^x2);
}

int main()
{
    int a[] = {1,2,4,5,6};
    int miss = getMissingNo(a,5);
    printf("%d",miss);
    getchar();
}
