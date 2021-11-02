#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	// File pointer 
	FILE *fptr;
	
	int fileCount = 10000;

	//Getting the time at init of program
    time_t t; 
    time(&t);
    
        printf("Writing %d files to disk. Please be patient...\n", fileCount);

for ( int a = 0; a < fileCount; a = a + 1 ) {

        //Here, we are loading a file, writing to it and then closing it
        // a defined amount of times, in this case 10000. That means we are
        // stressing both input and output
		fptr = fopen("File-", "w+");
		fprintf(fptr,"This is a generated file ");
		fclose (fptr);
	    
	    }

    //Getting the time post calculations
    time_t t2;   
    time(&t2);

    //Printing our timersfor visualisation
    printf("\nFile Writing began at: %s", ctime(&t));
    printf("File Writing ended at at: %s", ctime(&t2));

    //calculating and printing the amount of time taken
    long int tlaps = (t2 - t);
    printf("%ld seconds elapsed.", tlaps);
    
    printf("\n%d files written.", fileCount);

	return 0;
}