#include <stdio.h>

int main() {

    int n, m;
    int arr[101] = { 0, };
    int a, b, c;

    scanf("%d %d", &n, &m); //n���� �ٱ���, m���� �� �ִ� �õ�

    for (int i = 0; i < m; i++) { //m�� ����
        scanf("%d %d %d", &a, &b, &c); //i�� �ٱ��Ϻ��� j�� �ٱ��ϱ��� k�� ��ȣ�� ������ �ִ� ���� ����
        for (int k = a; k <= b; k++) { 
            arr[k] = c;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}