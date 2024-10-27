#include <stdio.h>

int main() {
    int N, sum = 0;

    scanf("%d", &N);

    int arr[N]; // dec an aray of N int

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // storing values in N int 0 = *. 1 = *, 2 = * and so on.
    }

     for (int i = 0; i < N; i++) {
         sum += arr[i];
     }

     printf("%d\n", sum);

    // printf("%d\n", arr[0]);


    return 0;
}
