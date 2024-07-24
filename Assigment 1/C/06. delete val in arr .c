#include <stdio.h>

int main(){
    
    int arr[] = {1,2,3,4,5,6};

    int s = sizeof(arr)/sizeof(arr[0]);

    int n;
    printf("enter idx to delete: ");
    scanf("%d",&n);

    for(int i=n; i<s-1; i++){
        arr[i] = arr[i+1];
    }
    s--;

    printf("new arr: ");
    for(int i=0; i<s; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
