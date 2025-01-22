#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char str[100];
    int freq[26] = {0}, maxFreq=0;
    char maxChar;
    fgets(str,sizeof(str),stdin);

    for(int i=0;i<str[i];i++){
        if(isalpha(str[i])){
            char ch = tolower(str[i]);
            freq[ch - 'a']++ ;

        if(freq[i]>maxFreq){
            max = freq[ch-'a'];
            maxChar = ch;
        }
        }
    }
    printf("%c",maxChar);
    return 0;
}