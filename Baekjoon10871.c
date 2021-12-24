/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)

https://www.acmicpc.net/problem/10871
*/
#include <stdio.h>

int main() {

    int n, x,i;
    scanf("%d %d\n",&n,&x);
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d ", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]<x) printf("%d ",arr[i]);
    }

    return 0;
}
