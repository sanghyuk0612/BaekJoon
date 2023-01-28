#include <stdio.h>
int len(int n) {
    int cnt = 0;
    while (n != 0) {
        n = n / 10;
        cnt++;
    }
    return cnt;
}
int main(void) {
    int num[10000];
    int l;
    for (int i = 0; i < 10000; i++) {
        num[i] = i + 1;
    }
    for (int i = 0; i < 10000; i++) {
        l = len(num[i]);

    }
    return 0;
}
