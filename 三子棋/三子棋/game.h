#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//����������
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//����������x��y���෴�ģ�����дһ������ʵ��x��y�Ľ�����ʹx��y������������ͬ
void swap(int* a, int* b)

//��������������Ϸ״̬
//���Ӯ-'*'
//����Ӯ-'#'
//ƽ��	-'Q'
//����	-'C'
char IsWin(char board[ROW][COL], int row, int col);
//�ж������Ƿ�����
int IsFull(char board[ROW][COL], int row, int col);