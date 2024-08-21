#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	int array[10001];
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < n; i++) {
		if (array[i] < x)
			printf("%d ", array[i]);
	}
}