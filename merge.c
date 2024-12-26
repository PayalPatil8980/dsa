#include<stdio.h>

int main(){
    int i,j,n,m,len=0,arr[50];
    printf("Enter the size for array 1: ");
    scanf("%d",&n);
    printf("Enter the size for array 2: ");
    scanf("%d",&m);
    int a[n],b[m];
    for(i=0;i<n;i++){
        printf("Enter the elements: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        printf("Enter the elements: ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        arr[i]=a[i];
    }
    for(i=0;i<m;i++){
        arr[n+i]=b[i];
    }
    for(i=0;i<(n+m);i++){
        printf("%d\t",arr[i]);
    }
}