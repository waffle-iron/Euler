#include <stdio.h>

void main(){
	int sum = theSum(3, 999) + theSum(5, 999) - theSum(15, 999);
	printf("%d\n", sum);
}

int theSum(int k, int n){
	int x;
	int temp = n/k;
	return k * temp * (temp + 1) /2;
}