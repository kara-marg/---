#include <iostream>
#include "Boolean.h"
using namespace std;


int main()
{
	return Boolean2();
	return Boolean7();
	return Boolean9();
	return Boolean11();
	return Boolean14();
	return Boolean19();
}
int Boolean2()
{
	//Boolean2.Дано целое число A.Проверить истинность высказывания : «Число A является нечетным».
	int A = 23;
	int B = A % 2;
	cout << "число = " << A;
	return 0;
}

int Boolean7()
{
	//Boolean7.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Число B находится между числами A и C».
	int A = 4;
	int K = 8;
	int N = A + K / 2;
	cout << "истинность = " << N;
	return 0;
}

int Boolean9()
{
	//Boolean9.Даны два целых числа : A, B.Проверить истинность высказывания : «Хотя бы одно из чисел A и B нечетное».
	int A = 12;
	int B = 25;
	bool iscorrect = (A % 2 == 1 || B % 2 == 1);
	cout << "проверить истинность" << iscorrect;
	return 0;
}

int Boolean11()
{
	//Boolean11.Даны два целых числа : A, B.Проверить истинность высказывания : «Числа A и B имеют одинаковую четность».
	int A = 64;
	int B = 38;
	bool iscorrect((A + B) % 2 == 0);
	cout << "истинность" << iscorrect;
	return 0;
}

int Boolean14()
{
	//Boolean14.Даны три целых числа : A, B, C.Проверить истинность высказывания : «Ровно одно из чисел A, B, C положительное».
	int A = 13;
	int B = 34;
	int C = 24;
	bool iscorrect = (A == C || A != B || C != B);
	cout << "истинность" << iscorrect;
	return 0;
}

int Boolean19()
{
	//Boolean19.Проверить истинность высказывания : «Среди трех данных целых чисел есть хотя бы одна пара взаимно противоположных».
	int A = 45;
	int B = 657;
	int C = 97;
	bool iscorrect = ((A == (-1) * B) | (A == (-1) * C) | (B == (-1) * C));
	cout << "истинность" << iscorrect;
	return 0;
}