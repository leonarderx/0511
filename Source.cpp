#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//��� ������ ����� ����� ������� N,������ N - ������.������� ��������� ��������� ���������� � �������� �������.
	/*const int n = 12;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand()%51-20;//%51 ��� �������� �� 0 �� 50
		//rand() ����� ��������� ����� �� - 32768 �� 32767
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i -= 2) {
		cout << mas[i] << ' ';
	}*/

	//��� ������ ����� ����� ������� N. ��������� ��� ���������� ������� �� ��������� �� -20 �� 20. ����� ���-��
	//������������� ���������
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

	//���1 ��� ������ ����� ����� ������� N. ��������� ��� ���������� ������� �� ��������� �� -10 �� 10. ����� ����� ������ ���������
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

	//2 ��� ������ ����� ����� ������� N. ��������� ��� ���������� ������� �� ��������� �� -10 �� 20. ������� �� ����� ������ �� �������� ������� ������� �� 3.
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

	 //3  ��� ������ ����� ����� ������� N.��������� ��� ���������� ������� �� ��������� �� - 30 �� 20. ����� ������������ ���������, ������� �� ������� �� 7.
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

	//4 ��� ������ ����� ����� ������� N.��������� ��� ���������� ������� �� ��������� �� - 10 �� 50. ����� ������� �������������� ������������� ���������.
}