#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson3Modul5HomeWork1547555958

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind1 = 9, ind2 = 7, ind3 = 16;
	int arr1[ind1], arr2[ind2], arr3[ind3], i, j, c;

	printf("\n\nВвод случайных элементов 1 массива : \n\n");

	for (i = 0; i < ind1; i++)
	{
		arr1[i] = 1 + rand() % 10;
		printf("%d, ", arr1[i]);
	}
		

	printf("\n\n\nВвод случайных элементов 2 массива : \n\n");

	for (i = 0; i < ind2; i++)
	{
		arr2[i] = 1 + rand() % 10;
		printf("%d, ", arr2[i]);
	}

	printf("\n\n\nОбъединение 1 и 2 массива в 3 массив : \n\n");

	for (i = 0; i < ind3; i++)
	{
		if (i < ind1) arr3[i] = arr1[i];
		
		if (i >= ind1) arr3[i] = arr2[i-ind1];
		
		printf("%d, ", arr3[i]);
	}

	printf("\n\n\nCортировка 3 массива по возрастанию элементов : \n\n");

										// МЕТОД ПУЗЫРЬКА //
	for (i = 0; i < ind3 - 1; i++)		// достаточно поставить ind3-1 элементов
	for (j = ind3 - 2; j >= i; j--)		// идем с конца массива в начало
		if (arr3[j] > arr3[j + 1])		// если элементы стоят правильно, ...
		{
			c = arr3[j];				// переменная буфер
			arr3[j] = arr3[j + 1];		// перестановка arr3[j] и arr3[j + 1]
			arr3[j + 1] = c;
		}

	for (i = 0; i < ind3; i++) printf("%d, ", arr3[i]);

	printf("\n\n\n");
}



void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 9;
	int arr[ind], i, max = 0, maxi=0;

	printf("\n\nВвод случайных элементов R[9] массива : \n\n");

	for (i = 0; i < ind; i++)
	{
		arr[i] = -3 + rand() % 15; 
		printf("%d,  ", arr[i]);
	}

	printf("\n\nОпределяем индекс наибольшего из нечетных по значению положительных элементов: \n\n");

	for (i = 0; i < ind; i++)
	{
		if (arr[i] % 2 != 0 && arr[i] > 0 && arr[i] > max)
		{
			max = arr[i];
			maxi = i;
		}
	}
		printf("R[%d] = %d \n\n", maxi, arr[maxi]);
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 9;
	int arr[ind], i, sum=0;

	printf("\n\nВвод случайных двузначных элементов массива : \n\n");

	for (i = 0; i < ind; i++)
	{
		arr[i] = 10 + rand() % 35;
				
		printf("%d \t", arr[i]);
	}

	printf("\n\nВывод суммы чисел двузначных элементов массива : \n\n");

	for (i = 0; i < ind; i++)
	{
		sum = (arr[i] / 10) + (arr[i] % 10);
		
		arr[i] = sum;

		printf("%d \t", arr[i]);
	}

	printf("\n\n\n");
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 10;
	int arr[ind], i, sum1=0, sum2=0;

	printf("\n\nВвод случайных двузначных элементов массива : \n\n");

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 9;

		printf("%d ", arr[i]);
	}

	printf("\n\nПроизведение суммы чисел с четными индексами \nи суммы чисел с нечетными индексами \n\n");

	for (i = 0; i < ind; i++)
	{
		if (i % 2 != 0) sum1 += arr[i];
		else sum2 += arr[i];
	}

	printf("%d", sum1 * sum2);

	printf("\n\n\n");
}



void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 14;
	float arr[ind], c=0;
	int i=0;

	printf("\n\nВвод массива, состоящего из %d элементов действительного типа: \n\n", ind);

	for (i; i < ind; i++)
	{
		arr[i] = float (-5 + rand() % 10)/ (3 + rand() % 5);

		printf("A[%2d] = %5.2f \n", i, arr[i]);
	}

	printf("\n\nМеняем местами первую половину со второй.  \n\n");

	for (i = 0; i < ind; i++)
	{
		if (i < ind / 2)
		{
			c = arr[i];
			arr[i] = arr[ind - 1 - i];
			arr[ind - 1 - i] = c;
		}

		printf("A[%2d] = %5.2f \n", i, arr[i]);
	}

	printf("\nКол-во перестановок : %d\n\n", ind/2);
}



void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 10;
	int arr[ind], i = 0, k = 0, l = 0, c = 0;

	printf("\n\nВвод массива, состоящего из %d элементов : \n\n", ind);

	for (i; i < ind; i++)
	{
		arr[i] =3 + rand() % 5;

		printf("A[%2d] = %d \n", i, arr[i]);
	}

	for (i = 0; i < ind - 2; i++)
	{
		k = i + 1;
		l = i + 2;
		if (arr[k] > arr[i] && arr[k] > arr[l]) c++;
	}
	

	printf("\n\nКоличество локальных максимумов в заданном числовом массиве : %d \n\n", c);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}




int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (10) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}