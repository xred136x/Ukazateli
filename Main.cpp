// шаблон
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

// «адача 1

template <typename T>
void sum_arr(T* arr, const int len, T* var) {
	*var = 0;
	for (int i = 0; i < len; i++)
		*var += *(arr + i);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;
	// указатели на переменные

	/*cout << "јдрес n = " << &n << '\n';// вывод адреса переменной
	int *pn;// объ€вление указател€ на тип int
	pn = &n;// направление указател€ на адрес переменой n

	cout << "јдрес n = " << pn << '\n';

	cout << "n = " << n << '\n'; // вывод значени€ указател€ pn
	cout << "n = " << *pn << '\n';// вывод значени€ n с помощью разыменовани€ указател€ pn

	*pn = 15;// мен€ем значение n с помощью разыменовани€ 
	cout << "Ќова€ n = " << n << '\n';

	cout << "јдрес m = " << &m << '\n';
	pn = &m; //перенаправл€ем указатель на адрес переменной m
	cout << "адрес m = " << pn << '\n';
	int* pm = &m;*/

	// указатели и массивы

	/*const int size = 5;
	int arr[size]{ 10, 20, 30, 40, 50 };
	int* pa2 = &arr[2];
	cout << "arr[2] = " << *pa2 << '\n';// 30
	pa2++;
	cout << "*pa2 = " << *pa2 << '\n'; // 40
	pa2 -= 2;
	cout << "*pa2 = " << *pa2 << '\n';// 20

	cout << arr << '\n'; //адре первого элемента массива
	pa2 = arr;// направл€ем указатель pa2 на адрес arr
	cout << "*pa2 = " << *pa2 << '\n';

	// вывод массива через указатель pa2
	cout << "массив: \n";
	for (int i = 0; i < size; i++)
		cout << *(arr + 1) << ' '; // arr[i] = *(arr + 1)

	cout << '\n';*/

	// указатели и функции

	/*cout << n << ' ' << m << '\n';// 10 20
	//my_swap(n, m);// не работает т.к параметры это копии
	pswap(&n, &m);// работает, т.к передаютс€ адресапеременных
	cout << n << ' ' << m << '\n';// */

	// «адача 1

	const int size1 = 5;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 11);
	show_arr(arr1, size1);
	sum_arr(arr1, size1, &n);
	cout << "сумма элементов массива = " << n << '\n';

	return 0;
}