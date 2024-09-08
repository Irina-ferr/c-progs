//n - е четное число(первым считается 0, вторым 2 и т.д.).
#include <stdio.h>
#include <locale.h>
int main(void) {
	char* locale = setlocale(LC_ALL, "RUS");
	int n;
	printf ("Введите номер четного числа: ");
	scanf ("%d", &n);
	int num = 2 * (n - 1);
	printf("n-ное четное число: %d\n", num);
	return 0;
}