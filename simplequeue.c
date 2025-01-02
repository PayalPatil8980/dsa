#include<stdio.h>
int front=-1;
int rear=-1;
int i;
void equeue(int a[],int n,int x){
    if(front==n-1){
        printf("Queue is full");
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
    if(front==-1||front>rear ){
        printf("queue is empty");
        front=rear=-1;
    }
    else{
        printf("Dequeued: %d\n", a[front]);
        front++;
        // if(front>rear){
        //     front=rear-1;
        // }
    }
    
}
void display(int a[]){
    if(front==rear){
        printf("the queue is empty");
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
    equeue(a,n,12);
    equeue(a,n,15);
    equeue(a,n,20);
    equeue(a,n,30);
    display(a);
    dequeue(a);
    display(a);
    dequeue(a);
    display(a);
}
