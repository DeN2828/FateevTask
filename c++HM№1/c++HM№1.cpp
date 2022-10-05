#include <iostream>
using namespace std;

//Task 1
template <typename T>
double max(T mas[], int n)
{
	int max = mas[0];
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
		}
	}
	cout << "Максимальное значение в одномерном массиве: ";
	return max;
}

const int n = 5;
const int nn = 3;
const int m = 3;

template <typename T>
void max2(T mas2[][m], int nn, int m)
{
	int max = mas2[0][0];
	for (int i = 0; i < nn; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (mas2[i][j] > max)
			{
				max = mas2[i][j];
			}
		}
	}
	cout << "\nМаксимальное значение в двомерном массиве: " << max << "\n";
}

double celnum(int a, int b)
{
	if (a > b)return a;
	else return b;
}
void celnum2(int a, int b, int c)
{
	int max;
	if (a > b) max = a;
	else max = b;
	if (c > max) max = c;
	cout << "\n" << max;
}

//Task 2
template <typename T>
void mass(T mas2[][m], int nn, int m)
{
	cout << "\n\n";
	int max = mas2[0][0];
	int min = mas2[0][0];
	for (int i = 0; i < nn; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas2[i][j] << "\t";
		}
		cout << "\n";
	}


	for (int i = 0; i < nn; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				if (mas2[i][j] > max)
				{
					max = mas2[i][j];
				}
				if (mas2[i][j] < min)
				{
					min = mas2[i][j];
				}
				cout << mas2[i][j] << "\t";
			}
		}
		cout << "\n";
	}
	cout << "\n min: " << min;
	cout << "\n max: " << max;

	for (int k = 0; k < nn; k++)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = m - 1; j > i; j--)
				if (mas2[k][j] < mas2[k][j - 1])
				{
					int tmp = mas2[k][j];
					mas2[k][j] = mas2[k][j - 1];
					mas2[k][j - 1] = tmp;
				}
		}
	}

	cout << "\n\n Сортировка по возрастанию: \n";
	for (int i = 0; i < nn; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas2[i][j] << "\t";
		}
		cout << "\n";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
    int mas[n] = {5,1,12,34,3};
	int mas2[nn][m] = { {1, 5, 9}, {9,5,11}, {0,240,-10} };

	//Task 1
	cout << max(mas, n);
	max2(mas2, nn, m);
	int a = 5;
	int b = 1;
	int c = 3;
	cout << celnum(a, b);
	celnum2(a,b,c);

	//Task 2
	mass(mas2, nn, m);
}
