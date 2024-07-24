#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4};
    int arr2[] = {5,6,7,8,9};

    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr2)/sizeof(arr[0]);

    int newarr[m+n];
    int x = 0;

    for(int i=0; i<m; i++){
        newarr[x] = arr[i];
        x++;
    }
    for(int i=0; i<n; i++){
        newarr[x] = arr2[i];
        x++;
    }

    printf("new arr: ");
    for(int i=0; i<m+n; i++){
        printf("%d ",newarr[i]);
    }

    return 0;
}
