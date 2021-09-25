#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//函数的声明
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//数组坐标中x与y是相反的，这里写一个函数实现x，y的交换，使x，y与正常坐标相同
void swap(int* a, int* b)

//告诉我们四种游戏状态
//玩家赢-'*'
//电脑赢-'#'
//平局	-'Q'
//继续	-'C'
char IsWin(char board[ROW][COL], int row, int col);
//判断棋盘是否下满
int IsFull(char board[ROW][COL], int row, int col);