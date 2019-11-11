#include <stdio.h>
int main() {
	int a, i;
	printf("Input an integer: ");
	scanf("%d", &i);
	
	for(i = 1; i <= 100; i++)
	{
		if((i%a) == 3) {
			printf("%d", i);
		}
	}
	return 0;
}
