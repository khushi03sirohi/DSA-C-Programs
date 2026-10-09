#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *F,*R;
int Dequeue()
{
    struct node *P;
    int x=-1;
    if(F==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        P=F;
        F=F->next;
        x=R->data;
        free(P);
        P=NULL;
    }
    return x;
}
void Enqueue(int y)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=y;
    new->next=NULL;
    if(F==NULL)
    {
        F=R=new;
    }
    else
    {
        R->next=new;
        R=new;
    }
}
void main(){
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Dequeue();
    Dequeue();
    Dequeue();
}