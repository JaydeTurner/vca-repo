#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

	
	//Getting the time at init of program and storing 
    time_t t; 
    time(&t);

    printf("\nLeibniz Formanla Running to calculate pi with many terms...");

    long int i;
	long int n = 200000000;
 	double sum=0.0, term, pi;

 

    // Applying Leibniz Formula with n terms as assigned above
    for(long int i=0;i< n;i++) {
    term = pow(-1, i) / (2*i+1);
    sum += term;
    }
    
    pi = 4 * sum;

    printf("\nPI = %.6lf", pi);

	
    //Getting the time post calculations
    time_t t2;   
    time(&t2);

    //Printing our timers for visualisation
    printf("\nCalculations began at: %s", ctime(&t));
    printf("Calculations ended at at: %s", ctime(&t2));

    //calculating and printing the amount of time taken
    long int tlaps = (t2 - t);
    printf("%ld seconds elapsed.", tlaps);
    printf("\nLeibniz Formanla Ran to calculate pi with %ld terms.", n);

	return 0;
}