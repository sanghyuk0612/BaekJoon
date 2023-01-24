#include <stdio.h>

int main(void) {
    int n;
    int s;
    int cnt=0;
    float avg;
    scanf("%d", &n);

    int score[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &s);
        for (int j = 0; j < s; j++) {
            scanf("%d", &score[j]);
            avg += score[j];
        }
        avg = avg / n;
        for (int j = 0; j < s; j++) {
            if (score[j] < avg) {
                cnt++;
            }
            printf("%.3f&%", cnt / j);
        }
    
    }
    

    
    return 0;
}