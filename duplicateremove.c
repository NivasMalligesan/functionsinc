// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeduplicate(int* array,int size){
    int* isprinted = (int*)calloc(size, sizeof(int));
    for(int i = 0 ; i < size ; i ++){
        if(!isprinted[i]){
            printf("%d ",array[i]);
            for(int j = i+1 ; j < size ; j++){
                if(array[i] == array[j]){
                    isprinted[j] = 1;
                }
            }
        }
    }
}


int main(){
    int size;
 
    printf("Enter the size of array : ");
    scanf("%d",&size);
   
    int* array = (int*)malloc(size*sizeof(int));
  
    
    printf("Enter the elements of array : ");
    for(int i = 0 ; i < size ; i ++){
        scanf("%d",&array[i]);
    }
    removeduplicate(array,size);
}
