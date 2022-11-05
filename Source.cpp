#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//Дан массив целых чисел размера N,причём N - чётное.Вывести элементыс нечётными индексакми в обратном порядке.
	/*const int n = 12;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand()%51-20;//%51 даёт диапозон от 0 до 50
		//rand() выдаёт случайное число от - 32768 до 32767
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i -= 2) {
		cout << mas[i] << ' ';
	}*/

	//Дан массив целых чисел размера N. Заполнить его случайными числами из диапазона от -20 до 20. Найти кол-во
	//отрицательных элементов
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			k++;
		}
	}
	cout << "k (<0) = " << k << endl;*/

	//сам1 Дан массив целых чисел размера N. Заполнить его случайными числами из диапазона от -10 до 10. Найти сумму четных элементов
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			sum = i + sum;
		}
	}
	cout << "summa = "<< sum << endl;*/

	//2 Дан массив целых чисел размера N. Заполнить его случайными числами из диапазона от -10 до 20. Вывести на экран только те элементы которые делятся на 3.
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 31 - 10;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int pro = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 != 0) {
			pro = i + pro;
		}
	}
	cout << "proisv =" << pro << endl;*/

	 //3  Дан массив целых чисел размера N.Заполнить его случайными числами из диапазона от - 30 до 20. Найти произведение элементов, которые не делятся на 7.
	const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 51 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int pro = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 7 != 0) {
			pro = arr[i] * pro;
		}
	}
	cout << "proisv = " << pro << endl;

	//4 Дан массив целых чисел размера N.Заполнить его случайными числами из диапазона от - 10 до 50. Найти среднее африметическое положительных элементов.
}