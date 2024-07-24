#include <stdio.h>
int main(){
    int arr[] = {1, 2, 2, 3, 1, 2};

    for(int i=0; i<6; i++){
        int s = 0;

        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                s++;
            }
        }

        if(s==0){
            for(int k=0; k<6; k++){
                if(arr[i]==arr[k]){
                    s++;
                }
            }
            printf("%d is present = %d times\n",arr[i],s);
        }
    }
    return 0;
}
