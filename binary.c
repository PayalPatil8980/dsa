#include<stdio.h>

int bsearch(int arr[],int n,int val){
    int mid,high,low;
    mid=(high+low)/2;
    if(arr[mid]==val){
        return mid;
    }
    
}

int main(){
    int val,n,arr[5],i;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("Enter the value for search: ");
    scanf("%d",&val);
    int res=bsearch(arr,n,val);
}