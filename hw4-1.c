#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // 如果能被小于等于其平方根的数整除，不是质数
        }
    }
    return 1; // 是质数
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (isPrime(num)) {
            printf("YES ");
        } else {
            printf("NO ");
        }
    }

    return 0;
}

