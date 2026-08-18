#include <stdio.h>
int main(){
    int a[10],n,target,f,start,end,mid;
        printf("Enter the value of n: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        printf("Eneter the target");
        scanf("%d",&target);
        start=0;
        end=n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(a[mid]==target)
            {
                printf("Element found at %d",mid);
                f=1;
                break;
            }
            else if(a[mid]>target)
            start=mid+1;
            else 
            end=mid-1;
        }
        if(f==0){
        printf("No element found");
    }
        

}