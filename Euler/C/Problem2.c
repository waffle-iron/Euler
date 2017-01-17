#include <stdio.h>

void main(){
	int x = 1;
	int y = 2;
	int temp = 0;
	int sum = 0;

	while(y < 4000000){
		if(y % 2 == 0)
		{
			sum += y;
		} 
		temp = y;
		y += x;
		x = temp;
		
	}

	printf("%d\n", sum);
}