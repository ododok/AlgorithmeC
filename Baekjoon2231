/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)



https://www.acmicpc.net/problem/2231
*/
#include <stdio.h>


int main() {

    int n, tmp, sum, sang, min,i;
    scanf("%d",&n);

    //먼저 각 자리수 구하는 식부터. 256
    //min : 가장 작은 생성자.
    //sum, tmp : 계산과정에서 사용하는 임시 변수종류.
    for(sang=n, min=n; sang>0; sang--){
        tmp=sang;
        sum=0;
        do{
            sum += tmp%10;
            tmp/=10;
        }while (tmp!=0);

        if(sum+sang != n) continue;
        //printf("sum+sang : %d  ,  sang=%d\n ",sum+sang, sang);
        if(sang <min) min=sang;
    }
    if(min==n) min=0;

    printf("%d",min);





    return 0;
}
