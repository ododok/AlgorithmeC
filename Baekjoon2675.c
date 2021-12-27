/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)

https://www.acmicpc.net/problem/2675
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int line, i, j,k,n;
    char theS[20];

    scanf("%d\n",&line);
    for(i=0; i<line; i++){
        scanf("%d ",&n);
        scanf("%s",&theS);
        for(j=0; ; j++){
            if(theS[j]=='\0') break;
            for(k=0; k<n; k++) {
                printf("%c", theS[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
