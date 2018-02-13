#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	cout.precision(10);
	int n, exit;
	do
	{
		cout << "number exemple ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
		{
			/*Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев. Пользователь вводит прибыль фирмы за каждый месяц.*/
			int a[6];
			int i;
			int summ = 0;
			int m;
			for (i = 0; i < 6; i++)
			{
				a[i] = 5 + rand() % 95;
				summ += a[i];
				cout << "прибыль за " << i << " месяц " << a[i] << endl;
			}
			cout << "-------------------------\n";
			cout << "итого прибыль за 6 месяцев " << summ << endl;
		}
		break;
		case 2:
		{
			/*Написать программу, которая выводит одномерный массив в обратном порядке*/
			int a[6];
			int i;
			for (i = 0; i < 6; i++)
			{
				a[i] = 5 + rand() % 95;
				cout << i << " - " << a[i] << "\t";
			}
			cout << endl;
			cout << "------------------------\n";
			for (i = 5; i >= 0; i--)
			{
				cout << i << " - " << a[i] << "\t";
			}
			cout << endl;
		}
		break;
		case 3:
		{
			/*Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо вычислить периметр пятиугольника (периметр – сумма всех сторон).*/
			int a[5];
			int i;
			int perimetr = 0;
			for (i = 0; i < 5; i++)
			{
				a[i] = 5 + rand() % 20;
				perimetr += a[i];
				cout << "сторона" << i << " = " << a[i] << endl;
			}
			cout << endl;
			cout << "------------------------\n";
			cout << "периметр пятиугольника = " << perimetr << endl;
		}
		break;
		case 4:
		{
			/*Пользователь вводит прибыль фирмы за год (12 месяцев). Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна.*/
			int a[12];
			int i;
			int min = 0;
			int mesyacmin = 0;
			int mesyacmax = 0;
			int max = 0;
			for (i = 0; i < 12; i++)
			{
				a[i] = 1000 + rand() % 10000;
				cout << "прибыль за " << i << "месяц = " << a[i] << endl;
			}
			cout << "----------------------------\n";
			min = a[1];
			max = a[1];
			for (i = 0; i < 12; i++)
			{
				if (min > a[i])
				{
					min = a[i];
					mesyacmin = i;
				}
				if (max < a[i])
				{
					max = a[i];
					mesyacmax = i;
				}
			}
			cout << "минимальная прибыль была в " << mesyacmin + 1 << " месяце и  = " << min << " максимальная прибыль была в " << mesyacmax + 1 << " месяце и = " << max << endl;
		}
		break;
		case 5:
		{
			/*В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы*/
			int a[12];
			int i;
			int min = 0;
			int max = 0;
			for (i = 0; i < 12; i++)
			{
				a[i] = 1000 + rand() % 10000;
				cout << i << " - " << a[i] << endl;
			}
			cout << endl;
			cout << "----------------------------\n";
			min = a[1];
			max = a[1];
			for (i = 0; i < 12; i++)
			{
				if (min > a[i])
					min = a[i];
				if (max < a[i])
					max = a[i];
			}
			cout << "минимальный элемент равен " << min << " максимальный элемент равен " << max << endl;
		}
		break;
		case 6:
		{
			/*Пользователь вводит прибыль фирмы за год (12 месяцев). Затем  пользователь вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем).
			Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна с учетом выбранного диапазона*/
			int a[12];
			int i;
			int min = 0;
			int max = 0;
			int mesyacmin = 0;
			int mesyacmax = 0;
			int g1;
			int g2;
			for (i = 0; i < 12; i++)
			{
				a[i] = 10000 + rand() % 1000000;
				cout << i << " - " << a[i] << endl;
			}
			cout << endl;
			cout << "введите первую грань диапозона " << endl;
			cin >> g1;
			cout << "введите вторую грань диапозона " << endl;
			cin >> g2;
			cout << "----------------------------\n";
			min = a[1];
			max = a[1];
			for (i = g1; i < g2; i++)
			{
				if (min > a[i])
				{
					min = a[i];
					mesyacmin = i;
				}
				if (max < a[i])
				{
					max = a[i];
					mesyacmax = i;
				}
			}
			cout << "минимальная прибыль была в " << mesyacmin + 1 << " месяце и  = " << min << " максимальная прибыль была в " << mesyacmax + 1 << " месяце и = " << max << endl;
		}
		break;
		case 7:
		{
			/*7.	**В одномерном массиве, состоящем из N вещественных чисел вычислить:
				++	•	Сумму отрицательных элементов.
					•	Произведение элементов, находящихся между min и max элементами.
					++•	Произведение элементов с четными номерами.
					++•	Сумму  элементов, находящихся между первым и последним отрицательными элементами.
			*/
			int a[10];
			int i, j;
			int summ = 0;
			int otr1 = 0;
			int otr2 = 0;
			long long proiz = 1;
			for (i = 0; i < 10; i++)
			{
				a[i] = -20 + rand() % 95;
				cout << i << " - " << a[i] << endl;
				if (a[i] < 0)
				{
					summ += a[i];
				}
				if (i % 2 == 0)
				{
					proiz *= a[i];
				}
			}
			cout << endl;
			cout << "------------------------\n";
			cout << "сумма отрицательных элементов = " << summ << endl;
			cout << "произведение элементов с четными номерами = " << proiz << endl;
			for (i = 0; i < 10; i++)
			{
				if (a[i] < 0)
				{
					otr1 = i;
					break;
				}
			}
			for (j = 0; j < 10; j++)
			{
				if (a[j] < 0)
				{
					otr2 = j;
				}
			}
			summ = 0;
			for (i = otr1; i <= otr2; i++)
			{
				summ += a[i];
			}
			cout << "Суммa  элементов, находящихся между первым и последним отрицательными элементами = " << summ << endl;
			int min = a[0];
			int max = a[0];
			int index1 = 0;
			int index2 = 0;
			for (i = 0; i < 10; i++)
			{
				if (min > a[i])
				{
					min = a[i];
					index1 = i;
				}
				if (max < a[i])
				{
					max = a[i];
					index2 = i;
				}
			}
			proiz = 1;
			for (i = index1; i <= index2; i++)
			{
				proiz *= a[i];
			}
			cout << "Произведение элементов, находящихся между min и max элементами = " << proiz << endl;
		}
		break;
		case 9:
		{
			/*9.	*Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырька.*/
			int a[10];
			int i, j, m;
			for (i = 0; i < 10; i++)
			{
				a[i] = 1000 + rand() % 10000;
				cout << i << " - " << a[i] << endl;
			}
			cout << endl;
			cout << "----------------------------\n";
			for (i = 0; i < 10; i++)
			{
				for (j = 9; j > i; j--)
				{
					if (a[j] < a[j - 1])
					{
						m = a[j];
						a[j] = a[j - 1];
						a[j - 1] = m;
					}
				}
			}
			for (i = 0; i < 10; i++)
			{
				cout << i << " - " << a[i] << endl;
			}
			cout << endl;
		}
		break;
		case 12:
		{
			/*Написать программу «справочник». Создать два одномерных массива. Один массив хранит номера ICQ, второй – телефонные номера. Реализовать меню для пользователя:
a)	отсортировать по номерам ICQ
b)	отсортировать по номерам телефона
c)	вывести список пользователей
d)	выход
*/
			int ISQ[10];
			unsigned long long number[10];
			int i, j, m;
			int menu;
			for (i = 0; i < 10; i++)
			{
				ISQ[i] = 111111111 + rand() % 888888888;
			}
			for (i = 0; i < 10; i++)
			{
				number[i] = 7071111111 + rand() % 8888888;
				cout << number[i] << endl;
			}
			do
			{
				cout << "\t\t\t\t\t\t\t USSD Menu" << endl;
				cout << "\t\t\t\t\t1 отсортировать по номерам ICQ" << endl;
				cout << "\t\t\t\t\t2 отсортировать по номерам телефона" << endl;
				cout << "\t\t\t\t\t3 выход" << endl;
				cin >> menu;
				if (menu == 1)
				{
					for (i = 0; i < 10; i++)
					{
						for (j = 9; j > i; j--)
						{
							if (ISQ[j] < ISQ[j - 1])
							{
								m = ISQ[j];
								ISQ[j] = ISQ[j - 1];
								ISQ[j - 1] = m;
							}
						}
					}
					for (i = 0; i < 10; i++)
					{
						cout << ISQ[i] << endl;
					}
				}
				if (menu == 2)
				{
					for (i = 0; i < 10; i++)
					{
						for (j = 9; j > i; j--)
						{
							if (number[j] < number[j - 1])
							{
								m = number[j];
								number[j] = number[j - 1];
								number[j - 1] = m;
							}
						}
					}
					for (i = 0; i < 10; i++)
					{
						cout << number[i] << endl;
					}
				}
			} while (menu != 3);
		}
		break;
		case 13:
		{
			/*13.	**Написать программу «успеваемость». Пользователь вводит 10 оценок студента. Реализовать меню для пользователя
a)	вывод оценок (вывод содержимого массива)
b)	пересдача экзамена (пользователь вводит номер элемента массива и новую оценку)
c)	выходит ли стипендия (стипендия выходит, если средний бал не ниже 10.7)
*/
			cout << "\t\t\t\t\t\t\t ПРОГРАММА УСПЕВАЕМОСТЬ" << endl;
			int a[10];
			int i, ocenka;
			int menu;
			int index;
			double stipendiya = 0;
			for (i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 12;
			}
			do
			{
				cout << "\t\t\t\t1 вывод оценок" << endl;
				cout << "\t\t\t\t2 пересдача экзамена (пользователь вводит номер элемента массива и новую оценку)" << endl;
				cout << "\t\t\t\t3 выходит ли стипендия" << endl;
				cout << "\t\t\t\t4 Выход" << endl;
				cin >> menu;
				if (menu == 1)
				{
					for (i = 0; i < 10; i++)
					{
						cout << a[i] << "\t" << endl;
					}
				}
				else if (menu == 2)
				{
					cout << "введите порядковый номер оценки: ";
					cin >> index;
					cout << endl;
					cout << "введите новую оценку: ";
					cin >> ocenka;
					cout << endl;
					a[index] = ocenka;
				}
				else if (menu == 3)
				{
					for (i = 0; i < 10; i++)
					{
						stipendiya += a[i];
					}
					if (stipendiya / 10 >= 10.7)
						cout << "Стипендия будет :)" << endl;
					else
					{
						cout << "Стипендии не будет :(" << endl;
						cout << "ваш коэфициент = " << stipendiya / 10 << endl;
					}
				}
			} while (menu != 4);
		}
		break;
		case 14:
		{
			/*Написать программу, копирующую элементы 2-х массивов размером 5 элементов каждый в один массив размером 10 элементов  следующим образом: сначала копируются последовательно все элементы, большие 0, затем последовательно все элементы, равные 0, а затем последовательно все элементы, меньшие 0.*/
			int a[5];
			int b[5];
			int c[10];
			int i, j = 0;
			for (i = 0; i < 5; i++)
			{
				a[i] = -5 + rand() % 10;
				b[i] = -5 + rand() % 10;
				cout << a[i] << "       " << b[i] << endl;
			}
			cout << "--------------\n";
			for (i = 0; i < 5; i++)
			{
				if (a[i] >= 0)
				{
					c[j] = a[i];
					j++;
				}
				if (b[i] >= 0)
				{
					c[j] = b[i];
					j++;
				}
			}
			for (i = 0; i < 5; i++)
			{
				if (a[i] == 0)
				{
					c[j] = a[i];
					j++;
				}
				if (b[i] == 0)
				{
					c[j] = b[i];
					j++;
				}
			}
			for (i = 0; i < 5; i++)
			{
				if (a[i] < 0)
				{
					c[j] = a[i];
					j++;
				}
				if (b[i] < 0)
				{
					c[j] = b[i];
					j++;
				}
			}
			for (i = 0; i < 10; i++)
			{
				cout << c[i] << endl;
			}
		}
		break;
		case 15:
		{
			/*15.	*Написать программу, которая заполняет одномерный массив из 10 элементов вещественными числами в диапазоне от 1 до 10 с двумя знаками после запятой.
				а)**количество знаков после запятой вводит пользователь.
			*/
			double a[10];
			double c, d;
			int i;
			int f;
			cout << "введите колличество знаков после запятой" << endl;
			cin >> f;
			cout.precision(f);
			for (i = 0; i < 10; i++)
			{
				c = 0.0 + rand() % 10;
				d = 0.0 + rand() % 10;
				a[i] = c / d;
				cout << a[i] << endl;
			}
		}
		break;
		case 16:
		{
			/*16.	*Написать программу, копирующую последовательно элементы одного массива размером 10 элементов в 2 массива размером 5 элементов каждый.*/
			int a[10];
			int b[5];
			int c[5];
			int i;
			for (i = 0; i < 10; i++)
			{
				a[i] = 5 + rand() % 95;
				if (i < 5)
				{
					b[i] = a[i];

				}
				else if (i >= 5)
				{
					c[i - 5] = a[i];
				}
				cout << a[i] << endl;
			}
			cout << "b\tc" << endl;
			for (i = 0; i < 5; i++)
			{
				cout << b[i] << "\t" << c[i] << endl;
			}
		}
		break;
		case 17:
		{
			/*17.	*Написать программу, копирующую последовательно элементы 2-х массивов размером 5 элементов каждый в один массив размером 10 элементов.*/
			int a[10];
			int b[5];
			int c[5];
			int i;
			for (i = 0; i < 5; i++)
			{
				b[i] = 5 + rand() % 95;
				c[i] = 5 + rand() % 95;
			}
			cout << "b\tc" << endl;
			for (i = 0; i < 5; i++)
			{
				cout << b[i] << "\t" << c[i] << endl;
			}
			cout << "---------------------------------------------\n";
			cout << "a" << endl;
			for (i = 0; i < 10; i++)
			{
				if (i < 5)
				{
					a[i] = b[i];

				}
				else if (i >= 5)
				{
					a[i] = c[i - 5];
				}
				cout << a[i] << endl;
			}
		}
		break;
		default:cout << "no exemple" << endl;
			break;
		}
		cout << "continue? 1-Yes 2-no ";
		cin >> exit;
		cout << endl;

	} while (exit == 1);
}
