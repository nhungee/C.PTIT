#include <stdio.h>
#include <string.h>

char* my_strcpy(char *dest, char *src){
	for(int i = 0; i < strlen(src); i++){
		dest[i] = src[i];
	}
	dest[strlen(src)] = '\0';
	return dest;
}

struct CauThu{
	char hoten[50];
	char clb[50];
	char quoctich[50];
	int banthang, kientao;
};
typedef struct CauThu CauThu;

int main(){
	CauThu s;	
	char *res1 = my_strcpy(s.hoten, "lionel messi");
	char *res2 = my_strcpy(s.clb, "PSG");
	char *res3 = my_strcpy(s.quoctich, "Argentina");
	s.banthang = 92;
	s.kientao = 65;
	CauThu *ptr = &s;
	printf("thong tin cau thu : \n");
	printf("ho ten : %s\n", (*ptr).hoten);
	printf("clb : %s\n", (*ptr).clb);
	printf("quoc tich : %s\n", (*ptr).quoctich);
	printf("so ban thang : %d\nso kien tao: %d\n", (*ptr).banthang, (*ptr).kientao);
}

