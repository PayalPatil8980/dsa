#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    if(n>1){
        a[0]=a[0]+a[n-1];
        a[n-1]=a[0]-a[n-1];
        a[0]=a[0]-a[n-1];
    }
        //printf("%d\t",a[i]);
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    
}