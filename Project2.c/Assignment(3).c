/* ���ϸ�: main.c
* ����: Assignment3- �迭���� �ִ񰪰� �ּڰ� ã��
* �ۼ���: ������
* ��¥:2025.9.12
* ����; v1.0
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

	printf("�ִ�: %d/n", max);
	printf("�ּڰ�: %d/n", min);

	return 0;


}