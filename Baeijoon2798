/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)


https://www.acmicpc.net/problem/2798

*/
#include <stdio.h>



int main() {
    int n,m, a, b, c, max;
    scanf("%d %d\n",&n,&m);

    int cards[n];
    for(int i=0; i<n; i++) scanf("%d ",&cards[i]);

    /*
    printf("[%d %d]\n",n,m);
    for(int i=0; i<n; i++) printf("[%d]",cards[i]);
    printf("\n");
     */
    max = 0; // max = 3; is also possible
    for(a=0; a<n-2; a++){
        for(b=1; b<n-1; b++){
            for(c=2; c<n; c++){

                if(a==b || b==c || a==c) continue;
                //printf("%d %d %d\n", cards[a], cards[b], cards[c]);
                if( (cards[a]+cards[b]+cards[c])<=m && max<(cards[a]+cards[b]+cards[c])){
                    max = cards[a]+cards[b]+cards[c];
                }

            }
        }
    }

    printf("%d",max);
    return 0;
}
