#include <stdio.h>
int main(){
    int arr[][5] = {{1,1,1,1,1},
                    {2,2,2,2,2},
                    {3,3,3,3,3},
                    {4,4,4,4,4},
                    {5,5,5,5,5}};

    int a,b;
    printf("enter a & b: \n");
    scanf("%d%d",&a,&b);

    for(int i=0; i<5; i++){
        int t = arr[a-1][i];
        arr[a-1][i] = arr[b-1][i];
        arr[b-1][i] = t;
    }

    //print
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
