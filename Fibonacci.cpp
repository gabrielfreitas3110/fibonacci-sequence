#include <stdio.h>
int fib(int n) {                                          
	if(n <= 1)
		return n;
	return (fib(n-1) + fib(n-2));     
}
int main(void) {
	int n;
	while(1) {
		scanf("%d", &n);
		printf("%d\n", fib(n));
	}
	return (0);
}
