//#include <stdio.h>
//
//int main()
//{
//	int n, min = 1000000, max = -1000000; // min, max ���� ���� �����ϱ�
//
//	scanf("%d", &n);
//	int num[n]; // �迭�� ũ�⸦ ������ ����
//
//	for (int i = 0; i < n; i++) // �ּ�, �ִ밪 ���ϱ�
//	{
//		scanf("%d", &num[i]);
//		if (num[i] > max) //min, max�� �ֽ�ȭ
//			max = num[i]; 
//		if (num[i] < min)
//			min = num[i];
//	}
//
//	printf("%d %d", min, max); //��� ���
//
//	return 0;
//
//}