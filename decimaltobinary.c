#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int decimal = 0 ; 
    scanf("%d",&decimal);
    int binary[32];
    int i = 0 ;
    
    while(decimal > 0){
        binary[i] = decimal %2;
        decimal /= 2;
        i++;
    }
    
    for(int j = i -1 ; j >= 0 ; j--){
        printf("%d",binary[j]);
    }
}
