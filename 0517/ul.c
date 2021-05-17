#include <stdio.h>
#include <stdlib.h>

int main(){
	char b;
	while(1){	
		printf("문자 입력 : ");
		fflush(stdout);
		scanf(" %c", &b);
		if (b=='0') break;
		else if(b>=65 && b<=90) { printf("%c의 소문자는 %c입니다.\n", b, b+32); }
		else if(b>=97 && b<=122) { printf("%c의 대문자는 %c입니다.\n", b, b-32); }
		fflush(stdin);
	}
	return 0;
}
