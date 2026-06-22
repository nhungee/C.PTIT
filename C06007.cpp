#include <stdio.h>
#include <string.h>

int check(char a[], char b[], int inda, int indb){
	if(indb - inda + 1 != strlen(b)) return 0;
	if(indb - inda + 1 == strlen(b)){
		for(int i = 0; i < strlen(b); i++){
			if(b[i] != a[i + inda]) return 0;
		}
	}
	return 1;
}

int main(){
	char s1[1000];
	gets(s1);
	char s2[1000];
	gets(s2);
	int inda = -1, indb = -1;  
	s1[strlen(s1)] = ' ';
	for(int i = 0; i <= strlen(s1); i++){
		if(s1[i] == ' ' && (s1[i-1] != ' ' && i-1 >= 0)){
			indb = i-1;
			if(check(s1, s2, inda, indb)) continue;
			else{
				for(int j = inda; j <= indb; j++){
					printf("%c", s1[j]);
				}
				printf(" ");
			}
		}
		else if(inda <= indb && s1[i] != ' ') inda = i;
	}
}