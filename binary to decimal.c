#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int binary = 0 ; 
    scanf("%d",&binary);
    int decimal = 0 , base =1 , remainder = 0 ;
    while(binary > 0){
        remainder = binary % 10;
        decimal += base*remainder;
        base*=2;
        binary/=10;
        
    }
    
    printf("%d",decimal);
    
}
