#include <stdio.h>
#include <string.h>

int main(void) {

	char hello[6] = { 'H', 'e', 'l', 'l', 'o', 0 };
	char world[6] = { 'W', 'o', 'r', 'l', 'd', 0 };
	char ment[] = "C is fun!~";

	printf("%s %s\n%s\n", hello, world, ment);

	//문자열 Don't worry be happy! 만들고
	//문자열 걱정마. 행복할거야. 만둘고 출력
	char worry[] = "Don't worry be happy!";
	char worry_ko[] = "걱정마. 행복할거야.";

	printf("%s %s\n%s", worry, worry_ko);

	return 0;
}