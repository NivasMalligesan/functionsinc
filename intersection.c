// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void intersection(int* array1 , int* array2 , int size1 , int size2){
    printf("The Intersection : ");
    for(int i = 0 ; i < size1 ; i ++){
        for(int j = 0 ; j < size2 ; j ++){
            if(array1[i] == array2[j]){
                printf("%d ",array1[i]);
            }
        }
    }
}


int main(){
    int size1;
    int size2 ; 
    printf("Enter the size of array 1 : ");
    scanf("%d",&size1);
     
    printf("Enter the size of array 2 : ");
    scanf("%d",&size2);
    
    int* array1 = (int*)malloc(size1*sizeof(int));
    int* array2 = (int*)malloc(size2*sizeof(int));
    
    printf("Enter the elements of array 1 : ");
    for(int i = 0 ; i < size1 ; i ++){
        scanf("%d",&array1[i]);
    }
    
    printf("Enter the elements of array 2 : ");
    for(int i = 0 ; i < size2 ; i ++){
        scanf("%d",&array2[i]);
    }
    
    intersection(array1 , array2 , size1 , size2);
}
