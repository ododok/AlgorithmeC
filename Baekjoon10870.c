/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)


https://www.acmicpc.net/problem/10870

*/
#include <stdio.h>

int fibo (int x){
    if(x==0) return 0;
    else if( x==1) return 1;
    else {
        return fibo(x-2)+fibo(x-1);
    }
}

int main() {
    int n;
    scanf("%d",&n);

    printf("%d",fibo(n));


    return 0;
}
//피보나치 수를 잘 몰라서 수학 공식을 보고 그 공식을 그냥 구현했다. 
