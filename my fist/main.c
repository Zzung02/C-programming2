#include <stdio.h>

void test(); //�Լ� ���� �κ�

int main(void) //main�Լ� c���� ����� ó������
{
	printf("Hello world");

	return 0;
}

void test() {
	int age = 25; //������ ����
	float pi = 3.141592; //�Ǽ��� ����(ũ�� ����)
	char myname[128] = "������"; //���ڿ� ����
	char grade = 'A'; //������ ����
	double dx = 2.12e4; //�Ǽ��� ����(ũ�� ŭ)
	
	age = age + 1;

	double r = 2; // 2m
	double area = pi * r * r; // ������ r �� ���� ����

	if (age > 10 || area > 5.0) {

	}
	else {

	}

}
