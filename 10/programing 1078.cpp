#include <stdio.h>
#include <algorithm>

int main(){
    int n;
    long long sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    int v[n];
    for(int i = 0; i < n; i ++){
        scanf("%d",&v[i]);
    }
    std::sort(v, v+n);
    for(int i = 0;i < n/2; i++){
        sum1 += v[n-i-1];
        sum2 += v[i];
    }
    printf("%lld\n", sum1-sum2);
    return 0;
}
