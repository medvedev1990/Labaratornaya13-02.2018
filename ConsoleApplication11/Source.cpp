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
			/*��������, ���������, ������� ��������� ������� ����� �� 6 �������. ������������ ������ ������� ����� �� ������ �����.*/
			int a[6];
			int i;
			int summ = 0;
			int m;
			for (i = 0; i < 6; i++)
			{
				a[i] = 5 + rand() % 95;
				summ += a[i];
				cout << "������� �� " << i << " ����� " << a[i] << endl;
			}
			cout << "-------------------------\n";
			cout << "����� ������� �� 6 ������� " << summ << endl;
		}
		break;
		case 2:
		{
			/*�������� ���������, ������� ������� ���������� ������ � �������� �������*/
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
			/*������������ ������ ����� ������ �������������, ������ ������� ���������� � ������, ���������� ��������� �������� ������������� (�������� � ����� ���� ������).*/
			int a[5];
			int i;
			int perimetr = 0;
			for (i = 0; i < 5; i++)
			{
				a[i] = 5 + rand() % 20;
				perimetr += a[i];
				cout << "�������" << i << " = " << a[i] << endl;
			}
			cout << endl;
			cout << "------------------------\n";
			cout << "�������� ������������� = " << perimetr << endl;
		}
		break;
		case 4:
		{
			/*������������ ������ ������� ����� �� ��� (12 �������). ���������� ���������� �����, � ������� ������� ���� ����������� � �����, � ������� ������� ���� ����������.*/
			int a[12];
			int i;
			int min = 0;
			int mesyacmin = 0;
			int mesyacmax = 0;
			int max = 0;
			for (i = 0; i < 12; i++)
			{
				a[i] = 1000 + rand() % 10000;
				cout << "������� �� " << i << "����� = " << a[i] << endl;
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
			cout << "����������� ������� ���� � " << mesyacmin + 1 << " ������ �  = " << min << " ������������ ������� ���� � " << mesyacmax + 1 << " ������ � = " << max << endl;
		}
		break;
		case 5:
		{
			/*� ���������� �������, ����������� ���������� �������, ���������� ����������� � ������������ ��������*/
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
			cout << "����������� ������� ����� " << min << " ������������ ������� ����� " << max << endl;
		}
		break;
		case 6:
		{
			/*������������ ������ ������� ����� �� ��� (12 �������). �����  ������������ ������ �������� (��������, 3 � 6 � ����� ����� 3-� � 6-� �������).
			���������� ���������� �����, � ������� ������� ���� ����������� � �����, � ������� ������� ���� ���������� � ������ ���������� ���������*/
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
			cout << "������� ������ ����� ��������� " << endl;
			cin >> g1;
			cout << "������� ������ ����� ��������� " << endl;
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
			cout << "����������� ������� ���� � " << mesyacmin + 1 << " ������ �  = " << min << " ������������ ������� ���� � " << mesyacmax + 1 << " ������ � = " << max << endl;
		}
		break;
		case 7:
		{
			/*7.	**� ���������� �������, ��������� �� N ������������ ����� ���������:
				++	�	����� ������������� ���������.
					�	������������ ���������, ����������� ����� min � max ����������.
					++�	������������ ��������� � ������� ��������.
					++�	�����  ���������, ����������� ����� ������ � ��������� �������������� ����������.
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
			cout << "����� ������������� ��������� = " << summ << endl;
			cout << "������������ ��������� � ������� �������� = " << proiz << endl;
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
			cout << "����a  ���������, ����������� ����� ������ � ��������� �������������� ���������� = " << summ << endl;
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
			cout << "������������ ���������, ����������� ����� min � max ���������� = " << proiz << endl;
		}
		break;
		case 9:
		{
			/*9.	*�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� ��������.*/
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
			/*�������� ��������� �����������. ������� ��� ���������� �������. ���� ������ ������ ������ ICQ, ������ � ���������� ������. ����������� ���� ��� ������������:
a)	������������� �� ������� ICQ
b)	������������� �� ������� ��������
c)	������� ������ �������������
d)	�����
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
				cout << "\t\t\t\t\t1 ������������� �� ������� ICQ" << endl;
				cout << "\t\t\t\t\t2 ������������� �� ������� ��������" << endl;
				cout << "\t\t\t\t\t3 �����" << endl;
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
			/*13.	**�������� ��������� ��������������. ������������ ������ 10 ������ ��������. ����������� ���� ��� ������������
a)	����� ������ (����� ����������� �������)
b)	��������� �������� (������������ ������ ����� �������� ������� � ����� ������)
c)	������� �� ��������� (��������� �������, ���� ������� ��� �� ���� 10.7)
*/
			cout << "\t\t\t\t\t\t\t ��������� ������������" << endl;
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
				cout << "\t\t\t\t1 ����� ������" << endl;
				cout << "\t\t\t\t2 ��������� �������� (������������ ������ ����� �������� ������� � ����� ������)" << endl;
				cout << "\t\t\t\t3 ������� �� ���������" << endl;
				cout << "\t\t\t\t4 �����" << endl;
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
					cout << "������� ���������� ����� ������: ";
					cin >> index;
					cout << endl;
					cout << "������� ����� ������: ";
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
						cout << "��������� ����� :)" << endl;
					else
					{
						cout << "��������� �� ����� :(" << endl;
						cout << "��� ���������� = " << stipendiya / 10 << endl;
					}
				}
			} while (menu != 4);
		}
		break;
		case 14:
		{
			/*�������� ���������, ���������� �������� 2-� �������� �������� 5 ��������� ������ � ���� ������ �������� 10 ���������  ��������� �������: ������� ���������� ��������������� ��� ��������, ������� 0, ����� ��������������� ��� ��������, ������ 0, � ����� ��������������� ��� ��������, ������� 0.*/
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
			/*15.	*�������� ���������, ������� ��������� ���������� ������ �� 10 ��������� ������������� ������� � ��������� �� 1 �� 10 � ����� ������� ����� �������.
				�)**���������� ������ ����� ������� ������ ������������.
			*/
			double a[10];
			double c, d;
			int i;
			int f;
			cout << "������� ����������� ������ ����� �������" << endl;
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
			/*16.	*�������� ���������, ���������� ��������������� �������� ������ ������� �������� 10 ��������� � 2 ������� �������� 5 ��������� ������.*/
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
			/*17.	*�������� ���������, ���������� ��������������� �������� 2-� �������� �������� 5 ��������� ������ � ���� ������ �������� 10 ���������.*/
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
