#include<stdio.h>
int front=-1,rear=-1,i;
void equeue(int a[],int n,int x){
    if(rear==n-1){
        printf("Queue is full\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        a[rear]=x;
    }
    else{
        rear++;
        a[rear]=x;
    }
}
void dequeue(int a[]){
    if(front==-1||front>rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Dequeued: %d\n", a[front]);
        //a[front];
        front++;
    }
}
void display(int a[]){
    if(front==-1 ||front>rear){
        printf("Queue is empty");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d\t",a[i]);
        }
    }
}


int main(){
    int n=5,x;
    int a[n];
    equeue(a,n,23);
    equeue(a,n,26);
    equeue(a,n,30);
    equeue(a,n,40);
    equeue(a,n,78);
    display(a);
    dequeue(a);
    display(a);
    printf("\n");
    equeue(a,n,89);
    equeue(a,n,89);
    display(a);
}