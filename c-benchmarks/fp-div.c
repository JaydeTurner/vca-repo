#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Getting the time at init of program and storing 
    time_t t; 
    // Pointer for t
    time(&t);
    
    //initializing pointer to store the location of allocated memory
    float* ptr;
    
    // intensity controls the size of the array we are going to create
    int intensity = 10000;
    
    //allocating memory for 100 floats
    ptr = (float*) malloc(intensity*sizeof(float));
    

    
    // Getting all the array elements
    // and assignging them arbitrary values
    for (int i = 0; i < intensity; ++i) {
            ptr[i] = i + rand();
        }
    
    
    // Performing our calculation for each element in the array
    // simply dividing it by the next array element. 
    // intensity gets -1 to prevent it going past the malloc
    for (int i = 0; i < intensity-1; i++){
        
        float res = ( (ptr[i]) / (ptr[i+1]) );
        
        printf("iteration %d ", i);
        printf(" element : %f \n", res);
        
        
    }
    
    //Getting the time post calculations
    time_t t2;   
    time(&t2);
    
    //calculating and printing the amount of time taken
    long int tlaps = (t2 - t);
    printf("%ld second(s) elapsed.", tlaps);
    
    
    return 0;
}
