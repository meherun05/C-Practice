#include<stdio.h>

int main(){
    int n,x,y;
    
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&x,&y);
        if(x > y){
            int tempX = x;
            x = y;
            y = tempX;
        }
        int sum = 0;
       for(int j = x+1; j<y; j++){
         if(j % 2 != 0){
            sum+=j;
        }
       }
    printf("%d\n",sum);
    }
    
    return 0;
}