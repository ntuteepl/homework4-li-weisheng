/*#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int preferences[n-1][n-1];
    int boy_best_match[n-1], girl_best_match[n-1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &preferences[i][j]);
        }
    }
    int boy, girl,k,i,j;
    int max_feeling;
    for (k = 0; k < preferences; k++) {
        max_feeling = -1;
        for (int l = 0; l < preferences; l++) {
            if (preferences[i][j] > max_feeling) {
                max_feeling = preferences[i][j];
                girl = l;
            }
        }
        // 女孩被匹配後，將其好感度設為-1，以避免重複匹配
        preferences[i][girl] = -1;
        printf("boy %d pair with girl %d.\n", i + 1, girl + 1);
    }

    return 0;
}*/
#include <stdio.h>
int main() {
    int MAX_USERS;
    scanf("%d", &MAX_USERS);
    int preferences[MAX_USERS-1][MAX_USERS-1]; // 好感度矩陣
    int i, j,n;

    // 使用者輸入好感度矩陣

    for (i = 0; i < MAX_USERS; i++) {
        for (j = 0; j < MAX_USERS; j++) {
            scanf("%d", &preferences[i][j]);
        }
    }

    int boy, girl;
    int max_feeling;

    // 找出最佳情侶配對
    for (i = 0; i < MAX_USERS; i++) {
        max_feeling = -1;
        for (j = 0; j < MAX_USERS; j++) {
            if (preferences[i][j] > max_feeling) {
                max_feeling = preferences[i][j];
                girl = j;
            }
        }
        // 女孩被匹配後，將其好感度設為-1，以避免重複匹配
        preferences[i][girl] = -1;
        printf("boy %d pair with girl %d.\n", i + 1, girl + 1);
    }

    return 0;
}


