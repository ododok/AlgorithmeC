/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)


https://www.acmicpc.net/problem/2941
*/
#include <stdio.h>

int main() {

    char str[101];
    int i, sum,count=0;
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++, count++){}
    sum=count;

    for(i=0; i<count; i++){

        if(str[i]=='c' && (str[i+1]=='=' || str[i+1]=='-'))  {
            sum--;
        } else if(str[i]=='d' && str[i+1]=='z' && str[i+2]=='=') {
            sum--;
        } else if(str[i]=='d' && str[i+1]=='-'){
            sum--;
        } else if( (str[i]=='l' || str[i]=='n') && str[i+1]=='j'){
            sum--;
        } else if ( (str[i]=='s' || str[i]=='z') && str[i+1]=='='){
            sum--;
        }

    }

    printf("%d",sum);
    return 0;
}
