#include <stdio.h>

void removeVal(int* arr,int* s,int n){
    

    for(int i=n; i<*s-1; i++){
        arr[i] = arr[i+1];
    }
    (*s)--;

}

int main(){
    int arr[] = {1,2,3,3,4,5,6};

    int s = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<s;i++){
        for(int j=i+1; j<s; j++){
            if(arr[i] == arr[j]){
                removeVal(arr,&s,j);
                j--;
            }
        }
    }
    
    printf("new arr: ");
    for(int i=0; i<s; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
