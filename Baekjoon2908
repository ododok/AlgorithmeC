/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)

https://www.acmicpc.net/problem/2908
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    int n1, n2;
    char ch1[4], ch2[4];
    char tmp;

    scanf("%d %d",&n1, &n2);

    sprintf(ch1, "%d", n1);
    sprintf(ch2, "%d", n2);

    tmp = ch1[0];
    ch1[0] = ch1[2];
    ch1[2] = tmp;

    tmp = ch2[0];
    ch2[0] = ch2[2];
    ch2[2] = tmp;

    n1 = atoi(ch1);
    n2 = atoi(ch2);

    //printf("\nnumbers: %d %d\n",n1, n2);
    if(n1>n2) printf("%d",n1);
    else printf("%d",n2);


    return 0;
}
