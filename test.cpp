#include <stdio.h>
#include "scppt.h"
#include "lib.h"

/**
 * Example usage of the scppt.h
 */

int main(){
	SCPPT_START;

	ECHO("raiseNumber()");
	SCPPT_COMPARE("raise 5",raiseNumber(5),==,10);
	SCPPT_COMPARE("5 smaller than",5,<,10);
	SCPPT_COMPARE("5 greater than",5,>,3);

	ECHO("Tests complete");
	SCPPT_END;
	return 0;
}
