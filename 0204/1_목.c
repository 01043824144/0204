#include <stdio.h>

int main_0(void) {

	int arr[5][5]; //1.���� � 25
				// 2. �޸𸮿� �� ����Ʈ 100
	
	//���� ������ ���� �ִ� ������ ����
	


	for (int i = 0; i < 5 ; i++) {
		for (int j = 0; j < 5; j++) {
			
			//arr[i][j] = 1 + j+i*5;
			*(*(arr + j)+i)= 1 + j + i * 5;
		}
	}

	//���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			// printf("%d\t", arr[j][i]);
			printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
	return 0;
}