//#include <stdio.h>
//int main(void)
//{
//	int input;
//	int i, j;
//
//	printf("���� �Է�: ");
//	scanf("%d", &input);
//
//	for (i = 1; i <= input; i++){
//		for (j = 0; j < i; j++){
//			printf("%d", input - j);
//		}
//	printf("\n");
//	}
//}

//����

//#include <stdio.h>
//int main(void)
//{
//	int input, end;
//	int i, j;
//
//	printf("���� ž�ױ�\n");
//
//	printf("������ �Է��ϼ��� -> ");
//	scanf("%d", &input);
//
//	for(i = 0; i < input; i ++) {
//		for (j = input; j >= input - i; j--) {
//			printf("%3d", j);
//		}
//		printf("\n");
//	}
//}

//ž ����� �ױ�

#include <stdio.h>
int main(void)
{
	int input, end, space;
	int i, j, k;

	printf("���� ����ž �ױ�\n");

	printf("������ �Է��ϼ��� (39����)-> ");
	scanf("%d", &input);

	space = input;

	for(i = 0; i < input; i ++) {
		for (k = 0; k < space; k++) {
			printf("  ");
		}
		space--;
		for (j = input; j >= input - i; j--) {
			printf("%2d", j);
			printf("  ");
		}
		printf("\n");
	}
}