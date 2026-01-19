#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = 8;

    int maxsum = arr[0];
    int currsum = arr[0];

    for (int i = 1; i < n; i++) {
        if (currsum < 0)
            currsum = arr[i];
        else
            currsum += arr[i];

        if (currsum > maxsum)
            maxsum = currsum;
    }

    cout << "Maximum sum = " << maxsum;
    return 0;
}

