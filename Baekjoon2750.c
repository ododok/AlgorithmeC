/*   Algorithme training on Baekjoon (https://www.acmicpc.net/) 백준 알고리즘 사이트 연습

https://www.acmicpc.net/problem/2750
*/

#include <stdio.h>


int main()
{

    int i, j,N, tmp;
    scanf("%d\n",&N);
    int arr[N];
    for(i=0; i<N; i++) {
        scanf("%d\n",&arr[i]);
    }

    for(i=0; i<N; i++){
        for(j=(i+1); j<N; j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }

    for(i=0; i<N; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}
