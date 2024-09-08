//n - е нечетное число(первое Ц 1, второе Ц 3 и т.д.).
#include <stdio.h>
#include <locale.h>
int main(void) {
	char* locale = setlocale(LC_ALL, "RUS");
	int n;
	printf("¬ведите номер нечетного числа: ");
	scanf("%d", &n);
	int num = 2 *n - 1;
	printf("n-ное нечетное число: %d\n", num);
	return 0;
}