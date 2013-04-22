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

	int n = 1000000;
	  int i,j;
	    int freq=n-1;
		  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}

	SCPPT_COMPARE("raise 5",raiseNumber(5),==,10);
	SCPPT_COMPARE("5 smaller than",5,<,10);
	SCPPT_COMPARE("5 greater than",5,>,3);

	ECHO("Tests complete");
	SCPPT_END;
	return 0;
}
