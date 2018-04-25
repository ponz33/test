#include<stdio.h>

#define CONIOEX
#include"conioex.h"

#include"main.h"
PLAYER player;

void game_main() {
	//マップデータ
	FIELD *mapdata;
	mapdata = getmapdata();

	//ずかんデータ初期化
	ITEM * item[20];
	item[0] = get_itemdata();
	zukan();

	//ずかん取得	
	item[0]->own = 1;
	item[0]->howmany = 1;

	while (1)
	{
		mapmain();
		if (mapdata->field[player.pos_y][player.pos_x]==4)
		{
			if (inport(PK_ENTER))
			{
				exchange();
			}
		}

		if (inport(PK_Z))
		{
			zukan_window();
		}
	}

}

void exchange() {

}

void zukan_window() {
	ITEM * item[10];
	item[0] = get_itemdata();


	clrscr();

	for (int i = 1;i < 10;i++)
	{
		gotoxy(5, 5 + i);
		if (item[i]->own == 1)
		{
			printf("ずかんナンバー%d %s %d", i, item[i]->name, item[i]->howmany);
		}
		else
		{
			printf("　　　　　　　　　　　　　　　　　　　　　　");
		}
	}
}