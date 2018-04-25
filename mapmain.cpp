
#include"conioex.h"
#include"main.h"

void write(int);

void mapmain()
{
	FIELD *mapdata;
	mapdata = getmapdata();
	
	
	
	while (1)
	{
		

		//ï`âÊ
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
		
		//ÉvÉåÉCÉÑÅ[ÇÃà íu
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


		//É~ÉjÉ}ÉbÉv
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
					printf("Å@");
					break;

				case 1:
					printf("Å@");
					break;

				case 2:

					switch (player.direction)
					{
					case TOP:
						printf("Å™");
						break;

					case RIGHT:
						printf("Å®");
						break;

					case BOTTOM:
						printf("Å´");
						break;

					case LEFT:
						printf("Å©");
						break;
					}
					if (mapdata->field[player.pos_y][player.pos_x] != 4) {
						mapdata->field[player.pos_y][player.pos_x] = 3;
					}
					break;

				case 3:
					printf("Å°");
					break;

				case 4:
					printf("Åú");
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
				printf("ÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQ");
			}
			else if (i > 0 && i < 11)
			{
				gotoxy(20, i+10);
				printf("|                Å@    |");
			}
			else if (i == 11)
			{
				gotoxy(20, i+10);
				printf("Å\Å\Å\Å\Å\Å\Å\Å\Å\Å\Å\");
			}
		}
		break;

	case LEFTFRONT_WALL:
		gotoxy(10, 9);
		printf("Å@Å@Å@Å_");
		gotoxy(10, 10);
		printf("Å@Å@Å@Å@Å_");
		for (int i = 0;i < 10;i++)
		{
			gotoxy(10, 11 + i);
			printf("Å@Å@Å@Å@Å@|");
		}
		gotoxy(10, 21);
		printf("Å@Å@Å@Å@Å^");
		gotoxy(10, 22);
		printf("Å@Å@Å@Å^");
		
		break;
		
	case LEFTBACK_WALL:
		gotoxy(8, 10);
		printf("  ÅQÅQÅQÅQÅQ");
		gotoxy(8, 11);
		printf("            |Å_");
		for (int i = 0;i < 8;i++)
		{
			gotoxy(8, 12 + i);
			printf("            |  |");
		}
		gotoxy(8, 20);
		printf("            |Å^");
		gotoxy(8, 21);
		printf("  Å\Å\Å\Å\Å\");

		break;

	case RIGHTFRONT_WALL:
		gotoxy(44, 9);
		printf("Å@Å^Å@Å@Å@");
		gotoxy(44, 10);
		printf("Å^Å@Å@Å@Å@");
		for (int i = 0;i < 10;i++)
		{
			gotoxy(43, 11 + i);
			printf("|");
		}
		gotoxy(44, 21);
		printf("Å_Å@Å@Å@Å@");
		gotoxy(44, 22);
		printf("Å@Å_Å@Å@Å@");
		
		break;

	case RIGHTBACK_WALL:
		gotoxy(41, 10);
		printf("Å@ÅQÅQÅQÅQÅQ");
		gotoxy(41, 11);
		printf("Å^|");
		for (int i = 0;i < 8;i++)
		{
			gotoxy(40, 12 + i);
			printf("|  |");
		}
		gotoxy(41, 20);
		printf("Å_|");
		gotoxy(41, 21);
		printf("Å@Å\Å\Å\Å\Å\");

		break;

	case LEFTBACK_WALL_1:
		gotoxy(8, 10);
		printf("ÅQÅQÅQÅQÅQÅQ");
		gotoxy(8, 21);
		printf("Å\Å\Å\Å\Å\Å\");

		break;

	case RIGHTBACK_WALL_1:
		gotoxy(40, 10);
		printf("ÅQÅQÅQÅQÅQÅQ");
		gotoxy(40, 21);
		printf("Å\Å\Å\Å\Å\Å\");
		break;

	case LEFTBACK_WALL_2:
		gotoxy(8, 11);
		printf("            |Å_");
		for (int i = 0;i < 8;i++)
		{
			gotoxy(8, 12 + i);
			printf("            |  |");
		}
		gotoxy(8, 20);
		printf("            |Å^");
		break;

	case RIGHTBACK_WALL_2:
		gotoxy(41, 11);
		printf("Å^|");
		for (int i = 0;i < 8;i++)
		{
			gotoxy(40, 12 + i);
			printf("|  |");
		}
		gotoxy(41, 20);
		printf("Å_|");

		break;

	case NPC:
		
		gotoxy(23, 13);printf("____________\n");
		gotoxy(23, 14);printf("|          |\n");
		gotoxy(23, 15);printf("| ÅEÅ@Å@ÅE |\n");
		gotoxy(23, 16);printf("|    __    |\n");
		gotoxy(23, 17);printf("|__________|\n");
		break;
	}

	

}