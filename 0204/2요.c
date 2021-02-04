#include <stdio.h>

//동적메모리 할당
//Heap 영역에 생성 -> 런타임시 메모리에 탑재
//동적 메모리를 생성하는 시점에서 동적 메모리 크기를 결정할 수 있기 때문에
//프로그램 동작(runtime)시 생성

//1 molloc
//2 calloc
//3 realloc
//4 메모리해제는 free

int main(void) {

	int* p = NULL;
	//char* pc = NULL;
	//pc = molloc(sizeof(char) * 3);
	p = calloc(sizeof(int)*10);
	//1.배열처럼
	p[0] = 10;
	p[1] = 20;

	//2.포인터 처럼
	*(p + 2) = 30; // p[2]
	*(p + 3) = 40; // p[3]
	*(p + 4) = 50; // p[4]
	
	for (int i = 0; i < 10; i++) {
		printf("%p => %d = %d\n", & p[i], p[i], * (p + i));
	}
	printf("\n\n");

	p = realloc(p,15 * sizeof(int));

	for (int i = 0; i < 15; i++) {
		printf("%p => %d = %d\n", &p[i], p[i], *(p + i));
	}

	free(p);

	//*p = 10;

	//printf("주소 값 : %p\n", p);
	//printf("그 안에 있는 값 : %d\n", *p);

	return 0;
}