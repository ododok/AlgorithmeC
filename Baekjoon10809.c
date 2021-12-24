/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)

https://www.acmicpc.net/problem/10809
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    //printf("%c\n",97); //26 characteres
    char theWord[100];
    int alphabet[26]={-1,};
    int i;
    for(i=0; i<26; i++) alphabet[i] = -1;

    scanf("%s\n",&theWord);
//abracbd
    for(i=0; ; i++){
        if(theWord[i]=='\0') break;
        if(alphabet[(theWord[i]-97)]==-1) alphabet[(theWord[i]-97)]=i;
    }

    for(i=0; i<26; i++){
        printf("%d ",alphabet[i]);
    }

    return 0;
}
