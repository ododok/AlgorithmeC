/*   Algorithme training on Baekjoon (https://www.acmicpc.net/) 백준 알고리즘 사이트 연습

https://www.acmicpc.net/problem/10989
*/

#include <stdio.h>



int main()
{

    int N,i,j;
    int a[10001]={0,};
    int t;
    scanf("%d\n",&N);

    for(i=0; i<N; i++){
        scanf("%d",&t);
        a[t]++;
    }

    for(i=1; i<10001; i++){ //index 1부터 10000 까지 .
        for(j=0; j<a[i]; j++){
            printf("%d\n",i);
        }
    }

}
