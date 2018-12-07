#include<stdio.h>
#include<iostream>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int a;
	printf("Зачем вы хотите изучить программирование? \n Для детей:(нажмите 1)\n Заработать:(нажмите 2) \n Поразвлечься(нажмите 3) \n Интересно(нажмите 3) \n Саморазвитие(нажмите 3)\n Я не знаю, выберети за меня(нажмите 6)\n");
	scanf_s("%d", &a);
	if (1)
	{
		printf("Начните со Scranch, затем Python \n");
	} 
	else if (6)
	{
		printf("Python \n");
	}
	else if (2)
	{
		printf("Найти работу(нажмите 1) \n У меня есть идея для стартапа(нажмите 2) \n");
		if (1)
		{
			printf("Какая платформа/сфера? \n Я хочу работать в крупной it компании(нажмите 1) \n Я просто хочу заработать(нажмите 2) \n Веб(нажмите 3) \n Корпорация Софт(нажмите 4) \n Мобильная(нажмите 5) \n 3D игры(нажмите 6) \n");

			if (1)
			{
				printf("Google Python \n");
			}
			else if (2)
			{
				printf("Java \n");
			}
			else if (3) //Веб
			{
				printf("Бэкенд(нажмите 1) \n Фронтенд(нажмите 2) \n");
				if (1)
				{
					printf("Хочу работать на: Корпорацию(нажмите 1) \n Стартап(нажмите 2) \n");
					if (1) //корпорация
					{
						printf("Что скажите о Microsoft \n Люблю его(нажмите 1) \n Неплохо(нажмите 2) \n Фууу(нажмите 3) \n");
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
				printf("Что скажите о Microsoft \n Люблю его(нажмите 1) \n Неплохо(нажмите 2) \n Фууу(нажмите 3) \n");
				if (1) { printf("C# \n"); }
				if (2) { printf("Java \n"); }
				if (3) { printf("Java \n"); }
			}
			else if (5)
			{
				printf("Какая OS? \n IOS(нажмите 1) \n Android(нажмите 2) \n");
				if (1) { printf("C \n"); }
				if (2) { printf("Java \n"); }
			}
			else if (6)
			{
				printf("Какая платформа/сфера? \n Корпорация Софт(нажмите 1) \n Веб(нажмите 2) \n Мобильная(нажмите 3) \n");
				if (1)
				{
					printf("Что скажите о Microsoft \n Люблю его(нажмите 1) \n Неплохо(нажмите 2) \n Фууу(нажмите 3) \n");
					if (1) { printf("C# \n"); }
					if (2) { printf("Java \n"); }
					if (3) { printf("Java \n"); }

				}
				else if (2)
				{
					printf("Вашь сервис будет работать в реальном времени как Twitter? \n Да(нажмите 1) \n Нет(нажмите 2) \n");
					if (1)
					{
						printf("JAVASCRIPT");
					}
					else if (2) //нет
					{
						printf("Хотите попробовать что то новое, но не трудоемкое? \n Да(нажмите 1) \n Нет(нажмите 2) \n Не знаю(нажмите 3) \n");
						if (1)
						{
							printf("JAVASCRIPT");
						}
						else if (2)
						{
							printf("Какая у вас любимая игрушка? \n Lego(нажмите 1) \n Пластелин(нажмите 2) \n Старенький но любимый мишка(нажмите 3) \n");
							if (1) { printf("PYTHON \n"); }
							else if (2) { printf("Ruby \n"); }
							else if (3) { printf("PHP \n"); }
						}
						else if (3) {
							printf("Какая у вас любимая игрушка? \n Lego(нажмите 1) \n Пластелин(нажмите 2) \n Старенький но любимый мишка(нажмите 3) \n");
							if (1) { printf("PYTHON \n"); }
							else if (2) { printf("Ruby \n"); }
							else if (3) { printf("PHP \n"); }
						}
					}
				}
				else if (3)
				{
					printf("Какая OS? \n IOS(нажмите 1) \n Android(нажмите 2) \n");
					if (1) { printf("C \n"); }
					else if (2) { printf("Java \n"); }
				}
			}
			else if (2)
			{
				printf("Какая работа/сфера? \n Мобильная(нажмите 1) \n 3D игры(нажмите 2) \n Корпорация софт(нажмите 3) \n ВЕБ(нажмите 4) \n "); //ветвление 2
				if (1)
				{
					printf("Какая OS? \n IOS(нажмите 1) \n Android(нажмите 2) \n");
					if (1) { printf("C \n"); }
					if (2) { printf("Java \n"); }

				}
				else if (2)
				{
					printf("C++ \n");
				}
				else if (3)
				{
					printf("Что скажите о Microsoft \n Люблю его(нажмите 1) \n Неплохо(нажмите 2) \n Фууу(нажмите 3) \n");
					if (1) { printf("C# \n"); }
					if (2) { printf("Java \n"); }
					if (3) { printf("Java \n"); }
				}
				else if (4)
				{
					printf("Бэкенд(нажмите 1) \n Фронтенд(нажмите 2) \n");
					if (1)
					{
						printf("Хочу работать на: Корпорацию(нажмите 1) \n Стартап(нажмите 2) \n");
						if (1) //корпорация
						{
							printf("Что скажите о Microsoft \n Люблю его(нажмите 1) \n Неплохо(нажмите 2) \n Фууу(нажмите 3) \n");
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
	else if (3) //Поразвлечься
	{
	printf("Уже есть идея на миллион? \n Нет просто хочу начать мне нравится учиться(нажмите 1) \n Да(нажмите 2) \n");
	if (1)
	{
		printf("Простым спопобом(нажмите 1) \n Лучшим способом(нажмите 2) \n Трудненьким способом(нажмите 3) \n Очень сложный путь(но потом будет легче)(нажмите 4) \n");
		if (1) { printf("PUTHON \n"); }
		else if (2) { printf("PYTHON \n"); }
		else if (3)
		{
			printf("Какая коробка передач? \n Автомат(нажмите 1) \n Ручная(нажмите 2) \n");
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

		printf("Какая платформа/сфера? \n Корпорация Софт(нажмите 1) \n Веб(нажмите 2) \n Мобильная(нажмите 3) \n");
		if (1)
		{
			printf("Что скажите о Microsoft \n Люблю его(нажмите 1) \n Неплохо(нажмите 2) \n Фууу(нажмите 3) \n");
			if (1) { printf("C# \n"); }
			if (2) { printf("Java \n"); }
			if (3) { printf("Java \n"); }

		}
		else if (2)
		{
			printf("Вашь сервис будет работать в реальном времени как Twitter? \n Да(нажмите 1) \n Нет(нажмите 2) \n");
			if (1)
			{
				printf("JAVASCRIPT");
			}
			else if (2) //нет
			{
				printf("Хотите попробовать что то новое, но не трудоемкое? \n Да(нажмите 1) \n Нет(нажмите 2) \n Не знаю(нажмите 3) \n");
				if (1)
				{
					printf("JAVASCRIPT");
				}
				else if (2)
				{
					printf("Какая у вас любимая игрушка? \n Lego(нажмите 1) \n Пластелин(нажмите 2) \n Старенький но любимый мишка(нажмите 3) \n");
					if (1) { printf("PYTHON \n"); }
					else if (2) { printf("Ruby \n"); }
					else if (3) { printf("PHP \n"); }
				}
				else if (3) {
					printf("Какая у вас любимая игрушка? \n Lego(нажмите 1) \n Пластелин(нажмите 2) \n Старенький но любимый мишка(нажмите 3) \n");
					if (1) { printf("PYTHON \n"); }
					else if (2) { printf("Ruby \n"); }
					else if (3) { printf("PHP \n"); }
				}
			}
		}
		else if (3)
		{
			printf("Какая OS? \n IOS(нажмите 1) \n Android(нажмите 2) \n");
			if (1) { printf("C \n"); }
			else if (2) { printf("Java \n"); }
		}


	}



	}


	system("pause");
}