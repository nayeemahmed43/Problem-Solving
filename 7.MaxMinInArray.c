
//Find Largest and Smallest Element in Array

#include<stdio.h>
int main(){

    int a[50],n,i,large,small;
    printf("How many elements: ");
    scanf("%d", &n);
    printf("Enter the Array: ");

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    large=small=a[0];
    for(i=1; i<n; i++){

        if(a[i]>large)
            large=a[i];
        if(a[i]<small)
            small=a[i];
    }

    printf("The largest element is %d\n", large);
    printf("The smallest element is %d", small);

    return 0;



}
