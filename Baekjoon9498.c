#include <stdio.h>
//Algorithme training on Baekjoon(https://www.acmicpc.net/)
//https://www.acmicpc.net/problem/9498

int main() {

    int n;
    scanf("%d",&n);
    if(90<=n && n<=100 ){ printf("A");}
    else if(80<=n ) {printf("B");}
    else if(70<=n ){ printf("C");}
    else if(60<=n ) {printf("D");}
    else {
        printf("F");
    }
    return 0;
}
