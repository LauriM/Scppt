#include <stdio.h>
#include "scppt.h"
#include "lib.h"
#include "math.h"

/**
 * Example usage of the scppt.h
 */

int main(){
	SCPPT_START;

	ECHO("raiseNumber()");


	SCPPT_COMPARE("raise 5",raiseNumber(5),==,10);
	SCPPT_COMPARE("5 smaller than",5,<,10);
	SCPPT_COMPARE("5 greater than",5,>,3);

	SCPPT_COMPARE("Primes exectues 1000",countPrimes(1000),>,0);
	SCPPT_COMPARE("Primes executes 10000",countPrimes(10000),>,0);
	SCPPT_COMPARE("Primes executes 100000",countPrimes(100000),>,0);

	ECHO("Tests complete");
	SCPPT_END;
	return 0;
}
