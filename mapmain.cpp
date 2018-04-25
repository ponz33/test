
#include"conioex.h"
#include"main.h"

void write(int);

void mapmain()
{
	FIELD *mapdata;
	mapdata = getmapdata();
	
	
	
	while (1)
	{
		

		//�`��
		switch (player.direction)
		{
		case TOP:
			if (mapdata->field[player.pos_y - 1][player.pos_x] == 1)
			{
				write(BACK_WALL);
				if (mapdata->field[player.pos_y][player.pos_x - 1] == 1)
					write(LEFTFRONT_WALL);
				else
				{
					if (mapdata->field[player.pos_y - 1][player.pos_x - 1] == 1)
						write(LEFTBACK_WALL_1);
				}
				if (mapdata->field[player.pos_y][player.pos_x + 1] == 1)
					write(RIGHTFRONT_WALL);
				else
				{
					if (mapdata->field[player.pos_y - 1][player.pos_x + 1] == 1)
						write(RIGHTBACK_WALL_1);
				}

			}
			else
			{
				if (mapdata->field[player.pos_y][player.pos_x - 1] == 1)
				{
					write(LEFTFRONT_WALL);
					if (mapdata->field[player.pos_y - 1][player.pos_x - 1] == 1)
						write(LEFTBACK_WALL_2);
				}
				else
				{
					if (mapdata->field[player.pos_y - 1][player.pos_x - 1] == 1)
						write(LEFTBACK_WALL);

				}
				if (mapdata->field[player.pos_y][player.pos_x + 1] == 1)
				{
					write(RIGHTFRONT_WALL);
					if (mapdata->field[player.pos_y - 1][player.pos_x + 1] == 1)
						write(RIGHTBACK_WALL_2);

				}
				else
				{
					if (mapdata->field[player.pos_y - 1][player.pos_x + 1] == 1)
						write(RIGHTBACK_WALL);

				}
				
				

			}

			break;




		case RIGHT:
			if (mapdata->field[player.pos_y][player.pos_x + 1] == 1)
			{
				write(BACK_WALL);
				if (mapdata->field[player.pos_y - 1][player.pos_x] == 1)
					write(LEFTFRONT_WALL);
				else
				{
					if (mapdata->field[player.pos_y - 1][player.pos_x + 1] == 1)
						write(LEFTBACK_WALL_1);
				}
				if (mapdata->field[player.pos_y + 1][player.pos_x] == 1)
					write(RIGHTFRONT_WALL);
				else
				{
					if (mapdata->field[player.pos_y + 1][player.pos_x + 1] == 1)
						write(RIGHTBACK_WALL_1);
				}

			}
			else
			{
				if (mapdata->field[player.pos_y - 1][player.pos_x] == 1)
				{
					write(LEFTFRONT_WALL);
					if (mapdata->field[player.pos_y - 1][player.pos_x + 1] == 1)
						write(LEFTBACK_WALL_2);

				}
				else
				{
					if (mapdata->field[player.pos_y - 1][player.pos_x + 1] == 1)
						write(LEFTBACK_WALL);

				}
				if (mapdata->field[player.pos_y + 1][player.pos_x] == 1)
				{
					write(RIGHTFRONT_WALL);
					if (mapdata->field[player.pos_y + 1][player.pos_x + 1] == 1)
						write(RIGHTBACK_WALL_2);

				}
				else
				{
					if (mapdata->field[player.pos_y + 1][player.pos_x + 1] == 1)
						write(RIGHTBACK_WALL);

				}

				

			}

			break;



		case BOTTOM:
			if (mapdata->field[player.pos_y + 1][player.pos_x] == 1)
			{
				write(BACK_WALL);
				if (mapdata->field[player.pos_y][player.pos_x + 1] == 1)
					write(LEFTFRONT_WALL);
				else
				{
					if (mapdata->field[player.pos_y + 1][player.pos_x + 1] == 1)
						write(LEFTBACK_WALL_1);
				}
				if (mapdata->field[player.pos_y][player.pos_x - 1] == 1)
					write(RIGHTFRONT_WALL);
				else
				{
					if (mapdata->field[player.pos_y + 1][player.pos_x - 1] == 1)
						write(RIGHTBACK_WALL_1);
				}

			}
			else
			{
				if (mapdata->field[player.pos_y][player.pos_x + 1] == 1)
				{
					write(LEFTFRONT_WALL);
					if (mapdata->field[player.pos_y + 1][player.pos_x + 1] == 1)
						write(LEFTBACK_WALL_2);

				}
				else
				{
					if (mapdata->field[player.pos_y + 1][player.pos_x + 1] == 1)
						write(LEFTBACK_WALL);

				}
				if (mapdata->field[player.pos_y][player.pos_x - 1] == 1)
				{
					write(RIGHTFRONT_WALL);
					if (mapdata->field[player.pos_y + 1][player.pos_x - 1] == 1)
						write(RIGHTBACK_WALL_2);

				}
				else
				{
					if (mapdata->field[player.pos_y + 1][player.pos_x - 1] == 1)
						write(RIGHTBACK_WALL);

				}
				

			}

			break;



		case LEFT:
			if (mapdata->field[player.pos_y][player.pos_x -1] == 1)
			{
				write(BACK_WALL);
				if (mapdata->field[player.pos_y +1][player.pos_x] == 1)
					write(LEFTFRONT_WALL);
				else
				{
					if (mapdata->field[player.pos_y + 1][player.pos_x - 1] == 1)
						write(LEFTBACK_WALL_1);
				}
				if (mapdata->field[player.pos_y -1][player.pos_x] == 1)
					write(RIGHTFRONT_WALL);
				else
				{
					if (mapdata->field[player.pos_y - 1][player.pos_x - 1] == 1)
						write(RIGHTBACK_WALL_1);
				}

			}
			else
			{
				if (mapdata->field[player.pos_y +1][player.pos_x] == 1)
				{
					write(LEFTFRONT_WALL);
					if (mapdata->field[player.pos_y + 1][player.pos_x - 1] == 1)
						write(LEFTBACK_WALL_2);

				}
				else
				{
					if (mapdata->field[player.pos_y + 1][player.pos_x - 1] == 1)
						write(LEFTBACK_WALL);

				}
				if (mapdata->field[player.pos_y -1][player.pos_x] == 1)
				{
					write(RIGHTFRONT_WALL);
					if (mapdata->field[player.pos_y - 1][player.pos_x - 1] == 1)
						write(RIGHTBACK_WALL_2);

				}
				else
				{
					if (mapdata->field[player.pos_y - 1][player.pos_x - 1] == 1)
						write(RIGHTBACK_WALL);

				}
				

			}

			break;
		}
		
		//�v���C���[�̈ʒu
		if (inport(PK_W)!=0)
		{
			switch (player.direction)
			{
			case TOP:
				if (mapdata->field[player.pos_y - 1][player.pos_x] != 1)
					player.pos_y--;
				break;
			case RIGHT:
				if (mapdata->field[player.pos_y][player.pos_x + 1] != 1)
					player.pos_x++;
				break;
			case BOTTOM:
				if (mapdata->field[player.pos_y + 1][player.pos_x] != 1)
					player.pos_y++;
				break;
			case LEFT:
				if (mapdata->field[player.pos_y][player.pos_x - 1] != 1)
					player.pos_x--;
				break;
			}
			//reinport();
		}


		if (inport(PK_D)!=0)
		{
			switch (player.direction)
			{
			case TOP:
				player.direction = RIGHT;
				break;
			case RIGHT:
				player.direction = BOTTOM;
				break;
			case BOTTOM:
				player.direction = LEFT;
				break;
			case LEFT:
				player.direction = TOP;
				break;
			}
			//reinport();
		}


		if (inport(PK_A)!=0)
		{
			switch (player.direction)
			{
			case TOP:
				player.direction = LEFT;
				break;
			case RIGHT:
				player.direction = TOP;
				break;
			case BOTTOM:
				player.direction = RIGHT;
				break;
			case LEFT:
				player.direction = BOTTOM;
				break;
			}
			//reinport();
		}

		if (mapdata->field[player.pos_y][player.pos_x] == 4) {
			write(NPC);
		}


		//�~�j�}�b�v
		if (mapdata->field[player.pos_y][player.pos_x] != 4) {
			mapdata->field[player.pos_y][player.pos_x] = 2;
		}
		gotoxy(60, 10);
		for (int i = 0;i < 6;i++)
		{
			for (int j = 0;j < 6;j++)
			{
				switch (mapdata->field[i][j])
				{
				case 0:
					printf("�@");
					break;

				case 1:
					printf("�@");
					break;

				case 2:

					switch (player.direction)
					{
					case TOP:
						printf("��");
						break;

					case RIGHT:
						printf("��");
						break;

					case BOTTOM:
						printf("��");
						break;

					case LEFT:
						printf("��");
						break;
					}
					if (mapdata->field[player.pos_y][player.pos_x] != 4) {
						mapdata->field[player.pos_y][player.pos_x] = 3;
					}
					break;

				case 3:
					printf("��");
					break;

				case 4:
					printf("��");
					break;
				}

			}
			gotoxy(60, 11 + i);
		}

		

		msleep(50);
		system("cls");

	}
	
}

void write(int a)
{
	switch (a)
	{
	case BACK_WALL:
		
		for (int i = 0 ;i < 12;i++)
		{
			if (i == 0)
			{
				gotoxy(20, i+10);
				printf("�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q");
			}
			else if (i > 0 && i < 11)
			{
				gotoxy(20, i+10);
				printf("|                �@    |");
			}
			else if (i == 11)
			{
				gotoxy(20, i+10);
				printf("�\�\�\�\�\�\�\�\�\�\�\");
			}
		}
		break;

	case LEFTFRONT_WALL:
		gotoxy(10, 9);
		printf("�@�@�@�_");
		gotoxy(10, 10);
		printf("�@�@�@�@�_");
		for (int i = 0;i < 10;i++)
		{
			gotoxy(10, 11 + i);
			printf("�@�@�@�@�@|");
		}
		gotoxy(10, 21);
		printf("�@�@�@�@�^");
		gotoxy(10, 22);
		printf("�@�@�@�^");
		
		break;
		
	case LEFTBACK_WALL:
		gotoxy(8, 10);
		printf("  �Q�Q�Q�Q�Q");
		gotoxy(8, 11);
		printf("            |�_");
		for (int i = 0;i < 8;i++)
		{
			gotoxy(8, 12 + i);
			printf("            |  |");
		}
		gotoxy(8, 20);
		printf("            |�^");
		gotoxy(8, 21);
		printf("  �\�\�\�\�\");

		break;

	case RIGHTFRONT_WALL:
		gotoxy(44, 9);
		printf("�@�^�@�@�@");
		gotoxy(44, 10);
		printf("�^�@�@�@�@");
		for (int i = 0;i < 10;i++)
		{
			gotoxy(43, 11 + i);
			printf("|");
		}
		gotoxy(44, 21);
		printf("�_�@�@�@�@");
		gotoxy(44, 22);
		printf("�@�_�@�@�@");
		
		break;

	case RIGHTBACK_WALL:
		gotoxy(41, 10);
		printf("�@�Q�Q�Q�Q�Q");
		gotoxy(41, 11);
		printf("�^|");
		for (int i = 0;i < 8;i++)
		{
			gotoxy(40, 12 + i);
			printf("|  |");
		}
		gotoxy(41, 20);
		printf("�_|");
		gotoxy(41, 21);
		printf("�@�\�\�\�\�\");

		break;

	case LEFTBACK_WALL_1:
		gotoxy(8, 10);
		printf("�Q�Q�Q�Q�Q�Q");
		gotoxy(8, 21);
		printf("�\�\�\�\�\�\");

		break;

	case RIGHTBACK_WALL_1:
		gotoxy(40, 10);
		printf("�Q�Q�Q�Q�Q�Q");
		gotoxy(40, 21);
		printf("�\�\�\�\�\�\");
		break;

	case LEFTBACK_WALL_2:
		gotoxy(8, 11);
		printf("            |�_");
		for (int i = 0;i < 8;i++)
		{
			gotoxy(8, 12 + i);
			printf("            |  |");
		}
		gotoxy(8, 20);
		printf("            |�^");
		break;

	case RIGHTBACK_WALL_2:
		gotoxy(41, 11);
		printf("�^|");
		for (int i = 0;i < 8;i++)
		{
			gotoxy(40, 12 + i);
			printf("|  |");
		}
		gotoxy(41, 20);
		printf("�_|");

		break;

	case NPC:
		
		gotoxy(23, 13);printf("____________\n");
		gotoxy(23, 14);printf("|          |\n");
		gotoxy(23, 15);printf("| �E�@�@�E |\n");
		gotoxy(23, 16);printf("|    __    |\n");
		gotoxy(23, 17);printf("|__________|\n");
		break;
	}

	

}