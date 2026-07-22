#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int score;
        int count60 = 0, count30 = 0;

        for (int i = 0; i < 5; i++) {
            scanf("%d", &score);

            if (score >= 60)
                count60++;

            if (score >= 30)
                count30++;
        }

        if (count60 >= 2 && count30 >= 4)
            printf("Pass\n");
        else
            printf("Fail\n");
    }

    return 0;
}