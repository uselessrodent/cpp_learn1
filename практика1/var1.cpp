#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int wigth = 80;

	string descr = "по данным Gantner Group за 1999г.";

	string brand1;
	string brand2;
	string brand3;
	int pr_num1 = 1;
	int pr_num2 = 1;
	int pr_num3 = 1;
	int sales1 = 10000;
	int sales2 = 10000;
	int sales3 = 10000;
	float market_s1 = 10;
	float market_s2 = 10;
	float market_s3 = 10;

	char tmpC1[64];
	printf("Введите фирму 1      количество продуктов 1      годовой объем продаж 1      часть рынка 1 \n");
	scanf_s("%s", tmpC1, &pr_num1, &sales1, &market_s1, 64);
	brand1 = tmpC1;

	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	printf("|Фирмы - производители СКБД                                                         | \n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	//       15             25                            25                   15
	printf("|Фирма         |Количество продуктов    |Годовой объем продаж    |Часть рынка   |");
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand1.c_str());
	for (int i = 0; i < 15 - brand1.size(); i++)
		printf(" ");
	printf("|%d", pr_num1);
	for (int i = 0; i < 25; i++)
		printf(" ");
	printf("|%d", sales1);
	for (int i = 0; i < 25; i++)
		printf(" ");
	printf("|%.2f", market_s1);
	for (int i = 0; i < 15; i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand2.c_str());
	for (int i = 0; i < 15 - brand1.size(); i++)
		printf(" ");
	printf("|%d", pr_num2);
	for (int i = 0; i < 25; i++)
		printf(" ");
	printf("|%d", sales2);
	for (int i = 0; i < 25; i++)
		printf(" ");
	printf("|%.2f", market_s2);
	for (int i = 0; i < 15; i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand3.c_str());
	for (int i = 0; i < 15 - brand1.size(); i++)
		printf(" ");
	printf("|%d", pr_num3);
	for (int i = 0; i < 25; i++)
		printf(" ");
	printf("|%d", sales3);
	for (int i = 0; i < 25; i++)
		printf(" ");
	printf("|%.2f", market_s3);
	for (int i = 0; i < 15; i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|Примечание: %s", descr.c_str());
	for (int i = 0; i < wigth - 14 - descr.size(); i++)
		printf(" ");
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
}