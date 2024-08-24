#include <stdio.h>

int main() {

    int n, m;
    int arr[101] = { 0, };
    int a, b, c;

    scanf("%d %d", &n, &m); //n개의 바구니, m번의 공 넣는 시도

    for (int i = 0; i < m; i++) { //m번 실행
        scanf("%d %d %d", &a, &b, &c); //i번 바구니부터 j번 바구니까지 k번 번호가 적혀져 있는 공을 넣음
        for (int k = a; k <= b; k++) { 
            arr[k] = c;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}