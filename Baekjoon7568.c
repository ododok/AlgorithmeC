/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)


https://www.acmicpc.net/problem/7568

*/
#include <stdio.h>


int main() {

    int n,i,j;
    scanf("%d\n",&n);
    int arr[n][3]; //arr [n][0]==weight, arr[n][1]==height, arr[n][2]==ranking
    for(i=0; i<n; i++){
        scanf("%d %d\n",&arr[i][0], &arr[i][1]);
        arr[i][2]=1;
    }
    /*
    for(i=0; i<n; i++){
        printf("%d %d \n",arr[i][0], arr[i][1]);
    }
     */

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j) continue;
            if ((arr[i][0]<arr[j][0]) && (arr[i][1]<arr[j][1])){
                arr[i][2]++;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d ",arr[i][2]);
    }



    return 0;
}
