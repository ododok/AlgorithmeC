/*
https://www.acmicpc.net/problem/1181 
first try - 시간초과timeout
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n",&n);
    char a[n][51];
    char t[51];

    for(int i=0; i<n; i++){
        gets(a[i]);
    }
/*
    for(int i=0; i<n; i++){
        printf("%s\n",a[i]);
    }printf("\n=========\n");
*/
    for(int i=0; i<n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (strlen(a[i]) == strlen(a[j]) && strcmp(a[i], a[j]) < 0) {
                strcpy(t, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], t);
            }
            if (strlen(a[i]) >= strlen(a[j])) {
                strcpy(t, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], t);
            }
        }
    }
    for(int i=0; i<n; i++){
        if(!strcmp(a[i],a[i-1])) continue;
        printf("%s\n",a[i]);
    }
    return 0;
}
