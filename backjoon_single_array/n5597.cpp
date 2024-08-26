//#include <stdio.h>
//
//int main() {
//
//    int arr[31] = { 0, }; //배열 전부 0으로 초기화
//    int a;
//
//    for (int i = 0; i < 28; i++) {
//        scanf("%d", &a); 
//        arr[a] = 1;//입력받은 번지의 값 1로 변경
//    }
//    for (int i = 1; i <= 30; i++) {
//        if (!arr[i]) printf("%d \n", i); //번지의 값이 1이 아니면 출력(0이면 출력)
//    }
//    return 0;
//}