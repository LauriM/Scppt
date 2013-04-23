#include <math.h>

/**
 * Example function for testing
 */

int raiseNumber(int i){
	if(i < 0){
		i = 0;
	}
	return i + i;
}

int countPrimes(int n){
	int i,j;
	int freq=n-1;
	for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
	return j;
}
