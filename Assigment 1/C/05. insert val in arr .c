#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4};

    printf("old arr: ");
    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
        if(arr[i+1]==0){
            break;
        }
    }
    printf("\n");

    int n,val;
    printf("enter idx: ");
    scanf("%d",&n);
    printf("enter val: ");
    scanf("%d",&val);

    for(int i=9; i>n; i--){
        arr[i] = arr[i-1];
    }

    arr[n] = val;

    printf("new arr: ");
    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
        if(arr[i+1]==0){
            break;
        }
    }

    return 0;
}
