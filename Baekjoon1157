/*   Algorithme training on Baekjoon(https://www.acmicpc.net/)

https://www.acmicpc.net/problem/1157
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int alphabets[26]={0,};
    char theWord[1000000];
    int i, max=0, count=0;
    scanf("%s", theWord);


    for(i=0; ; i++){
        if(theWord[i]=='\0') break;
        if(65 <= theWord[i] && theWord[i] <=90){
            //upper case
            alphabets[theWord[i]-65]++;
        } else if( 97<= theWord[i] && theWord[i] <=122){
            //lower case
            alphabets[ theWord[i]-97 ]++;
        }
    }

    //for(i=0; i<26; i++) printf("%d  ", alphabets[i]); ////////

    for(i=0; i<26; i++){
        if(alphabets[max]<alphabets[i]) {
            max = i;
        }
    }

    //printf("max = %d, count=%d\n",max, count); ////////

    for(i=0; i<26; i++){
        if(max==i) continue;
        if(alphabets[max] == alphabets[i]){
            count++;
        }
    }

    //printf("max = %d, count=%d\n",max, count);/////////

    if(count>=1){
        printf("?");
    } else {
        printf("%c", max+65);
    }


    return 0;
}
