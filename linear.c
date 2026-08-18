#include <stdio.h>
int main(){
    int a[50],n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f=0,key;
    printf("Enter the element to found: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Element found at index %d",i);
            f=1;
            break;
        }
        
    }
    if(f==0){
        printf("No element found");
    }

}