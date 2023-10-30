#include <stdio.h>

int main() {
    int N; // 測試案例的數量
    scanf("%d", &N);

    // 建立帐户数据的二维数组
    int accounts[3][6]=
        {{123,456,9000},
         {456,789,5000},
         {789,888,6000},
         {336,558,10000},
         {775,666,12000},
         {123,456,7000}
        };

    // 查询帐户余额
    for (int i = 0; i < N; i++) {
        int accountToQuery, passwordToQuery;
        scanf("%d %d", &accountToQuery, &passwordToQuery);

        int found = 0;
        for (int j = 0; j < N; j++) {
            if (accounts[j][0] == accountToQuery && accounts[j][1] == passwordToQuery) {
                printf("%d\n", accounts[j][2]);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("error\n");
        }
    }

    return 0;
}

