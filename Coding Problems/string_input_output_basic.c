#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    char ch;
	char s[100];
	char str[100];
	char string[100];
	
	printf("Enter character: ");
	scanf("%c", &ch);
	
	printf("Enter string(without spaces): ");
	scanf("%s", s); //use space after %s if not using fflush(stdin).
	fflush(stdin);

	printf("Enter string(with spaces) 01: "); //Method #01
	gets(str);
	
	printf("Enter string(with spaces) 02: "); //Method #02
	fgets(string, 100, stdin);

	printf("\n%c\n", ch);
	printf("%s\n", s);
	printf("%s\n", str);
	printf("%s", string);
	return 0;
}
