#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    //min value
    if(a < b){
        // a,b
        if(a < c){
            printf("%d",a);
        }else{
            printf("%d",c);
        }
    }else{
            // b,c
            if(b < c){
                printf("%d",b);
            }else{
                printf("%d",c);
            }
        }
        printf(" ");
    // max number
    if(a >= b && a >=c){
        printf("%d",a);
    }else if(b >= a && b >= c){
        printf("%d",b);
    }else{
         printf("%d",c);
    }
}