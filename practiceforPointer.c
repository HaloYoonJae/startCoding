#include<stdio.h>
#include<malloc.h>
//simillar java's class...
typedef struct _Array{
   int size;
}Array;

//return Array*
Array *new_Array(){
    /*the size of the structure depends on the size of the largest member. 
    / example, if that code is 
    
    typedef struct _Array{
    char a;
    char b;
    int size;
    }Array; 
    
    result sizeof(Array) is 8.
    
    /and 
    
    typedef struct _Array{
    char a;
    int size;
    char b;
    }Array;
    
    result sizeof(Array) is 12.
   
    So, if you want the least memory allocation, declare the smallest size member of the same data.*/  
    printf("%d\n",sizeof(Array));
    //pointer arr is allocated 4bytes. 
    Array *arr = (Array*)malloc(sizeof(Array));
    //return pointer arr.
    return arr;
}

int main(void){
    //arr is allocated 4bytes. 
    Array *arr = new_Array();
    //same as struct _Array array1 = {1}; struct _Array array1 = {2};
    Array array1 = {1};
    Array array2 = {2}; 
    //arr is point struct array1.
    *arr = array1;
    printf("%d\n", (*arr).size);
    *arr = array2;
    printf("%d\n",Array.size);
    printf("%d\n", (*arr).size);
    printf("%d\n",array1.size);
    
}

