// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
  #include <bits/stdc++.h>
  using namespace std;

  //check whether sum is equal to given value

  int check(int A[], int arr_size, int sum){

        int l=0,r=arr_size-1;

        sort(A, A+arr_size);//sort the element

       while (l < r) {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else // A[i] + A[j] > sum
            r--;
    }
        return 0;
  }

  int main(){
        int A[]= {1, 4, 45, 6, 10, -8};
        int n=16;
        int arr_size=sizeof(A)/sizeof(A[0]);

        //Function calling
        if(check(A, arr_size, n))
            cout<< "Array has two elements with given sum";
        else
            cout<<"Array doesn't have two elements with given sum";

        return 0;
  }
