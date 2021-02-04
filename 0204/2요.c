#include <stdio.h>

//�����޸� �Ҵ�
//Heap ������ ���� -> ��Ÿ�ӽ� �޸𸮿� ž��
//���� �޸𸮸� �����ϴ� �������� ���� �޸� ũ�⸦ ������ �� �ֱ� ������
//���α׷� ����(runtime)�� ����

//1 molloc
//2 calloc
//3 realloc
//4 �޸������� free

int main(void) {

	int* p = NULL;
	//char* pc = NULL;
	//pc = molloc(sizeof(char) * 3);
	p = calloc(sizeof(int)*10);
	//1.�迭ó��
	p[0] = 10;
	p[1] = 20;

	//2.������ ó��
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

	//printf("�ּ� �� : %p\n", p);
	//printf("�� �ȿ� �ִ� �� : %d\n", *p);

	return 0;
}