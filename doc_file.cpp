	#include <stdio.h>
	#include <string.h> 
	
	int main(){
		FILE *tep; //
		int M, j, N, i;
		float X, tong;
		char c = ' ', s[100];
		//tep = fopen("dl.txt", "r");
		if ((tep = fopen("dl.txt", "r")) == NULL) {
	    printf("Khong mo duoc file!\n");
	    return 1;
	}
		fgets(s, 100, tep);
		fscanf(tep,"%d", &N);
		while((c= fgetc(tep)) != '\n'){
			
		};
		for(i = 1; i <= N; i++){
			fscanf(tep,"%d", &M); tong =  0;
			for(j = 1; j <= M; j++){
				fscanf(tep,"%f", &X);
				tong += X; 
			}
			printf("ket qua %d la:%.2f", i, tong/M);
			
		}	
		fclose(tep);
		return 0;
	}