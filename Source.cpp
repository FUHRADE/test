#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

void dvizh(int player)
{
	char field_fishka[12][2] = {
				{' '}, //start
				{' ', ' '}, //r
				{' ', ' '}, //g
				{' '}, //pr1
				{' ', ' '}, //w
				{' ', ' '}, //b
				{' '}, //pr2
				{' ', ' '}, //y
				{' ', ' '}, //b
				{' '}, //pr3
				{' ', ' '}, //p
				{' ', ' '}  //b
	};

	int summ_cub_pl1;

	int summ_cub_pl2;

	int pl1_pos = 0;

	int pl2_pos = 0;

	srand(time(NULL));
	int cub1pl1;
	cub1pl1 = rand() % 6 + 1;
	int cub2pl1;
	cub2pl1 = rand() % 6 + 1;

	summ_cub_pl1 = cub1pl1 + cub2pl1;

	pl1_pos = (summ_cub_pl1 + pl1_pos) % 20;

	srand(time(NULL));
	int cub1pl2;
	cub1pl2 = rand() % 6 + 1;
	int cub2pl2;
	cub2pl2 = rand() % 6 + 1;

	summ_cub_pl2 = cub1pl2 + cub2pl2;

	pl2_pos = (summ_cub_pl2 + pl2_pos) % 20;

	switch (pl1_pos) {
	case 0:
		field_fishka[0][0] = 'A';
		break;
	case 1:
		field_fishka[1][0] = 'A';
		break;
	case 2:
		field_fishka[1][1] = 'A';
		break;
	case 3:
		field_fishka[2][0] = 'A';
		break;
	case 4:
		field_fishka[2][1] = 'A';
		break;
	case 5:
		field_fishka[3][0] = 'A';
		break;
	case 6:
		field_fishka[4][0] = 'A';
		break;
	case 7:
		field_fishka[4][1] = 'A';
		break;
	case 8:
		field_fishka[5][0] = 'A';
		break;
	case 9:
		field_fishka[5][1] = 'A';
		break;
	case 10:
		field_fishka[6][0] = 'A';
		break;
	case 11:
		field_fishka[7][0] = 'A';
		break;
	case 12:
		field_fishka[7][1] = 'A';
		break;
	case 13:
		field_fishka[8][0] = 'A';
		break;
	case 14:
		field_fishka[8][1] = 'A';
		break;
	case 15:
		field_fishka[9][0] = 'A';
		break;
	case 16:
		field_fishka[10][0] = 'A';
		break;
	case 17:
		field_fishka[10][1] = 'A';
		break;
	case 18:
		field_fishka[11][0] = 'A';
		break;
	case 19:
		field_fishka[11][1] = 'A';
		break;
	}

	switch (pl2_pos) {
	case 0:
		field_fishka[0][0] = 'B';
		break;
	case 1:
		field_fishka[1][0] = 'B';
		break;
	case 2:
		field_fishka[1][1] = 'B';
		break;
	case 3:
		field_fishka[2][0] = 'B';
		break;
	case 4:
		field_fishka[2][1] = 'B';
		break;
	case 5:
		field_fishka[3][0] = 'B';
		break;
	case 6:
		field_fishka[4][0] = 'B';
		break;
	case 7:
		field_fishka[4][1] = 'B';
		break;
	case 8:
		field_fishka[5][0] = 'B';
		break;
	case 9:
		field_fishka[5][1] = 'B';
		break;
	case 10:
		field_fishka[6][0] = 'B';
		break;
	case 11:
		field_fishka[7][0] = 'B';
		break;
	case 12:
		field_fishka[7][1] = 'B';
		break;
	case 13:
		field_fishka[8][0] = 'B';
		break;
	case 14:
		field_fishka[8][1] = 'B';
		break;
	case 15:
		field_fishka[9][0] = 'B';
		break;
	case 16:
		field_fishka[10][0] = 'B';
		break;
	case 17:
		field_fishka[10][1] = 'B';
		break;
	case 18:
		field_fishka[11][0] = 'B';
		break;
	case 19:
		field_fishka[11][1] = 'B';
		break;
	}






};





const int field_collor[12][2] = {
			{0, 20}, //start
			{1, 2}, //r
			{3, 4}, //g
			{5, 5}, //pr1
			{6, 7}, //w
			{8, 9}, //b
			{10, 10}, //pr2
			{11, 12}, //y
			{13, 14}, //b
			{15, 15}, //pr3
			{16, 17}, //p
			{18, 19}  //b
};

int main()
{
	setlocale(LC_ALL, "RUS");

	printf_s("�� ����� � ���������� ���� ��������� C++.\n");
	printf_s("�������: ���� �������� 20 ����� - 16 ����� �� ��������, 3 ���� ������, 1 ���� �����\n���� ������������� �� 2 �������.\n");

		int pos_1pl = 0;
		int pos_2pl = 0;

		//const int field_collor[12][2] = {
			//{0, 20}, //start
			//{1, 2}, //r
			//{3, 4}, //g
			//{5, 5}, //pr1
			//{6, 7}, //w
			//{8, 9}, //b
			//{10, 10}, //pr2
			//{11, 12}, //y
			//{13, 14}, //b
			//{15, 15}, //pr3
			//{16, 17}, //p
			//{18, 19}  //b
		//};

		char field_fishka[12][2] = {
			{' '}, //start
			{' ', ' '}, //r
			{' ', ' '}, //g
			{' '}, //pr1
			{' ', ' '}, //w
			{' ', ' '}, //b
			{' '}, //pr2
			{' ', ' '}, //y
			{' ', ' '}, //b
			{' '}, //pr3
			{' ', ' '}, //p
			{' ', ' '}  //b
		};

		int summ_cub_pl1;

		int summ_cub_pl2;

		int pl1_pos = 0;

		int pl2_pos = 0;

		srand(time(NULL));
		int cub1pl1;
		cub1pl1 = rand() % 6 + 1;
		int cub2pl1;
		cub2pl1 = rand() % 6 + 1;

		summ_cub_pl1 = cub1pl1 + cub2pl1;

		pl1_pos = (summ_cub_pl1 + pl1_pos) % 20;

		srand(time(NULL));
		int cub1pl2;
		cub1pl2 = rand() % 6 + 1;
		int cub2pl2;
		cub2pl2 = rand() % 6 + 1;

		summ_cub_pl2 = cub1pl2 + cub2pl2;

		pl2_pos = (summ_cub_pl2 + pl2_pos) % 20;

		switch (pl1_pos) {
		case 0:
			field_fishka[0][0] = 'A';
			break;
		case 1:
			field_fishka[1][0] = 'A';
			break;
		case 2:
			field_fishka[1][1] = 'A';
			break;
		case 3:
			field_fishka[2][0] = 'A';
			break;
		case 4:
			field_fishka[2][1] = 'A';
			break;
		case 5:
			field_fishka[3][0] = 'A';
			break;
		case 6:
			field_fishka[4][0] = 'A';
			break;
		case 7:
			field_fishka[4][1] = 'A';
			break;
		case 8:
			field_fishka[5][0] = 'A';
			break;
		case 9:
			field_fishka[5][1] = 'A';
			break;
		case 10:
			field_fishka[6][0] = 'A';
			break;
		case 11:
			field_fishka[7][0] = 'A';
			break;
		case 12:
			field_fishka[7][1] = 'A';
			break;
		case 13:
			field_fishka[8][0] = 'A';
			break;
		case 14:
			field_fishka[8][1] = 'A';
			break;
		case 15:
			field_fishka[9][0] = 'A';
			break;
		case 16:
			field_fishka[10][0] = 'A';
			break;
		case 17:
			field_fishka[10][1] = 'A';
			break;
		case 18:
			field_fishka[11][0] = 'A';
			break;
		case 19:
			field_fishka[11][1] = 'A';
			break;
		}

		switch (pl2_pos) {
		case 0:
			field_fishka[0][0] = 'B';
			break;
		case 1:
			field_fishka[1][0] = 'B';
			break;
		case 2:
			field_fishka[1][1] = 'B';
			break;
		case 3:
			field_fishka[2][0] = 'B';
			break;
		case 4:
			field_fishka[2][1] = 'B';
			break;
		case 5:
			field_fishka[3][0] = 'B';
			break;
		case 6:
			field_fishka[4][0] = 'B';
			break;
		case 7:
			field_fishka[4][1] = 'B';
			break;
		case 8:
			field_fishka[5][0] = 'B';
			break;
		case 9:
			field_fishka[5][1] = 'B';
			break;
		case 10:
			field_fishka[6][0] = 'B';
			break;
		case 11:
			field_fishka[7][0] = 'B';
			break;
		case 12:
			field_fishka[7][1] = 'B';
			break;
		case 13:
			field_fishka[8][0] = 'B';
			break;
		case 14:
			field_fishka[8][1] = 'B';
			break;
		case 15:
			field_fishka[9][0] = 'B';
			break;
		case 16:
			field_fishka[10][0] = 'B';
			break;
		case 17:
			field_fishka[10][1] = 'B';
			break;
		case 18:
			field_fishka[11][0] = 'B';
			break;
		case 19:
			field_fishka[11][1] = 'B';
			break;
		}

	int balance_pl1 = 0;
	int balance_pl2 = 0;

	printf_s("________________________________________________________\n|   %c    |   %c    |   %c    |   %c     |   %c    |   %c    |\n|        |        |        |         |        |        |\n|   %c    |    %c   |   %c    |    %c    |   %c    |   %c    |\n|________|________|________|_________|________|________|\n|   %c    |                                    |    %c   |\n|        |                                    |        |\n|   %c    |                                    |   %c    |\n|________|                                    |________|\n|   %c    |                                    |    %c   |\n|        |        ____________________        |        |\n|   %c    |        |        |         |        |   %c    |\n|________|        |   %c    |    %c    |        |________|\n|   %c    |        |        |         |        |    %c   |\n|        |        |        |         |        |        |\n|   %c    |        |________|_________|        |   %c    |\n|________|                                    |________|\n|   %c    |                                    |   %c    |\n|        |                                    |        |\n|   %c    |                                    |   %c    |\n|________|____________________________________|________|\n|   %c    |   %c    |   %c    |   %c     |   %c    |   %c    |\n|        |        |        |         |        |        |\n|   %c    |   %c    |   %c    |   %c     |   %c    |   %c    |\n|________|________|________|_________|________|________|\n", , );

	_getch();
	return 0;
}
	
	