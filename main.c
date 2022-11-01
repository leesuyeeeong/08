#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main(void)
{
	int i;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = {1, 2, 3, 4, 5};
	int flag_same = 1;	
	
	for (i=0; i<SIZE; i++){
		if (a[i] != b[i])
		{
		printf("배열은 다른 값을 가집니다.");
		flag_same = 0;
		}
	}
}

