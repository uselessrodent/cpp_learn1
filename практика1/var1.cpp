#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
	system("chcp 1251");
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int wigth = 80;

	string descr = "�� ������ Gantner Group �� 1999�.";

	string brand1;
	string brand2;
	string brand3;
	int pr_num1 = 1;
	int pr_num2 = 1;
	int pr_num3 = 1;
	int sales1 = 10000;
	int sales2 = 10000;
	int sales3 = 10000;
	float market_s1 = 10.00;
	float market_s2 = 10.00;
	float market_s3 = 10.00;

	char tmpC1[64];
	printf("������� ����� 1      ���������� ��������� 1      ������� ����� ������ 1      ����� ����� 1 \n");
	scanf_s("%s %d %d %f", tmpC1, 64, &pr_num1, &sales1, &market_s1);
	brand1 = tmpC1;

	char tmpC2[64];
	printf("������� ����� 2      ���������� ��������� 2      ������� ����� ������ 2      ����� ����� 2 \n");
	scanf_s("%s %d %d %f", tmpC2, 64, &pr_num2, &sales2, &market_s2);
	brand2 = tmpC2;

	char tmpC3[64];
	printf("������� ����� 3      ���������� ��������� 3      ������� ����� ������ 3      ����� ����� 3 \n");
	scanf_s("%s %d %d %f", tmpC3, 64, &pr_num3, &sales3, &market_s3);
	brand3 = tmpC3;

	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	printf("|����� - ������������� ����                                                     |\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	//       15             25                            25                   15
	printf("|�����         |���������� ���������    |������� ����� ������    |����� �����   |");
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand1.c_str());
	for (int i = 0; i < 14 - brand1.length() ; i++)
		printf(" ");
	printf("|%d", pr_num1);
	for (int i = 0; i < 24 - to_string(pr_num1).length() ; i++)
		printf(" ");
	printf("|%d", sales1);
	for (int i = 0; i < 24 - to_string(sales1).length(); i++)
		printf(" ");
	printf("|%.2f", market_s1);
	for (int i = 0; i < 18 - to_string(market_s1).length(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand2.c_str());
	for (int i = 0; i < 14 - brand2.size(); i++)
		printf(" ");
	printf("|%d", pr_num2);
	for (int i = 0; i < 24 - to_string(pr_num2).length(); i++)
		printf(" ");
	printf("|%d", sales2);
	for (int i = 0; i < 24 - to_string(sales2).length(); i++)
		printf(" ");
	printf("|%.2f", market_s2);
	for (int i = 0; i < 18 - to_string(market_s2).length(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand3.c_str());
	for (int i = 0; i < 14 - brand3.size(); i++)
		printf(" ");
	printf("|%d", pr_num3);
	for (int i = 0; i < 24 - to_string(pr_num3).length(); i++)
		printf(" ");
	printf("|%d", sales3);
	for (int i = 0; i < 24 - to_string(sales3).length(); i++)
		printf(" ");
	printf("|%.2f", market_s3);
	for (int i = 0; i < 18 - to_string(market_s3).length(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|����������: %s", descr.c_str());
	for (int i = 0; i < wigth - 14 - descr.size(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
}
