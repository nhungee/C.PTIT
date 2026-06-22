#include <stdio.h>
#include <string.h>

int main (){
	char s[1000];
	gets(s);
	int chucai = 0, chuso = 0, kitu = 0;
	for(int i = 0; i < strlen(s); i++){
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) chucai++;
		else if(s[i] >= '0' && s[i] <= '9')	chuso++;
		else kitu++;
	}
	printf("%d %d %d", chucai, chuso, kitu);
}