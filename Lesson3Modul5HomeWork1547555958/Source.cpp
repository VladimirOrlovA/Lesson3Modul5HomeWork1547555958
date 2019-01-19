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

	printf("\n\n���� ��������� ��������� 1 ������� : \n\n");

	for (i = 0; i < ind1; i++)
	{
		arr1[i] = 1 + rand() % 10;
		printf("%d, ", arr1[i]);
	}
		

	printf("\n\n\n���� ��������� ��������� 2 ������� : \n\n");

	for (i = 0; i < ind2; i++)
	{
		arr2[i] = 1 + rand() % 10;
		printf("%d, ", arr2[i]);
	}

	printf("\n\n\n����������� 1 � 2 ������� � 3 ������ : \n\n");

	for (i = 0; i < ind3; i++)
	{
		if (i < ind1) arr3[i] = arr1[i];
		
		if (i >= ind1) arr3[i] = arr2[i-ind1];
		
		printf("%d, ", arr3[i]);
	}

	printf("\n\n\nC��������� 3 ������� �� ����������� ��������� : \n\n");

										// ����� �������� //
	for (i = 0; i < ind3 - 1; i++)		// ���������� ��������� ind3-1 ���������
	for (j = ind3 - 2; j >= i; j--)		// ���� � ����� ������� � ������
		if (arr3[j] > arr3[j + 1])		// ���� �������� ����� ���������, ...
		{
			c = arr3[j];				// ���������� �����
			arr3[j] = arr3[j + 1];		// ������������ arr3[j] � arr3[j + 1]
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

	printf("\n\n���� ��������� ��������� R[9] ������� : \n\n");

	for (i = 0; i < ind; i++)
	{
		arr[i] = -3 + rand() % 15; 
		printf("%d,  ", arr[i]);
	}

	printf("\n\n���������� ������ ����������� �� �������� �� �������� ������������� ���������: \n\n");

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

	printf("\n\n���� ��������� ���������� ��������� ������� : \n\n");

	for (i = 0; i < ind; i++)
	{
		arr[i] = 10 + rand() % 35;
				
		printf("%d \t", arr[i]);
	}

	printf("\n\n����� ����� ����� ���������� ��������� ������� : \n\n");

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

	printf("\n\n���� ��������� ���������� ��������� ������� : \n\n");

	for (i = 0; i < ind; i++)
	{
		arr[i] = 1 + rand() % 9;

		printf("%d ", arr[i]);
	}

	printf("\n\n������������ ����� ����� � ������� ��������� \n� ����� ����� � ��������� ��������� \n\n");

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

	printf("\n\n���� �������, ���������� �� %d ��������� ��������������� ����: \n\n", ind);

	for (i; i < ind; i++)
	{
		arr[i] = float (-5 + rand() % 10)/ (3 + rand() % 5);

		printf("A[%2d] = %5.2f \n", i, arr[i]);
	}

	printf("\n\n������ ������� ������ �������� �� ������.  \n\n");

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

	printf("\n���-�� ������������ : %d\n\n", ind/2);
}



void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 10;
	int arr[ind], i = 0, c = 0;

	printf("\n\n���� �������, ���������� �� %d ��������� : \n\n", ind);

	for (i; i < ind; i++)
	{
		arr[i] =3 + rand() % 5;

		printf("A[%2d] = %d \n", i, arr[i]);
	}

	for (i = 0; i < ind - 2; i++) if (arr[i+1] > arr[i] && arr[i+1] > arr[i+2]) c++;
	
	printf("\n\n���������� ��������� ���������� � �������� �������� ������� : %d \n\n", c);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 30;
	int arr[ind], i = 0, flag;

	printf("\n\n���� �������, ���������� �� %d ��������� : \n\n", ind);

	for (i; i < ind; i++)
	{
		arr[i] = 3 + rand() % 5;

		printf("A[%2d] = %d \n", i, arr[i]);
	}

		printf("\n\n����� �������� ������������������� �����, ������� ��������� ������� : \n\n");

		for (i = 0; i < ind; i++)
		{
			flag = 1;

			while (i < (ind - 1) && arr[i] > arr[i + 1])
			{
				if(flag) printf("%d ", i);

				printf("-> %d ", i+1);
				flag = 0;
				i++;
			} 
			printf("\n");
		}
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 10;
	int arr[ind], i, dif = 0;

	printf("\n\n���� ��������� ���������� ��������� ������� A[%d] : \n\n", ind);

	for (i = 0; i < ind; i++)
	{
		arr[i] = 10 + rand() % 35;

		printf("%d\t", arr[i]);
	}

	printf("\n\n����� ��������� ���� ��������� ��������� ������� : \n\n");

	for (i = 0; i < ind; i++)
	{
		dif = (arr[i] / 10) - (arr[i] % 10);

		if (dif < 0) dif *= -1;

		arr[i] = dif;

		printf("%d\t", arr[i]);
	}

	printf("\n\n\n");

}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 30;
	int arr[ind], i = 0, flag, sum = 0, sum1 = 0;

	printf("\n\n���� �������, ���������� �� %d ��������� : \n\n", ind);

	for (i; i < ind; i++)
	{
		arr[i] = 3 + rand() % 5;

		printf("A[%2d] = %d \n", i, arr[i]);
	}

	printf("\n\n����� �������� ������������������� �����, ������� ��������� ���������� : \n\n");

	for (i = 0; i < ind; i++)
	{
		flag = 1;
		
		while (i < (ind - 1) && arr[i] < arr[i + 1]); // ���������������� ������������������ ������ � ����, ��������� �������� �� ���� �������
		{
			sum++;
			
			if (flag) printf("%d ", i);		// ������� �� ����� 1 ������ �������� ������������������
			else sum1++;
			
			printf("-> %d ", i+1);
			flag = 0;					// ������������� ����, ����� ��������� ��������� ����� 2 �������, ���� ������������ 3 � �.�.
			i++;						// ����������� �� ���� ��� ������, ����� ��������� ������������ �� ������������������...
		}
		printf("\n");
	}
	printf("���������� �������� �������, �� ������� �������� ��������� ���������� \n(������ ��������� ����� ������ �����������) \n\n %d", sum-sum1);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 10;
	float A[ind], B[ind], maxA = -15, maxB = -15, buffer;	
	int i, maxAind, maxBind;

	for (i = 0; i < ind; i++)
	{
		A[i] = float(-15 + rand() % 45) / (5 + rand() % 15);
		B[i] = float(-15 + rand() % 45) / (5 + rand() % 15);
		printf("A[%d] = %5.2f \t B[%d] = %5.2f \n", i, A[i], i, B[i]);
	}

	printf("\n���������� ������������ �������� � ������ ������� � ������ �� �������:\n\n");

	for (i = 0; i < ind; i++)
	{
		if (A[i] > maxA)
		{
			maxA = A[i];
			maxAind = i;
		}
		
		if (B[i] > maxB)
		{
			maxB = B[i];
			maxBind = i;
		}	
	}

		printf("A[%d] = %5.2f \t B[%d] = %5.2f \n\n", maxAind, A[maxAind], maxBind, B[maxBind]);

		buffer = A[maxAind];
		A[maxAind] = B[maxBind];
		B[maxBind] = buffer;

	for (i = 0; i < ind; i++)	printf("A[%d] = %5.2f \t B[%d] = %5.2f \n", i, A[i], i, B[i]);
	
	printf("\n\n\n");

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