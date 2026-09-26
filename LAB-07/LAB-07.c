#include <stdio.h>

void simpleChecker(int number) {
	if (number <= 1)
	{
		printf("Number is not simple\n");
		return;
	}
	int isSimple = 1;
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0) {
			isSimple = 0;
			break;
		}
	}

	if (isSimple) {
		printf("Number is simple\n");

	}
	else {
		printf("Number is not simple\n");
	}

}

int recSum(int n) {
	if (n >= 100) {	
		return 100;
	}
		return n + recSum(n + 1);
}

int main() {

	return 0;
}