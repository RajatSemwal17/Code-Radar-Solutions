#include<stdio.h>

char MostFreqChr(char inputs[]){
    int freq[256] = {0};
    int macCount = 0;
    char ChrFreq = 'a';
    for(int i=0;i<n;i++){
        char c = inputs[i];
        if(c>='a' || c<='z'){
            freq[c-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(freq[i]>macCount){
            macCount = freq[i];
            ChrFreq = 'a'+ i;
        }
    }
    printf("%c",ChrFreq);
}

int main(){
    char inputs[30];
    fgets(inputs,sizeof(inputs),stdin);
    MostFreqChr(inputs);
}













