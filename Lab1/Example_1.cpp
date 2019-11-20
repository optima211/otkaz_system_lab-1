#include <stdio.h>
#include <iostream>
#include <time.h>
#include <conio.h>
#include <omp.h>
int main()
{
	using namespace std;
	cout << "Part-1:\n";
	{
		cout << "Hello, World!" << endl;
	}
	system("pause");
	cout << endl;

	cout << "Part-2:\n";
	omp_set_num_threads(4);
	#pragma omp parallel num_threads(4)
	{
		cout << "Hello, World!" << endl;
	}
	system("pause");
	cout << endl;

	cout << "Part-3:\n";
	#pragma omp parallel num_threads(3)
	{
		printf("Hello! I am %d thread from %d threads! \n", omp_get_thread_num(), omp_get_num_threads());

	}
	system("pause");
	cout << endl;

	cout << "Part-4:\n";
	#pragma omp parallel num_threads(6)
	{
		int num = omp_get_thread_num();
		if (num % 2 == 0) printf("Hello! Iameventhread %d\n", num);// те нити, номера которых четные
	}
	system("pause");

	return 0;
}