#include <stdio.h>

typedef struct time {
    int h;
    int m;
    int s;
}time;

int diff(time start,time end){
    while(end.s<start.s){
        end.s+=60;
        end.m--;
    }
    while(end.m<start.m){
        end.m+=60;
        end.h--;
    }
    time diff;
    diff.h = end.h-start.h;
    diff.m = end.m-start.m;
    diff.s = end.s-start.s;
    
    int ans = (diff.h*3600)+(diff.m*60)+diff.s;
    return ans;
}

int main(){
    time start;
    time end;
    printf("enter start time :\n");
    printf("h: ");
    scanf("%d",&start.h);
    printf("m: ");
    scanf("%d",&start.m);
    printf("s: ");
    scanf("%d",&start.s);

    printf("enter end time :\n");
    printf("h: ");
    scanf("%d",&end.h);
    printf("m: ");
    scanf("%d",&end.m);
    printf("s: ");
    scanf("%d",&end.s);

    int dif = diff(start,end);
    printf("diff = %d seconds",dif);

    return 0;
}



//OUTPUT:

// enter start time :
// h: 2
// m: 3
// s: 4
// enter end time :
// h: 2
// m: 34
// s: 56
// diff = 1912 seconds
