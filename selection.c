#include<stdio.h>
void select(int a[],int n){
    int i,j,small;

    for(i=0;i<n;i++){
        small=i;

        for(j=i+1;j<n;j++){
            if(a[j]<a[small]){
                small=j;
            }
        }
        int temp=a[i];
        a[i]=a[small];
        a[small]=temp;
    }

}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}


int main(){
    int a[5]={89,12,45,2,0};
    int n=sizeof(a)/sizeof(a[0]);
    printf("The elemnts before sort");
    printf("\n");
    print(a,n);
    select(a,n);
    printf("\nAfter elemnts are sort");
    printf("\n");
    print(a,n);
}
