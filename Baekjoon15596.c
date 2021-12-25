/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)

https://www.acmicpc.net/problem/15596
*/
#include <stdio.h>

long long sum(int *a, int n) {
    long long ans = 0;
    int i;
    for(i=0; i<n; i++){
        ans+=a[i];
    }
    return ans;
}
