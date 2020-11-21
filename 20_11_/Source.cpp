#include<stdio.h>

#define N 3

void line() {
	printf("\n\n");
	printf("===============================================================================\n");
	printf("Name\t\t\t\tNick Name\t\tAge\tWeight\n\n");
	printf("===============================================================================\n");
}


int main() {

	struct informacation {
		char _name[100] = {};
		char nick_Name[100] = {};
		int _age = 0;
		float _weight = 0;
	};
	struct informacation I[N];

	printf("Enter the informacation: \n");

	int i = 0;
	int j = -1;

	for (i = 0; i < N; i++) {

		printf("Name :  ");
		gets_s(I[i]._name);

		if (j == i) {
			gets_s(I[i]._name); //DEBUG

		}
		j = i + 1;
		printf("NickName :  ");
		gets_s(I[i].nick_Name);

		printf("Age :  ");
		scanf_s("%d", &I[i]._age);
		if ((I[i]._age) < 0) {
			printf("Error ");
			return 0;
		}
		printf("Weight :  ");
		scanf_s("%f", &I[i]._weight);
		if ((I[i]._weight) < 0) {
			printf("Error ");
			return 0;
		}
		fflush(stdin);
		printf("\n");
	}
	
	line();

	for (i = 0; i < N; i++) {
		printf("%s\t\t\t\t", I[i]._name);
		printf("%-4s\t\t\t", I[i].nick_Name);
		printf("%d\t", I[i]._age);
		printf("%.1f\n", I[i]._weight);
		printf("-------------------------------------------------------------------------------\n");



	}
	return 0;
}
