#include <stdio.h>
#include <stdlib.h>


int main() {
	FILE *fp1 = fopen("esi.c", "r");
	FILE *fp2 = fopen("new.txt", "w");
	char ch;
	while(feof(fp1) == 0) {
		ch = fgetc(fp1);
		if(ch == '/') {
			ch = fgetc(fp1);
			if(ch == '*') {
				while(1) {
					ch = fgetc(fp1);
					if(ch == '*') {
						ch = fgetc(fp1);
						if(ch == '/') {
							break;
						}
					}
				}
			}else if(ch == '/') {
				while(1) {
					ch = fgetc(fp1);
					if(ch == '\n') {
						break;
					}
				}
			}
		}
		fputc(ch, fp2);
	}
	printf("DONE");
	return 0;
}