//#include <stdio.h>
//
//int main()
//{
//	int n, min = 1000000, max = -1000000; // min, max 범위 설정 주의하기
//
//	scanf("%d", &n);
//	int num[n]; // 배열의 크기를 변수로 설정
//
//	for (int i = 0; i < n; i++) // 최소, 최대값 구하기
//	{
//		scanf("%d", &num[i]);
//		if (num[i] > max) //min, max값 최신화
//			max = num[i]; 
//		if (num[i] < min)
//			min = num[i];
//	}
//
//	printf("%d %d", min, max); //결과 출력
//
//	return 0;
//
//}