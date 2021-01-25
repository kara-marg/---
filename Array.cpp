#include <iostream>
using namespace std;

int main()
{
	task_Array12();
	task_Array22();
	task_Array32();
	task_Array42();
	task_Array50();
	task_Array62();
	task_Array72();
	task_Array92();
}




/*Array12. Дан массив A размера N (N — четное число). Вывести его элементы с четными номерами в порядке возрастания номеров: A2, A4, A6, ..., AN. Условный оператор не использовать.*/
void task_Array12()
{
	int a[18];
	int n, i;
	cout << "N";
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		cout << i++;
		cin >> a[i];
	}
	for (i = 1; i < n; i += 2)
		cout << a[i] << endl;
}
/*Array22. Дан массив размера N и целые числа K и L (1 < K ≤ L ≤ N). Найти сумму всех элементов массива, кроме элементов с номерами от K до L включительно.*/
void task_Array22()
{
	int a[12];
	int n;
	int k;
	int l;
	int i;
	cout << "N";
	cin >> n;

	cout << "K";
	cin >> k;

	cout << "L";
	cin >> l;

	for (i = 0; i < n; ++i)
	{
		cout << i;
		cin >> a[i];
	}
	int sum = 0;
	for (i = 0; i < k - 1; ++i) sum += a[i];
	for (i = l; i < n; ++i) sum += a[i];
	cout << sum << endl;
}
/*Array32. Дан массив размера N. Найти номер его первого локального минимума (локальный минимум — это элемент, который меньше любого из своих соседей).*/
void task_Array32()
{
	int a[18];
	int n;
	int i;
	cout << "N";
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		cout << i++;
		cin >> a[i];
	}

	if (a[0] < a[1])
	{
		cout << 1;
	}
	else
	{
		i = 1;
		while ((i < n - 1) && !((a[i - 1] > a[i]) && (a[i] < a[i + 1])))
		{
			++i;
		}
		cout << i + 1;
	}
}
/*Array42. Дано число R и массив размера N. Найти два соседних элемента массива, сумма которых наиболее близка к числу R, и вывести эти элементы в порядке возрастания их индексов (определение наиболее близких чисел дано в задании Array40).*/
void task_Array42()
{
	int a[10];
	int n;
	int r;
	int i;
	cout << "N";
	cin >> n;

	cout << "R";
	cin >> r;

	for (i = 0; i < n; ++i)
	{
		cout << i++;
		cin >> a[i];
	}
	int min = abs(a[0] + a[1] - r), k = 1;
	for (i = 2; i < n; ++i)
	{
		if (abs(a[i - 1] + a[i] - r) < min)
		{
			min = abs(a[i - 1] + a[i] - r);
			k = i;
		}
	}
	cout << a[k - 1] << endl;
	cout << a[k] << endl;
}
/*Array50. Дан целочисленный массив A размера N, являющийся перестановкой (определение перестановки дано в задании Array49). Найти количество инверсий в данной перестановке, то есть таких пар элементов AI и AJ, в которых большее число находится слева от меньшего: AI > AJ при I < J.*/
void task_Array50()
{
	int a[10];
	int n;
	int i;
	cout << "N";
	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cout << i++;
		cin >> a[i];
	}
	int num = 0;
	int i2;
	for (i = 0; i < n - 1; ++i)
	{
		for (i2 = i + 1; i2 < n; ++i2)
		{
			if (a[i] > a[i2])
			{
				num++;
			}
		}
	}
	cout << num << endl;
}
/*Array62. Дан массив A размера N. Сформировать два новых массива B и C: в массив B записать все положительные элементы массива A, в массив C − все отрицательные (сохраняя исходный порядок следования элементов). Вывести вначале размер и содержимое массива B, а затем − размер и содержимое массива C. */
void task_Array62()
{
	int a[10];
	int b[10];
	int c[10];
	int n;
	int k;
	cout << "N";
	cin >> n;

	for (k = 0; k < n; ++k)
	{
		cout << k++;
		cin >> a[k];
	}
	int kb = 0;
	int kc = 0;
	for (k = 0; k < n; ++k)
	{
		if (a[k] > 0)
		{
			b[kb] = a[k];
			++kb;
		}
		if (a[k] < 0)
		{
			c[kc] = a[k];
			++kc;
		}

	}
	cout << "B";
	for (k = 0; k < kb; ++k)
		cout << k++;
	cin >> b[k];

	cout << "C";
	for (k = 0; k < kc; ++k)
		cout << k++;
	cin >> c[k];
}
/*Array72. Дан массив A размера N и целые числа K и L (1 ≤ K < L ≤ N). Переставить в обратном порядке элементы массива, расположенные между элементами AK и AL, включая эти элементы.*/
void task_Array72()
{
	int a[10];
	int n;
	int k;
	int l;
	int i;
	cout << "N";
	cin >> n;

	cout << "K";
	cin >> k;

	cout << "L";
	cin >> l;
	for (i = 0; i < n; ++i) {
		cout << i++;
		cin >> a[i];
	}

	for (i = k - 1; i < k + (l - k) / 2; ++i)
	{
		if (i != (l - i + k - 2))
		{
			a[i] += a[l - i + k - 2];
			a[l - i + k - 2] = a[i] - a[l - i + k - 2];
			a[i] = a[i] - a[l - i + k - 2];
		}
	}

	cout << "A";
	for (i = 0; i < n; ++i)
		cout << i + 1 << endl;
	cout << a[i] << endl;
}
//82
/*Array92. Дан целочисленный массив размера N. Удалить из массива все нечетные числа и вывести размер полученного массива и его содержимое.*/
void task_Array92()
{
	int a[10];
	int n;
	int k = 0;
	int i;

	cout << "N";
	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cout << i++;
		cin >> a[i];
	}
	for (i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			a[k] = a[i];
			++k;
		}
	}

	cout << "A";
	cin >> k;
	for (i = 0; i < k; ++i)
		cout << i++;
	cin >> a[i];
}