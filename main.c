#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void)
{
	int A[ROWS][COLS] = { //���ϱ� ��� ���
 		{2, 3, 0},
 		{8, 9, 1},
 		{7, 0, 5} };
	int B[ROWS][COLS] = { //���ϱ� ��� ���
 		{1, 0, 0},
 		{0, 1, 0},
 		{0, 0, 1} };
	int C[ROWS][COLS]; //���� ��� ��� 
	
	addMatrix(A, B, C);
	printMatrix(C);
	
	return 0;
}

int i,j;
void addMatrx(int A[][COLS], int B[][COLS], int 
C[][COLS])
{
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			C[i][j]=A[i][j] + B[i][j]
		}
	}
}
void printMatrx(int A[][COLS])
{
	printf("����� �� : \n");
    for(i=0;i<2;i++){
     	for(j=0;j<2;j++){
        	C[i][j]=A[i][j]+B[i][j];
    	}
}



