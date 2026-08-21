#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next
};
int main(){
    struct Node *head = NULL,*temp= NULL, *newNode = NULL;
    int choice;
    do{
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for new node: ");
        scanf("%d", &newNode-> data);
        newNode-> next = NULL;
        if (head == NULL){
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp=newNode;
        }
        printf("Do you want to add another node? (1 for yes/ 0 for no): ");
        scanf("%d",&choice);
    } while (choice ==1);
    printf("\nLinked list elements: ");
    temp = head;
     while ( temp !=NULL){
        printf("%d -> ", temp-> data);
        temp= temp -> next;
     }
     printf("Null\n");
     return 0;

}
