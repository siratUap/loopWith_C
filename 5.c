#include <stdio.h>

int main() {

    int N, even_count = 0, odd_count = 0;


    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("No of Even: %d\n", even_count);
    printf("No of Odd: %d\n", odd_count);

    return 0;
}
