#include <stdio.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int row = sizeof(arr)/sizeof(arr[0]);
    int column = sizeof(arr[0])/sizeof(arr[0][0]);

    int s = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==j){
                s = s + arr[i][j];
            }
        }
    }
    printf("sum = %d",s);
    return 0;
}
