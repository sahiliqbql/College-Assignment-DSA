#include <stdio.h>

int main(){
    int arr[] = {1,22,3,4,5,688,2};
    int max = arr[0];
    int smax = arr[0];
    int s = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s;i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
    }
    printf("second max %d",smax);

    return 0;
}
