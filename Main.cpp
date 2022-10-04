// ������
#include<iostream>
using namespace std;


template<typename T>
void fill_arr(T arr[], const int len, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < len; i++)
		arr[i] = rand() % (end - begin) + begin;
}

template<typename T>
void show_arr(T arr, const int len) {
	cout << '[';
	for (int i = 0; i < len; i++)
		cout << arr[i] << ' ';
	cout << ']';

}
void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void pswap(int* pn1, int* pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

// ������ 1

template <typename T>
void sum_arr(T* arr, const int len, T* var) {
	*var = 0;
	for (int i = 0; i < len; i++)
		*var += *(arr + i);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;
	// ��������� �� ����������

	/*cout << "����� n = " << &n << '\n';// ����� ������ ����������
	int *pn;// ���������� ��������� �� ��� int
	pn = &n;// ����������� ��������� �� ����� ��������� n

	cout << "����� n = " << pn << '\n';

	cout << "n = " << n << '\n'; // ����� �������� ��������� pn
	cout << "n = " << *pn << '\n';// ����� �������� n � ������� ������������� ��������� pn

	*pn = 15;// ������ �������� n � ������� ������������� 
	cout << "����� n = " << n << '\n';

	cout << "����� m = " << &m << '\n';
	pn = &m; //�������������� ��������� �� ����� ���������� m
	cout << "����� m = " << pn << '\n';
	int* pm = &m;*/

	// ��������� � �������

	/*const int size = 5;
	int arr[size]{ 10, 20, 30, 40, 50 };
	int* pa2 = &arr[2];
	cout << "arr[2] = " << *pa2 << '\n';// 30
	pa2++;
	cout << "*pa2 = " << *pa2 << '\n'; // 40
	pa2 -= 2;
	cout << "*pa2 = " << *pa2 << '\n';// 20

	cout << arr << '\n'; //���� ������� �������� �������
	pa2 = arr;// ���������� ��������� pa2 �� ����� arr
	cout << "*pa2 = " << *pa2 << '\n';

	// ����� ������� ����� ��������� pa2
	cout << "������: \n";
	for (int i = 0; i < size; i++)
		cout << *(arr + 1) << ' '; // arr[i] = *(arr + 1)

	cout << '\n';*/

	// ��������� � �������

	/*cout << n << ' ' << m << '\n';// 10 20
	//my_swap(n, m);// �� �������� �.� ��������� ��� �����
	pswap(&n, &m);// ��������, �.� ���������� ����������������
	cout << n << ' ' << m << '\n';// */

	// ������ 1

	const int size1 = 5;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 11);
	show_arr(arr1, size1);
	sum_arr(arr1, size1, &n);
	cout << "����� ��������� ������� = " << n << '\n';

	return 0;
}