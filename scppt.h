#include <stdio.h>

#define _TO_STRING(value) #value
#define TO_STRING(value) _TO_STRING(value)

#define LINEINFO printf("["TO_STRING(__FILE__)":"TO_STRING(__LINE__)"] ");

#define OK PRINTLN("OK"); testOks++;
#define FAIL PRINTLN("FAIL"); testFails++;

#define ECHO(p_msg) LINEINFO printf(p_msg"\n");
#define PRINT(p_msg) printf(p_msg);

//Commands below are designed for the user

#define PRINTLN(p_msg) printf(p_msg"\n");

#define SCPPT_TEST(p_name,p_var1,p_check,p_var2) LINEINFO PRINT("< "p_name" > ") \
	if(p_var1 p_check p_var2){ \
		OK\
	}else{\
		FAIL\
	}

#define EQUALS(p_name,p_var1,p_var2)

#define SCPPT_START int testFails = 0; int testOks   = 0;
#define SCPPT_END printf("Fails: %i Oks: %i\n",testFails,testOks);
