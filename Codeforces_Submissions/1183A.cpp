#include <stdio.h>

int main() {
	int a, sum, temp;
	scanf("%d", &a);
	while (1) {
		temp = a;
		sum = 0;
		while (temp > 0) {
			sum += (temp % 10);
			temp /= 10;
		}
		if (sum % 4 == 0) {
			printf("%d\n", a);
			break;
		}
		a++;
	}
	return 0;
}