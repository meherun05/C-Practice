#include<stdio.h>

int main(){
    int n;
    long long sum = 0;
    scanf("%d",&n);
    long long arr[n];
    for(int i = 0; i < n; i++){
        scanf("%lld",&arr[i]);
        sum += arr[i];
    }
    if(sum < 0){
        sum *= -1;
    }
    printf("%lld",sum);
    return 0;
}