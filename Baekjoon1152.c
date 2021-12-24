/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)

https://www.acmicpc.net/problem/1152
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct string{
    char str[46]; //the longuest english word is composed by 45 letters
}string;

int main() {
/*
    string str1;
    strcpy(str1.str, "abcdef");
    printf("%s",str1.str);
    */
    int i,count, length;
    char* thePtr = malloc(sizeof(char)*1000000);
    gets(thePtr);
    //printf("%s",thePtr);

    //Blank deleter
    //앞 front
    /*for(i=0; ; i++){
        //if(thePtr[i]==' ') thePtr++;
        else if(thePtr[i] != ' ') break;
    }*/
    while(isspace(*thePtr)) thePtr++;
    //printf("%s",thePtr);

    //뒤 behind
    length=0;
    for(i=0; ; i++){
        if(thePtr[i]=='\0') break;
        length++;
    }
    //printf("\nlength=%d\n",length);
    for(i=length-1; ; i--){
        if(thePtr[i]!=' ') {
            thePtr[(i+1)]='\0';
            break;
        }
    }
    //printf("\n[%s]\n",thePtr);

    //count how many words 단어수세기
    count=1;

    for(i=0; ; i++){
        if(*thePtr=='\0') {
            count=0;
            break;
        }
        if(thePtr[i]=='\0') break;
        if(thePtr[i]==' ') count++;
    }
    printf("%d", count);






    return 0;
}
