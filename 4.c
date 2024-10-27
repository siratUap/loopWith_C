#include <stdio.h>

int main() {
    int N, count = 0;


    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 1; i < N; i++) {
        if (arr[i] < 0) {
             count++;
        }
    }

     printf("%d\n", count);

    return 0;
}
