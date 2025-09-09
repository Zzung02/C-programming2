#include <stdio.h>

void test(); //함수 정의 부분

int main(void) //main함수 c파일 실행시 처음실행
{
	printf("Hello world");

	return 0;
}

void test() {
	int age = 25; //정수형 변수
	float pi = 3.141592; //실수형 변수(크기 작음)
	char myname[128] = "김정민"; //문자열 변수
	char grade = 'A'; //문자형 변수
	double dx = 2.12e4; //실수형 변수(크기 큼)
	
	age = age + 1;

	double r = 2; // 2m
	double area = pi * r * r; // 반지름 r 인 원의 면적

	if (age > 10 || area > 5.0) {

	}
	else {

	}

}
