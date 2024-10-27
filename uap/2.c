#include <stdio.h>

int main() {
    int N,largest;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("%d\n", largest);

    return 0;
}
