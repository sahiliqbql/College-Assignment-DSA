#include <stdio.h>

typedef struct data{
    int height;
    int weight;
}data;

void maxRatio(data arr[],int n){
    float max = arr[0].weight/arr[0].height;
    int idx = 0;
    for(int i=1; i<n; i++){
        float t = arr[i].weight/arr[i].height;
        if(t>max){
            max = t;
            idx = i;
        }
    }
    printf("%d has max ratio(w/h) = %f",idx+1,max);
}

int main(){
    int n;
    printf("enter no. of student: ");
    scanf("%d",&n);

    data arr[n];
    for(int i=0; i<n; i++){
        printf("enter height(cm) of %d: ",i+1);
        scanf("%d",&arr[i].height);
        printf("enter weight(kg) of %d: ",i+1);
        scanf("%d",&arr[i].weight);
    }

    maxRatio(arr,n);
    return 0;
}


//OUTPUT:

// enter no. of student: 2
// enter height(cm) of 1: 11
// enter weight(kg) of 1: 22
// enter height(cm) of 2: 33
// enter weight(kg) of 2: 33
// 1 has max ratio(w/h) = 2.000000
