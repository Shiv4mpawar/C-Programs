#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];        //Static memory allocation // 5 lokacncha j1nacha vichar karun thevne 
    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of array\n");
    scanf("%d",&size);

    // Step1 : Allocate the memory

    ptr =  (int *)malloc(sizeof(int)* size);  //malloc (sizeof(int)*size); // ptr = (int *) - tatpurta dharm badalne
    
    // Use the meory (In logic building batch

    // Strp 3 : Deallocate the memory 
    free(ptr);

    return 0;
}