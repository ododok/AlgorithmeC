/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)
https://www.acmicpc.net/problem/2739

*/
#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1; i<=9; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }

    return 0;
}
