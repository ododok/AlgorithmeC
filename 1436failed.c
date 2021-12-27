/*   Algorithme training on Baekjoon (https://www.acmicpc.net/) 백준 알고리즘 사이트 연습
https://www.acmicpc.net/problem/1436

*/

#include <stdio.h>


int main()
{


    int N; //666들어간 수를 N개 찾고 싶다.
    scanf("%d",&N);

    int n = 666;
    int t, i;
    int six=0;

    for(int count = 0; count < N; n++) {
        t = n;
        //printf("n(t)=%d\n",n);
        //t=n; 은 666부터 무한대로 1씩 증가하는 숫자.
        while (t != 0) {

            if (6 == t % 10 && six==0) {//6을 처음 발견했을 때
                six = 1; //6을 한 번 봤다.
                t/=10;
                //printf("(six=1)");
                //continue;
            } else if(six==0) {
                t/=10;
            }

            if(6==t%10 && six==1){//6을 한 번 발견한 그 다음턴에도 6을 발견
                six=2;
                t/=10;
                //printf("(six=2)");
                //continue;
            } else if(6!=t%10 && six==1){ //6을 한 번 발견했는데 그 다음턴에 6이 없음.
                six=0;//무효
                t/=10;
                //continue;
            }

            if(6==t%10 && six==2){//6을 두 번 연속으로 발견했는데 그 다음턴에도 6이 있음. 666발견
                count++; //666을 한 번 발견했으니 count에 기록.
                t/=10;
                six=0; //초기화
                //printf("(six=3)");
                //continue;
            } else if(6!=t%10 && six==2){//6을 두 번 연속으로 발견했지만 그 다음턴엔 6이 없음.
                six=0; //무효
                t/=10;
                //continue;
            }

        }

    }

    printf("%d",n-1); //while문을 빠져나올 때 n+1인 상태였으니까.

    return 0;
}
