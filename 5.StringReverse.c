//Reverse a given string
#include<bits/stdc++.h>
using namespace std;

void reverse(string str){
      for(int i=string.length()-1; i>=0; i--)
        cout<< str[i];
}

int main(){
    string s;
    cout<< "enter your string";
    cin>> s;

    reverse(s);
    return (0);
}
