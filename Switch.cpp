#include <iostream>
#include "Switch.h"
using namespace std;


int main()
{
	return If2();
	return If6();
	return If10();
	return IF12();
	return If14();
	return If19();
	return If20();
	return If24();
	return If28();
	return Case2();
	return Case6();
	return Case8();
	return Case17();
	return Case19();
	return Case20();
}

int If2()
{
	/*If2.Дано целое число. Если оно является положительным, то прибавить к нему 1; в противном случае вычесть из него 2. Вывести полученное число */
	{
		int a;
		cout << "a:";
		cin >> a;
		if (a > 0) {
			a + 1;
			cout << a + 1 << endl;
		}
		else (a < 0); {
			a - 2;
			cout << a - 2 << endl;
		}
		return 0;
	}
}

int If6()
{
	/*If6°. Даны два числа. Вывести большее из них.*/
	{
		int a; int b;
		cout << "a:";
		cin >> a;
		cin >> b;
		if (a > b)
			cout << a << endl;
		else
			cout << b << endl;
		return 0;
	}
}

int If10()
{
	/*If10. Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной сумму этих значений, а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.*/
	{
		int A; int B;
		cout << "A: ";
		cin >> A;
		cout << "B: ";
		cin >> B;
		if (A == B) {
			A = B = 0;
		}
		else {
			A = B += A;
		}
		cout << "A = " << A << endl;
		cout << "B = " << B << endl;

		system("pause");
		return 0;
	}
}

int IF12()
{
	/*If12. Даны три числа. Найти наименьшее из них.*/
	{
		int a; int b; int c;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a < b && a < c)
			cout << a;
		else if (b < a && b < c)
			cout << b;
		else if (c < b && c < a)
			cout << c;
		return 0;
	}
}

int If14()
{
	/*If14. Даны три числа. Вывести вначале наименьшее, а затем наибольшее из данных чисел.*/
	{
		int a; int b; int c;
		int Max; int Min;
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
		cout << "c: ";
		cin >> c;
		if (a >= b && a >= c) Max = a;
		else if (b >= a && b >= c) Max = b;
		else  Max = c;

		if (a <= b && a <= c) Min = a;
		else if (b <= a && b <= c) Min = b;
		else Min = c;
		cout << Min << endl;
		cout << Max << endl;

		system("pause");
		return 0;
	}
}

int If19()
{
	/*If19. Даны четыре целых числа, одно из которых отлично от трех других, равных между собой. Определить порядковый номер числа, отличного от остальных.*/
	{
		int k; int b; int c; int d;
		int a;
		cout << "k:";
		cin >> k;
		cout << "b:";
		cin >> b;
		cout << "c:";
		cin >> c;
		cout << "d:";
		cin >> d;
		if (k == b && b == c) a;
		else if (k == b && k == d) a;
		else if (k == c && k == d) a;
		else if (b == c && b == d) a;
		cout << a << endl;

		system("pause");
		return 0;
	}
}

int If20()
{
	/*If20. На числовой оси расположены три точки: A, B, C. Определить, какая издвух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.*/
	{
		int a;
		int b;
		int c;
		cout << "b:";
		cin >> b;
		cout << "c:";
		cin >> c;
		if ((a - b) < (a - c));
		return 0;
	}
}

int If24()
{
	/*If24. Для данного вещественного x найти значение следующей функции f, принимающей вещественные значения: f(x)= 2·sin(x), если x > 0, f(x)=6-x, если x <= 0,*/
	{
		int x;
		int f;
		cout << "x:";
		cin >> x;
		if (x > 0) f = 2 * sin(x);
		else f = 6 - x;
		cout << "f(x) = " << f << endl;
		system("pause");
		return 0;
	}
}

int If28()
{
	/*If28. Дан номер года (положительное целое число). Определить количество дней в этом году, учитывая, что обычный год насчитывает 365 дней, а високосный — 366 дней. Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на 100 и не делятся на 400 (например, годы 300, 1300 и 1900 не являются високосными, а 1200 и 2000 — являются).*/
	{
		int year;
		cout << "високосный год: ";
		cin >> year;
		if (year % 4 == 0) {
			cout << 366 << endl;
		}
		else if (year % 400 && year % 100 != 0) {
			cout << 365 << endl;
		}
		return 0;
	}
}

int Case2()
{
	//Case2.Дано целое число K.Вывести строку - описание оценки, соответствующей числу K(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).Если K не лежит в диапазоне 1–5, то вывести строку «ошибка».
	setlocale(LC_ALL, "Russian");
	int K;
	cout << "K = ";
	cin >> K;
	switch (K)
	{
	case 1: cout << "плохо"; break;
	case 2: cout << "неудовлетворительно"; break;
	case 3: cout << "удовлетворительно"; break;
	case 4: cout << "хорошо"; break;
	case 5: cout << "отлично"; break;
	default: cout << "ошибка";
	}

	cout << K << endl;

	return 0;
}

int Case6()
{

	//Case6.Единицы длины пронумерованы следующим образом : 1 — дециметр, 2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр.Дан номер единицы длины(целое число в диапазоне 1–5) и длина отрезка в этих единицах(вещественное число).Найти длину отрезка в метрах.* /
	int N;
	int L;
	cout << "N: ";
	cin >> N;
	cout << "L: ";
	cin >> L;

	switch (N) {
	case 1:
		cout << L / 10 << endl;
		break;
	case 2:
		cout << L * 1000 << endl;
		break;
	case 3:
		cout << L << endl;
		break;
	case 4:
		cout << L / 1000 << endl;
		break;
	case 5:
		cout << L / 100 << endl;
		break;
	}
	return 0;
}

int Case8()
{
	//Case8.Даны два целых числа : D(день) и M(месяц), определяющие правильную дату невисокосного года.Вывести значения D и M для даты, предшествующей указанной.* /
	setlocale(LC_ALL, "Russian");
	int D;
	int M;
	cout << "день:";
	cin >> D;
	cout << "месяц:";
	cin >> M;
	D = D - 1;
	if (D == 0) {
		M = M - 1;
		if (M = 0) {
			M = 12;
		}
		switch (M)
		{
		case 1: D = 31;
		case 3: D = 31;
		case 5: D = 31;
		case 7: D = 31;
		case 8: D = 31;
		case 10: D = 31;
		case 12: D = 31;
		case 4: D = 30;
		case 6: D = 30;
		case 9: D = 30;
		case 11: D = 30;
		case 2: D = 28;
		}
	}
	cout << "дата:" << D << "месяц" << M;
	return 0;
}

int Case17()
{
	//Case17.Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме.Вывести строку - описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий», 23 — «двадцать три учебных задания», 31 — «тридцать одно учебное задание».* /

	setlocale(LC_ALL, "Russian");
	int a;
	cout << "число:";
	cin >> a;

	switch (a) {
	case 10:
		cout << "Десять заданий";
		break;
	case 11:
		cout << "одиннадцать заданий";
		break;
	case 12:
		cout << "двенадцать заданий";
		break;
	case 13:
		cout << "тринадцать заданий";
		break;
	case 14:
		cout << "четырнадцать заданий";
		break;
	case 15:
		cout << "пятнадцать заданий";
		break;
	case 16:
		cout << "шестнадцать  заданий";
		break;
	case 17:
		cout << "семнадцать заданий";
		break;
	case 18:
		cout << "восемнадцать заданий";
		break;
	case 19:
		cout << "девятнадцать заданий";
		break;
		switch (a / 10)
		{
		case 2:
			cout << "Двадцать";
			break;
		case 3:
			cout << "Тридцать";
			break;
		case 4:
			cout << "Сорок";
			break;
		}
		switch (a % 10)
		{
		case 1:
			cout << " одно задание";
			break;
		case 2:
			cout << " два задания";
			break;
		case 3:
			cout << " три задания";
			break;
		case 4:
			cout << " четыре задания";
			break;
		case 5:
			cout << " пять заданий";
			break;
		case 6:
			cout << " шесть заданий";
			break;
		case 7:
			cout << " семь заданий";
			break;
		case 8:
			cout << " восемь заданий";
			break;
		case 9:
			cout << " девять заданий";
			break;
		}
	}

	return 0;
}

int Case19()
{
	//Case19.В восточном календаре принят 60 - летний цикл, состоящий из 12 - летних подциклов, обозначаемых названиями цвета : зеленый, красный, желтый, белый и черный.В каждом подцикле годы носят названия животных : крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи.По номеру года определить его название, если 1984 год — начало цикла : «год зеленой крысы».
	setlocale(LC_ALL, "Russian");
	int N;
	cout << "Год:";

	switch ((N) % 10) {
	case 0:
		cout << "белый";
		break;
	case 1:
		cout << "белый";
		break;
	case 2:
		cout << "черный";
		break;
	case 3:
		cout << "черный";
		break;
	case 4:
		cout << "зелёный";
		break;
	case 5:
		cout << "зелёный";
		break;
	case 6:
		cout << "красный";
		break;
	case 7:
		cout << "красный";
		break;
	case 8:
		cout << "жёлтый";
		break;
	case 9:
		cout << "жёлтый";
		break;
	}
	switch ((N + 8) % 12) {
	case 0:
		cout << "крысы";
		break;
	case 1:
		cout << "коровы";
		break;
	case 2:
		cout << "тигра";
		break;
	case 3:
		cout << "зайца";
		break;
	case 4:
		cout << "дракона";
		break;
	case 5:
		cout << "змеи";
		break;
	case 6:
		cout << "лошади";
		break;
	case 7:
		cout << "овцы";
		break;
	case 8:
		cout << "обезьяны";
		break;
	case 9:
		cout << "курицы";
		break;
	case 10:
		cout << "собаки";
		break;
	case 11:
		cout << "свиньи";
		break;
	}

	return 0;
}

int Case20()
{
	//Case20. Даны два целых числа: D (день) и M (месяц), определяющие правильную дату. Вывести знак Зодиака, соответствующий этой дате: «Водолей» (20.1–18.2), «Рыбы» (19.2–20.3), «Овен» (21.3–19.4), «Телец» (20.4–20.5), «Близнецы» (21.5–21.6), «Рак» (22.6–22.7), «Лев» (23.7–22.8), «Дева» (23.8–22.9), «Весы» (23.9–22.10), «Скорпион» (23.10–22.11), «Стрелец» (23.11–21.12), «Козерог» (22.12–19.1).*/
	setlocale(LC_ALL, "Russian");
	int D; int M;
	cout << "день:";
	cin >> D;
	cout << "месяц:";
	cin >> M;
	switch (M) {
	case 1:
		if (D > 19) cout << ("Водолей");
		else  cout << ("Козерог");
		break;
	case 2:
		if (D > 18)  cout << ("Рыбы");
		else  cout << ("Водолей");
		break;
	case 3:
		if (D > 20)  cout << ("Овен");
		else  cout << ("Рыбы");
		break;
	case 4:
		if (D > 19)  cout << ("Телец");
		else  cout << ("Овен");
		break;
	case 5:
		if (D > 20)  cout << ("Близнецы");
		else  cout << ("Телец");
		break;
	case 6:
		if (D > 21)  cout << ("Рак");
		else  cout << ("Близнецы");
		break;
	case 7:
		if (D > 22)  cout << ("Лев");
		else  cout << ("Рак");
		break;
	case 8:
		if (D > 22)  cout << ("Дева");
		else  cout << ("Лев");
		break;
	case 9:
		if (D > 22)  cout << ("Весы");
		else  cout << ("Дева");
		break;
	case 10:
		if (D > 22)  cout << ("Скорпион");
		else  cout << ("Весы");
		break;
	case 11:
		if (D > 22)  cout << ("Стрелец");
		else  cout << ("Скорпион");
		break;
	case 12:
		if (D > 21)  cout << ("Козерог");
		else  cout << ("Стрелец");
		break;
	}
	return 0;
}