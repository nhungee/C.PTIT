#include <stdio.h>

//int main(){
//	//dấu * thể hiện ptr là con trỏ 
//	int *ptr; //con trỏ kiểu int 
//	// dáu * có thê đặt cạnh tên biến hoặc cạnh tên kiểu dữ liệu :
//	long long* ptr2; // con trỏ kiểu long long 
//	char *ptr3;
//	return 0;
//}

int main(){
	int N = 28; 
	long long M = 10000012828;
	printf("dia chi cua N trong bo nho : %d\n", &N);
	printf("dia chi cua M trong bo nho : %d\n", &M);
	return 0;
}

int main(){
	itn N = 10000; 
	pritnf ("dia chi cua N : %d\n", &N);
	int *ptr;
	//gán địa chỉ của N cho ptr 
	ptr = &N;
	printf("gia tri cua ptr : %d\n", ptr);
	return 0;
}