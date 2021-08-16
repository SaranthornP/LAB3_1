#include<stdio.h>
int main() {
	int a = 0;
	int sum = 0;
	int x = 0;
	scanf_s("%d", &a);
	while (x == 0) {
		while (a > 0) {
			sum += a % 10;
			a = a / 10;
		}
		if (sum > 9) {
			a = sum;
			sum = 0;
		}
		else x = 1;
	}
	printf("%d", sum);
	return 0;
}