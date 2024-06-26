//coding_test
#include <stdio.h>

int main(void) {
    int H, M;
    scanf("%d %d", &H, &M);

    // 입력받은 시간에서 45분을 뺀 후 처리
    M -= 45;

    // 분이 음수가 된 경우 시간과 분을 조정
    if (M < 0) {
        M += 60;
        H -= 1;
        
        // 시간이 음수가 된 경우 24를 더해줘야 함
        if (H < 0) {
            H += 24;
        }
    }

    printf("%d %d\n", H, M);

    return 0;
}
