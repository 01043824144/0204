#include <stdio.h>

int main_0(void) {

	int arr[5][5]; //1.방이 몇개 25
				// 2. 메모리에 몇 바이트 100
	
	//위의 변수에 값은 넣는 로직이 있음
	


	for (int i = 0; i < 5 ; i++) {
		for (int j = 0; j < 5; j++) {
			
			//arr[i][j] = 1 + j+i*5;
			*(*(arr + j)+i)= 1 + j + i * 5;
		}
	}

	//출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			// printf("%d\t", arr[j][i]);
			printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
	return 0;
}