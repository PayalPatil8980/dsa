#include<stdio.h>

int main(){
    int a[5]={1,2,3,2,1};
    int n=5;
    int i=0;
    int j=n-1,ispalindrome=1;
    while(i<j){
        if(a[i]!=a[j]){
            ispalindrome=0;
            break;
        }

        i++;
        j--;
    }
    if(ispalindrome){
        printf("Array is palindrome");
    }
    else{
        printf("Array is not palindrome");
    }

}