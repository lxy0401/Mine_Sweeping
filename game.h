#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//定义雷阵的大小
#define ROWS 9
#define COLS 9

//默认雷的大小
#define DEFAULT_COUNT 10

//设置雷阵
void set_mine(char mine[ROWS+2][COLS+2],int row,int col);

//打印雷阵信息
void display(char board[ROWS+2][COLS+2],int row,int col);

//统计非雷区周围的雷的个数
int get_mine_count(char board[ROWS+2][COLS+2],int row,int col);

//游戏的主逻辑
void play_game(char mine[ROWS+2][COLS+2],char show[ROWS+2][COLS+2]);

#endif
