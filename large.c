#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++){
        printf("Enter the elemnts: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    int large=a[0];
    for(i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    printf("the element is: %d",large);
    
}