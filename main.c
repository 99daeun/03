#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	float result;
	printf("분자를 입력하세요:");
	scanf("%d", &a);
	
	printf("분모를 입력하세요:");
	scanf("%d",&b);
	
	result=(float)a/b;
	printf("나누기 결과: %f\n",result);
	return 0;
}
