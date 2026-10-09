#include<stdio.h>
#define size 5
int queue[size];
int F=-1,R=-1;
void Enqueue(int x)
{
    if(R==size-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        R=R+1;
        queue[R]=x;
    if(F== -1){
        F=0;
    }  
}
}
void Dequeue(){
    if(F==-1 && R==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted element is %d\n",queue[F]);
        F=F+1;
    } 
}
void main()
{
    Enqueue(10);
    Enqueue(20);    
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Dequeue();
    Dequeue();
    Enqueue(25);
}

