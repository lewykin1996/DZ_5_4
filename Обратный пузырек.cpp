// Вывод массива на экран.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };

	cout << "Массив до сортировки:         ";

	for (int element : arr) 
	{
		cout << element << '\t';
	}

	int size = sizeof(arr) / sizeof(arr[0]);
	bool swapped{};
	for (int i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temporary = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temporary;
				swapped = true;
			}
		}
		if (!swapped) { break; }
	}
	cout << "\n\nМассив после сортировки:   \t";
	for (int element : arr) { cout << element << '\t'; }
	
	cout << "\n\n\n";

	return 0;
}