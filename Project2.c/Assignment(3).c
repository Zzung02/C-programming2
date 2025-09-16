/* 파일명: main.c
* 내용: Assignment3- 배열에서 최댓값과 최솟값 찾기
* 작성자: 김정민
* 날짜:2025.9.12
* 버전; v1.0
*/



#include  <stdio.h>

void find_min_max(int arr[], int size, int* min, int* max) {
	*min = *max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > *max) *max = arr[i];
		if (arr[i] < *min) *min = arr[i];

	}

}

int main() {
	int arr[10] = { 23, 45, 62, 19, 99, 83, 20, 53, 72, 37 };
	int min, max;

	find_min_max(arr, 10, &min, &max);

	printf("최댓값: %d/n", max);
	printf("최솟값: %d/n", min);

	return 0;


}