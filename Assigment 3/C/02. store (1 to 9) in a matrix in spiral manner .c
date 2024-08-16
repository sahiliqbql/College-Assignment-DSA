// 1 2 3
// 8 9 4
// 7 6 5

#include <stdio.h>

int main(){
    int m,n;
    printf("enter row: ");
    scanf("%d",&m);
    printf("enter column: ");
    scanf("%d",&n);

    int arr[m][n];

    printf("array = \n");

    int top = 0;
    int bottom = m-1;
    int left = 0;
    int right = n-1;

    int a = 1;

    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++){
            arr[top][i] = a++;
        }
        top++;

        for(int i=top; i<=bottom; i++){
            arr[i][right] = a++;
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--){
                arr[bottom][i] = a++;
            }
            bottom--;
        }

        if(left<=right){
            for(int i=bottom; i>=top; i--){
                arr[i][left] = a++;
            }
            left++;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// steps :

// t0 r
// l0 b

// l --> r
// t --> b 

// r --> l 
// b --> t 
