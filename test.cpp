#include <stdio.h>
#include "scppt.h"
#include "lib.h"

/**
 * Example usage of the scppt.h
 */

int main(){
	SCPPT_START;

	ECHO("raiseNumber()");
	SCPPT_TEST("raise 5",raiseNumber(5),==,10);

	ECHO("Tests complete");
	SCPPT_END;
	return 0;
}
