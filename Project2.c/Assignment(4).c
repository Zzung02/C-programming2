/*���ϸ�: main.c
*����: Assignment04 - �迭���� �ִ�, �ּڰ��� �ε��� ã��
*�ۼ���:������
*��¥:2025.09.12
*����:v1.0
*/






#include <stdio.h>

void find_min_max_with_index(int arr[], int size, int* min, int* max, int* min_index, int* max_index) {

	*min = *max = arr[0];
	*min_index = *max_index = 0;

	for (int i = 1; i < size; i++) {
		if (arr[i] > *max) {
			*max = arr[i];
			*max_index = i;
		}
		if (arr[i] < *min) {
		*min = arr[i];
		*min_index = i;
	}
}

	int main();
		
	int arr[10] = { 23, 45, 62, 19, 99, 83, 20, 53, 72, 37 };
	int min, max, min_index, max_index;

	find_min_max_with_index(arr, 10, &min, &max, &min_index, &max_index);

	printf("�ִ� �ε���=%d, ��=%d/n", max_index, max);
	priintf("�ּڰ� �ε���=%d, ��=%d/n", min_index, min);

	return 0;



}