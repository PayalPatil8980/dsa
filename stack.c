#include<stdio.h>
#define n 5
int top=-1,arr[n],i;

void push(int a){
    if(top>=n-1){
        printf("stack is full");
    }
    else{
        top++;
        arr[top]=a;
    }
}
void pop(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        top--;
        printf("Element remove");
        printf("\n");
    }
}
void peep(){
    if(top==-1){
        printf("stack is empty\n");

    }
    else{
        for(i=0;i<=top;i++){
            printf("%d\t",arr[i]);
            printf("\n");
        }
    }
}

int main(){
    push(10);
    peep();
    pop();
    peep();
    push(20);
    push(30);
    peep();
}