//0314 �ð� ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	clock_t start, stop;
	double duration;
	start = clock();
	
	int sum = 0;
	
	for (int i = 2; i <= 100; i++) {
		int count = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				count++;
				break;
			}
		}
		if (count == 0) {
			sum += i;
		}
	}
	printf("0���� 100������ �Ҽ��� �� : %d\n", sum);

	stop = clock(); 
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f���Դϴ�.\n", duration);

	return 0;
}