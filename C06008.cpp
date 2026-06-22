#include <stdio.h>
#include <string.h>


void tachtu(char s[], char s1[], int inda, int indb){
	int j = 0;
	for(int i = inda; i <= indb; i++){
		s1[j] = s[i];
		j++;
	}
	s1[j] = '\0';
}


int main(){	
	char s[101];
	gets(s);
	s[strlen(s)-1] = ' ';
	int inda = -1; 
	int indb = -1;
	char s1[101];
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == ' ' && s[i-1] != ' ' && i-1 >= 0){
			indb = i-1;
			tachtu(s, s1, inda, indb);
			printf("%c", s1[i]);
		}else if(s[i] != ' ' && inda <= indb) inda = i;
	}
	inda = -1;
	
}