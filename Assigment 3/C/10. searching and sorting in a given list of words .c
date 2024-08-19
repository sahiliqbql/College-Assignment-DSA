#include <stdio.h>
#include <string.h>

int main(){
    char arr[100][100];
    
    int n;
    printf("enter the number of words: ");
    scanf("%d",&n);

    printf("enter %d words:\n",n);
    for(int i=0; i<n; i++){
        scanf("%s",&arr[i]);
    }

    //sort
    for(int i=0; i<n-1; i++){
        char s[100];
        for(int j=0; j<(n-1)-i; j++){
            if(strcmp(arr[j],arr[j+1])>0){  // first not-mathing char of (1s.) ASCII greather than (2s.) 
                strcpy(s,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],s);
            }
        }
    }
    printf("words after sorting:\n");
    for(int i=0; i<n; i++){
        printf("%s\n",arr[i]);
    }

    //searching
    char ch[100];
    printf("enter searching word: ");
    scanf("%s",ch);

    int p=0;
    for(int i=0; i<n; i++){
        if(strcmp(ch,arr[i])==0){
            printf("%s fount at idx %d",ch,i);
            p++;
            break;
        }
    }
    if(p==0){
        printf("%s not found",ch);
    }

    return 0;
}
