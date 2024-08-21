#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n;
	scanf("%d\n", &n);

	int a[101];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int v;
	scanf("%d", &v);

	int result = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == v)
			result++;
	}
	printf("%d", result);
}