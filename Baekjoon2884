/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)
   https://www.acmicpc.net/problem/2884
*/
#include <stdio.h>

int main() {

    int h, m, so=45;
    scanf("%d %d",&h,&m);

    //-45
    if(m<45){
        m=60 - (so-m);
        h--;
        if(h<0) h=23;
    } else {
        m=m-45;
    }
    printf("%d %d",h,m);

    return 0;
}
