/*   Algorithme training on Baekjoon (https://www.acmicpc.net/) 백준 알고리즘 사이트 연습

https://www.acmicpc.net/problem/1018

*/

#include <stdio.h>


int main()
{

    int n,m,i,j, fw, fb, min;
    char bw;
    scanf("%d %d\n",&n, &m);
    char arr[n][m];
    for(i=0; i<n; i++) {
        for (j = 0; j < m; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }

    int ii,jj;
    for(ii=0; ii<n-7; ii++) {
        for(jj=0; jj<m-7; jj++) {
            fw = 0, fb = 0;
            //first char == B
            bw = 'B';
            for (i = ii; i < 8+ii; i++) {
                for (j = jj; j < 8+jj; j++) {
                    if (arr[i][j] != bw) fw++;
                    if (bw == 'B') bw = 'W';
                    else bw = 'B';
                }
                if (bw == 'B') bw = 'W';
                else bw = 'B';
            }

            //printf("fw=%d\n", fw);

            //first char == W
            bw = 'W';
            for (i = ii; i < 8+ii; i++) {
                for (j = jj; j < 8+jj; j++) {
                    if (arr[i][j] != bw) fb++;
                    if (bw == 'B') bw = 'W';
                    else bw = 'B';
                }
                if (bw == 'B') bw = 'W';
                else bw = 'B';
            }

            //printf("fb=%d\n", fb);

            //compare! 답을 내자.
            if(ii==0 && jj==0) { //초기값 initialize of min
                if(fw<fb) min=fw;
                else min=fb;
            } else {
                if(min>fw) min=fw;
                if(min>fb) min=fb;
            }
            //printf("_min=%d_",min);
        }
    }
    printf("%d",min);

    return 0;
}
