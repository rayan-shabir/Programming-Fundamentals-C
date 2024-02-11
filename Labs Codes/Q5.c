#include <stdio.h>


int main() {
	char S[20] = {'{', '{', '{', '{', '}', {', '}', '{', '{', '{', '{', '}', '}', '}', '}', '}', '}', '{', '}', '}'};
	int c1 = 0;
	int c2 = 0;
	for(int i = 0; i<20; i++){
		if(S[i] == '{') {
			c1++;
		}
		if(S[i] == '}') {		
			c2++;
		}
	}

	if(c1 == c2) {
		printf("\nBrackets are balanced");
	} else {
		printf("\nBrackets are not balanced");
	}

	return 0;
}