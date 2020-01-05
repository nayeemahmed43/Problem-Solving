//Suppose array have 3, 5, 6, 11, 5 and 7 elements,
//in this array 5 appear two times so this is our duplicate elements.
#include<stdio.h>
#include<conio.h>

int main(){
    int i, j, n, arr[20];


    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter any %d elements in array: ",n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are: ");

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d\n", arr[i]);
            }
        }
    }
    getch();
}
