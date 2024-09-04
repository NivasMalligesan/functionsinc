// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ispalindrom(char* string , int start , int end){

    while(start < end){
        if(string[start] != string[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int longestpalindrom(char* string){
    int len = strlen(string);
    int max = 0;
    int start_id = 0;
    int start = 0 ; 
    int end = 0 ;
    
    
    for(start = 0 ; start < len ; start++){
        for(end = len-1 ; end >= 0 ; end--){
            int current = 0 ;
            if(ispalindrom(string,start,end)){
               current = end-start + 1;
               if(current > max){
                   max = current;
                   start_id = start;
               }
            }
        }
    }
     printf("%.*s",end-start_id+1,string+start_id);
                return 0 ;
}

int main() {
    char string[100];
    scanf("%s",string);
    longestpalindrom(string);
}
