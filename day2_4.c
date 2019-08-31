//#include <stdio.h>
//int main(void)
//{
//	int input;
//	int i, j;
//
//	printf("정수 입력: ");
//	scanf("%d", &input);
//
//	for (i = 1; i <= input; i++){
//		for (j = 0; j < i; j++){
//			printf("%d", input - j);
//		}
//	printf("\n");
//	}
//}

//복습

//#include <stdio.h>
//int main(void)
//{
//	int input, end;
//	int i, j;
//
//	printf("정수 탑쌓기\n");
//
//	printf("정수를 입력하세유 -> ");
//	scanf("%d", &input);
//
//	for(i = 0; i < input; i ++) {
//		for (j = input; j >= input - i; j--) {
//			printf("%3d", j);
//		}
//		printf("\n");
//	}
//}

//탑 세모로 쌓기

#include <stdio.h>
int main(void)
{
	int input, end, space;
	int i, j, k;

	printf("정수 세모탑 쌓기\n");

	printf("정수를 입력하세유 (39이하)-> ");
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