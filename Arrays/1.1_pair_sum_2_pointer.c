#include <stdio.h>

int main() {
    int a[] = {1, 2, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 5;

    int i = 0, j = n - 1;
    int pairs = 0;

    while (i < j) {
        int sum = a[i] + a[j];

        if (sum < target) {
            i++;  // need bigger sum
        }
        else if (sum > target) {
            j--;  // need smaller sum
        }
        else { // sum == target
            if (a[i] == a[j]) {
                // all elements between i and j are same
                int len = j - i + 1;
                pairs += (len * (len - 1)) / 2; // choose any 2
                break; // counted all, exit
            } 
            else {
                // count duplicates on left
                int leftVal = a[i];
                int count_left = 0;
                while (i <= j && a[i] == leftVal) {
                    count_left++;
                    i++;
                }

                // count duplicates on right
                int rightVal = a[j];
                int count_right = 0;
                while (j >= i && a[j] == rightVal) {
                    count_right++;
                    j--;
                }

                // multiply counts to get pairs
                pairs += count_left * count_right;
            }
        }
    }

    printf("Total pairs: %d\n", pairs);
    return 0;
}
