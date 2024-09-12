//ax2+bx+c

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int coff;
    int exp;  // Exponent - power
    struct node* next;
}node;

node* insertion(node* poly,int coff, int exp){
    node* p = (node*)malloc(sizeof(node));
    p->coff = coff;
    p->exp = exp;
    p->next = NULL;
    if(poly==NULL){
        return p;
    }
    node* t = poly;
    while(t->next){
        t = t->next;
    }
    t->next = p;
    return poly;
}

node* addition(node* poly1,node* poly2){
    node* ans = NULL;
    node* t1 = poly1;
    node* t2 = poly2;

    while(t1 && t2){
        if(t1->exp == t2->exp){
            ans = insertion(ans,t1->coff+t2->coff,t1->exp);
            t1 = t1->next;
            t2 = t2->next;
        }else if(t1->exp>t2->exp){
            ans = insertion(ans,t1->coff,t1->exp);
            t1 = t1->next;
        }else{
            ans = insertion(ans,t2->coff,t2->exp);
            t2 = t2->next;
        }
    }

    while(t1){
        ans = insertion(ans,t1->coff,t1->exp);
        t1 = t1->next;
    }
    while(t2){
        ans = insertion(ans,t2->coff,t2->exp);
        t2 = t2->next;
    }

    return ans;
}

void display(node* pol){
    if(pol==NULL){
        printf("0\n");
        return;
    }
    while(pol){
        if(pol->exp==0){
            printf("%d",pol->coff);
        }else if(pol->exp==1){
            printf("%dx",pol->coff);
        }else{
            printf("%dx^%d",pol->coff,pol->exp);
        }
        pol = pol->next;
        if(pol) printf(" + ");
    }
    printf("\n");
}

int main(){
    node* poly1 = NULL;
    node* poly2 = NULL;
    node* ans = NULL;

    poly1 = insertion(poly1,3,3);
    poly1 = insertion(poly1,2,1);
    poly1 = insertion(poly1,5,0);

    poly2 = insertion(poly2,4,2);
    poly2 = insertion(poly2,5,1);
    poly2 = insertion(poly2,3,0);

    printf("pol1 = ");
    display(poly1);
    printf("pol2 = ");
    display(poly2);

    ans = addition(poly1,poly2);
    printf("ans = ");
    display(ans);

    return 0;
}


//OUTPUT:

// pol1 = 3x^3 + 2x + 5
// pol2 = 4x^2 + 5x + 3
// ans = 3x^3 + 4x^2 + 7x + 8
