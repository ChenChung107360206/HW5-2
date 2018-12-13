#include<stdio.h>
#include<stdlib.h>
void Turnback(void);
int main(void) {

	printf("Enter a sentence : ");
	Turnback();
	printf("\n");

	system("pause");
	return 0;
}
void Turnback(void) {
	char word;
	scanf_s("%c", &word);
	if (word != '\n') {
		Turnback();
	}
	printf("%c", word);
}