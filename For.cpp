#include <iostream>
using namespace std;


int main()
{
	taskFor_02();
	taskFor_10();
	taskFor_30();
	taskWhile_07();
	taskWhile_11();
	taskSeries_9();
	taskSeries_18();
	taskSeries_30();
	taskSeries_39();
	taskMinMax_9();
	taskMinMax_16();
	taskMinMax_28();
	taskArray_1();
}
/*For2. Даны два целых числа A и B (A < B). Вывести в порядке возрастания все целые числа, расположенные между A и B (включая сами числа A и B), а также количество N этих чисел.*/
void taskFor_02()
{
	int a;
	int b;

	cout << "A:";
	cin >> a;

	cout << "B:";
	cin >> b;

	int i;

	for (i = a; i <= b; ++i)
		cout << i << endl;
	cout << "N:" << b - a + 1 << endl;
}

/*For10. Дано целое число N (> 0). Найти сумму 1 + 1/2 + 1/3 + ... + 1/N (вещественное число).*/
void taskFor_10()
{
	int n;

	cout << "n=";
	cin >> n;

	int i;
	float sum = 0;

	for (i = 1; i <= n; i++)
		sum = 1 / (float)i;

	cout << sum;
}

/*For30. Дано целое число N (> 1) и две вещественные точки на числовой оси: A, B (A < B). Отрезок [A, B] разбит на N равных отрезков. Вывести H —
длину каждого отрезка, а также значения функции F(X) = 1 – sin(X) в точ ках, разбивающих отрезок [A, B]: F(A), F(A + H), F(A + 2·H), ..., F(B).*/
void taskFor_30()
{
	int n;

	cout << "N:";
	cin >> n;

	float a;

	cout << "A:";
	cin >> a;

	float b;

	cout << "B:";
	cin >> b;

	float h = (b - a) / n;

	cout << "H: " << h << endl;

	int i;
	for (i = 0; i <= n; ++i) {
		cout << (1 - sin(a + i * h)) << endl;
	}
}

/*While7°. Дано целое число N (> 0). Найти наименьшее целое положительное число K, квадрат которого превосходит N: K2 > N. Функцию извлечения квадратного корня не использовать.*/
void taskWhile_07()
{
	int n;
	int k = 1;

	cout << "n";
	while (k * k <= n)
	{
		++k;
	}
	cout << k << endl;
}

/*While11°. Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + ... + K будет больше или равна N, и саму эту сумму.*/
void taskWhile_11()
{
	int n;
	int k = 0;
	int s = 0;
	while (s <= n)
	{
		++k;
		s += k;
	}

	cout << k << endl;
}

/*Series9. Дано целое число N и набор из N целых чисел. Вывести в том же порядке номера всех нечетных чисел из данного набора и количество K таких чисел.*/
void taskSeries_9()
{
	int n;
	int a;
	int k = 0;

	cout << "N" << n;
	cin >> n;

	int i;
	for (i = 1; i <= n; ++i)
	{
		if (a % 2 != 0)
		{
			++k;
		}
	}
	cout << k << endl;
}

/*Series18. Дано целое число N и набор из N целых чисел, упорядоченный по возрастанию. Данный набор может содержать одинаковые элементы. Вы- вести в том же порядке все различные элементы данного набора.*/
void taskSeries_18()
{
	int n;
	int i;
	int a;
	int b;

	for (i = 1; i <= n; ++i)
	{
		if ((a != b) || (i == 1));
	}
	cout << a << endl;
}

/*Series30. Даны целые числа K, N, а также K наборов целых чисел по N элементов в каждом наборе. Для каждого набора вывести сумму его элементов.*/
void taskSeries_30()
{
	int k;
	int n;
	int a;
	int b = 0;

	cout << "K";
	cin >> k;

	cout << "N";
	cin >> n;

	for (int i = 1; i <= k; ++i)
	{
		for (int c = 1; c <= n; ++c)
		{
			b = b + a;

			cout << "n" << i;
			cin >> a;
		}
	}
	cout << b << endl;
}

/*Series39. Дано целое число K, а также K наборов ненулевых целых чисел. Каждый набор содержит не менее трех элементов, признаком его завершения является число 0. Найти количество пилообразных наборов (определение пилообразного набора дано в задании Series23).*/
void taskSeries_39()
{
	int k;

	cout << "K";
	cin >> k;

	int ki;
	int a = 1;
	int a1;
	int a2;
	int count = 0;

	for (k = 1; ki <= k; ++ki)
	{
		cout << ">";
		cin >> a;

		cout << ">";
		cin >> a1;

		int check = 1;
		while (a != 0)
		{
			a2 = a1;
			a1 = a;
			cout << ">";
			cin >> a;

			if (check)
			{
				count += 1;
				if (!(((a2 < a1) && (a1 > a)) || ((a2 > a1) && (a1 < a))) && (a != 0)) check = 0;
			}
		}
		cout << count << endl;
	}
}

/*Minmax9. Дано целое число N и набор из N целых чисел. Найти номера первого и последнего максимального элемента из данного набора и вывести их в указанном порядке.*/
void taskMinMax_9()
{
	int i;
	int n;
	int ni;
	int maxn1;
	int maxn2;
	int max1;
	int max2;

	cout << "N";
	cin >> n;

	for (i = 1; i <= n; ++i)
	{
		cout << "n" << i;
		cin >> ni;

		if ((i == 1) || (ni > max1))
		{
			max1 = ni;
			maxn1 = i;
		}
		if ((i == 1) || (ni >= max2))
		{
			max2 = ni;
			maxn2 = i;
		}
	}

	cout << maxn1;
	cout << maxn2;
}

/*Minmax16. Дано целое число N и набор из N целых чисел. Найти количество элементов, расположенных перед первым минимальным элементом.*/
void taskMinMax_16()
{
	int minnum;
	int i;
	int n;
	int min;
	int a;

	cout << "N";
	cin >> n;

	for (i = 1; i <= n; ++i)
	{
		cout << "n" << i;
		cin >> a;

		if ((a < min) || (i == 1))
		{
			min = a;
			minnum = i;
		}
	}

	cout << (minnum - 1) << endl;
}

/*Minmax28. Дано целое число N и набор из N целых чисел, содержащий только нули и единицы. Найти номер элемента, с которого начинается самая длинная последовательность единиц, и количество элементов в этой по-
следовательности. Если таких последовательностей несколько, то вывести номер последней из них. Если единицы в исходном наборе отсутствуют, то дважды вывести 0.*/
void taskMinMax_28()
{
	int a = 2;
	int num = 0;
	int numi = 1;
	int maxnum = 0;
	int maxi = 0;
	int n;
	int i;

	cout << "N";
	cin >> n;

	for (i = 1; i <= n; ++i)
	{
		cout << i;
		cin >> a;

		if (a == 1)
		{
			++num;
			maxi = numi;
		}
		else
		{
			if (num >= maxnum) maxnum = num;
			numi = i + 1;
			num = 0;
		}
	}

	if ((num >= maxnum) && (a == 1))
	{
		maxnum = num;
		maxi = numi;
	}

	cout << maxi << endl;
	cout << maxnum << endl;
}

/*Array1. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, ... .*/
void taskArray_1()
{
	int a[100];
	int n;

	cout << "N: ";
	cin >> n;

	for (int i = 0; i < n; i++)
		a[i] = 1 + i * 2;

	for (int i = 0; i < n; ++i)
		cout << "a[" << i << "]=" << a[i] << endl;
}