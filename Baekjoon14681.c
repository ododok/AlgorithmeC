#include <stdio.h>
// Algorithme training on Baekjoon(https://www.acmicpc.net/)
// https://www.acmicpc.net/problem/14681

int main() {

    int x, y;
    scanf("%d\n",&x);
    scanf("%d\n",&y);

    if(0<x && 0<y) printf("1");
    else if(x<0 && 0<y) printf("2");
    else if(x<0 && y<0) printf("3");
    else printf("4");

    return 0;
}
