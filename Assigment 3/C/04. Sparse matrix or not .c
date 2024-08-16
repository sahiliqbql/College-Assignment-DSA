#include <stdio.h>

int main(){
    int arr[4][5] 
    = {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };
    int r = sizeof(arr)/sizeof(arr[0]);
    int c = sizeof(arr[0])/sizeof(arr[0][0]);

    int count = 0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]==0){
                count++;
            }
        }
    }

    int t = (r*c)/2;

    if(count>t){
        printf("sparse matrix");
    }else{
        printf("not");
    }

    return 0;
}
