#include<stdio.h>

int main() {
	int num;
	scanf_s("%d", &num);
	if (num >= 3) {
		//top
		for (int i = 0; i < 2 * num; i++) {
			printf("*");
		}
		printf("\n");
		//mid1
		for (int i = 1; i < num; i++) {
			for (int j = 0; j < num - i; j++) {
				printf("*");
			}
			for (int j = 0; j <= 2 * i - 1; j++) {
				printf(" ");
			}
			for (int j = 0; j < num - i; j++) {
				printf("*");
			}
			printf("\n");
		}
		//mid2
		for (int i = 1; i < num; i++) {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			for (int j = 0; j <= ((2 * num) - (2*i))-1; j++) {
				printf(" ");
			}
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
		//low
		for (int i = 0; i < 2 * num; i++) {
			printf("*");
		}
		return 0;
	}
}