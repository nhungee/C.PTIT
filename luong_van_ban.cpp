#include <stdio.h>

int main() {
    long long num, max_value = 0;
    
    while (scanf("%lld", &num) != EOF) { // Đọc số đến khi gặp EOF
        if (num > max_value) {
            max_value = num; // Cập nhật số lớn nhất
        }
    }
    
    printf("%lld\n", max_value); // In kết quả

    return 0;
}