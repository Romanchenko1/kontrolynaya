#include<stdio.h>
#include<iostream>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int a;
	printf("����� �� ������ ������� ����������������? \n ��� �����:(������� 1)\n ����������:(������� 2) \n ������������(������� 3) \n ���������(������� 3) \n ������������(������� 3)\n � �� ����, �������� �� ����(������� 6)\n");
	scanf_s("%d", &a);
	if (1)
	{
		printf("������� �� Scranch, ����� Python \n");
	} 
	else if (6)
	{
		printf("Python \n");
	}
	else if (2)
	{
		printf("����� ������(������� 1) \n � ���� ���� ���� ��� ��������(������� 2) \n");
		if (1)
		{
			printf("����� ���������/�����? \n � ���� �������� � ������� it ��������(������� 1) \n � ������ ���� ����������(������� 2) \n ���(������� 3) \n ���������� ����(������� 4) \n ���������(������� 5) \n 3D ����(������� 6) \n");

			if (1)
			{
				printf("Google Python \n");
			}
			else if (2)
			{
				printf("Java \n");
			}
			else if (3) //���
			{
				printf("������(������� 1) \n ��������(������� 2) \n");
				if (1)
				{
					printf("���� �������� ��: ����������(������� 1) \n �������(������� 2) \n");
					if (1) //����������
					{
						printf("��� ������� � Microsoft \n ����� ���(������� 1) \n �������(������� 2) \n ����(������� 3) \n");
						if (1) { printf("C# \n"); }
						if (2) { printf("Java \n"); }
						if (3) { printf("Java \n"); }
					}
					else if (2)
					{
						printf("JavaSCRIPT \n");
					}


				}
			}
			else if (4) {
				printf("��� ������� � Microsoft \n ����� ���(������� 1) \n �������(������� 2) \n ����(������� 3) \n");
				if (1) { printf("C# \n"); }
				if (2) { printf("Java \n"); }
				if (3) { printf("Java \n"); }
			}
			else if (5)
			{
				printf("����� OS? \n IOS(������� 1) \n Android(������� 2) \n");
				if (1) { printf("C \n"); }
				if (2) { printf("Java \n"); }
			}
			else if (6)
			{
				printf("����� ���������/�����? \n ���������� ����(������� 1) \n ���(������� 2) \n ���������(������� 3) \n");
				if (1)
				{
					printf("��� ������� � Microsoft \n ����� ���(������� 1) \n �������(������� 2) \n ����(������� 3) \n");
					if (1) { printf("C# \n"); }
					if (2) { printf("Java \n"); }
					if (3) { printf("Java \n"); }

				}
				else if (2)
				{
					printf("���� ������ ����� �������� � �������� ������� ��� Twitter? \n ��(������� 1) \n ���(������� 2) \n");
					if (1)
					{
						printf("JAVASCRIPT");
					}
					else if (2) //���
					{
						printf("������ ����������� ��� �� �����, �� �� ����������? \n ��(������� 1) \n ���(������� 2) \n �� ����(������� 3) \n");
						if (1)
						{
							printf("JAVASCRIPT");
						}
						else if (2)
						{
							printf("����� � ��� ������� �������? \n Lego(������� 1) \n ���������(������� 2) \n ���������� �� ������� �����(������� 3) \n");
							if (1) { printf("PYTHON \n"); }
							else if (2) { printf("Ruby \n"); }
							else if (3) { printf("PHP \n"); }
						}
						else if (3) {
							printf("����� � ��� ������� �������? \n Lego(������� 1) \n ���������(������� 2) \n ���������� �� ������� �����(������� 3) \n");
							if (1) { printf("PYTHON \n"); }
							else if (2) { printf("Ruby \n"); }
							else if (3) { printf("PHP \n"); }
						}
					}
				}
				else if (3)
				{
					printf("����� OS? \n IOS(������� 1) \n Android(������� 2) \n");
					if (1) { printf("C \n"); }
					else if (2) { printf("Java \n"); }
				}
			}
			else if (2)
			{
				printf("����� ������/�����? \n ���������(������� 1) \n 3D ����(������� 2) \n ���������� ����(������� 3) \n ���(������� 4) \n "); //��������� 2
				if (1)
				{
					printf("����� OS? \n IOS(������� 1) \n Android(������� 2) \n");
					if (1) { printf("C \n"); }
					if (2) { printf("Java \n"); }

				}
				else if (2)
				{
					printf("C++ \n");
				}
				else if (3)
				{
					printf("��� ������� � Microsoft \n ����� ���(������� 1) \n �������(������� 2) \n ����(������� 3) \n");
					if (1) { printf("C# \n"); }
					if (2) { printf("Java \n"); }
					if (3) { printf("Java \n"); }
				}
				else if (4)
				{
					printf("������(������� 1) \n ��������(������� 2) \n");
					if (1)
					{
						printf("���� �������� ��: ����������(������� 1) \n �������(������� 2) \n");
						if (1) //����������
						{
							printf("��� ������� � Microsoft \n ����� ���(������� 1) \n �������(������� 2) \n ����(������� 3) \n");
							if (1) { printf("C# \n"); }
							if (2) { printf("Java \n"); }
							if (3) { printf("Java \n"); }
						}
						else if (2)
						{
							printf("JavaSCRIPT \n");
						}
					}
				}


			}

		}


	}
	else if (3) //������������
	{
	printf("��� ���� ���� �� �������? \n ��� ������ ���� ������ ��� �������� �������(������� 1) \n ��(������� 2) \n");
	if (1)
	{
		printf("������� ��������(������� 1) \n ������ ��������(������� 2) \n ����������� ��������(������� 3) \n ����� ������� ����(�� ����� ����� �����)(������� 4) \n");
		if (1) { printf("PUTHON \n"); }
		else if (2) { printf("PYTHON \n"); }
		else if (3)
		{
			printf("����� ������� �������? \n �������(������� 1) \n ������(������� 2) \n");
			if (1) { printf("Java \n"); }
			else if (2) { printf("C \n"); }
		}
		else if (4)
		{
			printf("C++ \n");

		}
	}
	else if (2)
	{

		printf("����� ���������/�����? \n ���������� ����(������� 1) \n ���(������� 2) \n ���������(������� 3) \n");
		if (1)
		{
			printf("��� ������� � Microsoft \n ����� ���(������� 1) \n �������(������� 2) \n ����(������� 3) \n");
			if (1) { printf("C# \n"); }
			if (2) { printf("Java \n"); }
			if (3) { printf("Java \n"); }

		}
		else if (2)
		{
			printf("���� ������ ����� �������� � �������� ������� ��� Twitter? \n ��(������� 1) \n ���(������� 2) \n");
			if (1)
			{
				printf("JAVASCRIPT");
			}
			else if (2) //���
			{
				printf("������ ����������� ��� �� �����, �� �� ����������? \n ��(������� 1) \n ���(������� 2) \n �� ����(������� 3) \n");
				if (1)
				{
					printf("JAVASCRIPT");
				}
				else if (2)
				{
					printf("����� � ��� ������� �������? \n Lego(������� 1) \n ���������(������� 2) \n ���������� �� ������� �����(������� 3) \n");
					if (1) { printf("PYTHON \n"); }
					else if (2) { printf("Ruby \n"); }
					else if (3) { printf("PHP \n"); }
				}
				else if (3) {
					printf("����� � ��� ������� �������? \n Lego(������� 1) \n ���������(������� 2) \n ���������� �� ������� �����(������� 3) \n");
					if (1) { printf("PYTHON \n"); }
					else if (2) { printf("Ruby \n"); }
					else if (3) { printf("PHP \n"); }
				}
			}
		}
		else if (3)
		{
			printf("����� OS? \n IOS(������� 1) \n Android(������� 2) \n");
			if (1) { printf("C \n"); }
			else if (2) { printf("Java \n"); }
		}


	}



	}


	system("pause");
}