#include <stdio.h>

int main(void) {
    int n;
    int s;


    float answer;
    scanf("%d", &n);

    int score[1000];
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        float avg = 0;
        scanf("%d", &s);
        for (int j = 0; j < s; j++) {
            scanf("%d", &score[j]);
            avg += score[j];
        }
        avg = avg / s;
        for (int j = 0; j < s; j++) {
            if (score[j] > avg) {
                cnt++;
            }

        }
        answer = (float)cnt / s;
        printf("%0.3f%%\n", answer * 100);

    }
    return 0;
}