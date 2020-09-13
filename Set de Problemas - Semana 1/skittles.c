#include <stdlib.h>
#include <stdio.h>
#include <cc50.h>
#include <time.h>


int
main(void){
int number;


	//seed do PRNG
	srand(time( NULL));
	// escolher número pseudo-leatório entre [0 , 1023]
	int skittles = rand() % 1024;
	//TODO	
}
