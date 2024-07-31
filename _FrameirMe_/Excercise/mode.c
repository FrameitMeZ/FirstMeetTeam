#include <stdio.h>

int main() {
    int arr[10];
    int freq[10] = {0};
    int mode = -1, maxFreq = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        int current = arr[i];
        int count = 0;
        for (int j = 0; j < 10; j++) {
            if (arr[j] == current) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            mode = current;
        }
    }

    if (maxFreq > 1) {
        printf("Mode = %d\n", mode);
     } else {
         printf("No mode\n");
     }

    return 0;
}
