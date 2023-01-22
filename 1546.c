#include <stdio.h>

int main(void) {
    int n;
    int max = 0;
    float avg=0;
    float plus=0;
    float newscore;
    scanf("%d", &n);

    int score[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < n; i++) {
        if (score[i] > max) {
            max = score[i];
        }
    }
    
    for (int i = 0; i<n; i++) {
        newscore = score[i] / max;
        plus = plus + newscore * 100;
    }
    avg = plus / n;
    printf("%d", avg);
}