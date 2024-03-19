//20 펙토리얼
#include <stdio.h>
#include <time.h> 

long factorial_iter(long n); 
long factorial_rec(long n);
 
int main() {

	clock_t start_iter, end_iter; 
	float duration_iter;
	start_iter = clock(); 

	long result_iter = factorial_iter(20);
    printf("%ld", result_iter);
	
	end_iter = clock(); 
	duration_iter = (float)(end_iter - start_iter) / CLOCKS_PER_SEC; 
	printf("\niter 수행시간은 %f초입니다.\n", duration_iter);
	
	printf("\n");
	
	clock_t start_rec, end_rec; 
	float duration_rec;
	start_rec = clock();

	long result_rec = factorial_rec(20);
	printf("%ld", result_rec);

	end_rec = clock();
	duration_rec = (float)(end_rec - start_rec) / CLOCKS_PER_SEC;
	printf("\nrec 수행시간은 %f초입니다.\n", duration_rec); 

	return 0;
}

long factorial_iter(long n) {
	long f = 1;
	for (int i = 1; i <= n; i++) {
		f *= i; 
	}
	return f;
}

long factorial_rec(long n) {
	if (n <= 1) return 1;
	else return n * factorial_rec(n - 1);
}

//13의 21 거듭제곱
#include <stdio.h>
#include <time.h> 

long power_iter(a,b);
long power_rec(a,b);

int main() {
	clock_t start_iter, end_iter;
	double duration_iter;
	start_iter = clock();

	long result_iter = power_iter(13, 21);
	printf("%ld", result_iter);

	end_iter = clock();
	duration_iter = (float)(end_iter - start_iter) / CLOCKS_PER_SEC;
	printf("\niter수행시간은 %f초입니다.\n", duration_iter);

	clock_t start_rec, end_rec;
	double duration_rec;
	start_rec = clock();
	
	long result_rec = power_rec(13, 21); 
	printf("%ld", result_rec);

	end_rec = clock();
	duration_rec = (float)(end_rec - start_rec) / CLOCKS_PER_SEC;
	printf("\niter수행시간은 %f초입니다.\n", duration_rec);

	return 0;
} 

long power_iter(a, b) {
	int p = 1;
	for (int i = 1; i <= b; i++) {
		p *= a; 
	}
	return p; 
}
long power_rec(a, b) {
	if (b <= 1) return 1;
	else return a * power_iter(a, b - 1);  
}