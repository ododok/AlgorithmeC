/*   Algorithme training on Baekjoon (https://www.acmicpc.net/) 백준 알고리즘 사이트 연습
https://www.acmicpc.net/problem/1427
*/



#include <stdio.h>

int main() {

    char s[10];
    int count=0;
    int i,j,t;

    scanf("%s\n",&s);

    for(i=0;i<10;i++){
        if(s[i]=='\0') break;
        count++;
    }
    int a[count];
    for(i=0;i<10;i++){
        if(s[i]=='\0') break;
        a[i]=s[i]-48;
    }

    for(i=0; i<count; i++){
        for(int j=0; j<count-1; j++){
            if(a[j]<a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(i=0;i<count;i++){
        printf("%d",a[i]);
    }

}
