// 1부터 100까지의 소수의 합
/*
#include <stdio.h>

int main() {
	int sum = 0;
	
	for (int i = 2; i <= 100; i++) {
		int count = 0;
		for (int j = 2; j < i; j++) {
			if (i%j == 0) {
				count++;
				break;
			}
		}
		if(count == 0){
			sum += i;
		}
	}
	printf("0부터 100까지의 소수의 합 : %d", sum); 

	return 0;
}
*/