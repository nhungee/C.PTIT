#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[21];
        scanf("%s", s);
        int check = 1;
        for(int i = 0; i < strlen(s); i++) {
            if(s[i] != '0' && s[i] != '1' && s[i] != '8' && s[i] != '9') {
                check = 0;
                break;
            }
        }
        if(!check) {
            printf("INVALID\n");
        } else {
            for(int i = 0; i < strlen(s); i++) {
                if(s[i] == '1') printf("1");
                else printf("0");
            }
            printf("\n");
        }
    }
    return 0;
}
