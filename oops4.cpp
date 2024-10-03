#include <iostream>
using namespace std;
int MaxSpecialSum(int arr[], int n) {
    int maxSum = -1000;
    for (int i = 0; i < n; i++) {
        int SpecialSum = 0;
        int group = 1;
        int j = i;
        while (j + group <= n) {
            for (int k = 0; k < group; k++) {
                SpecialSum += arr[j + k];
            }
            j += group;
            group++;
        }
        if (SpecialSum > maxSum) {
            maxSum = SpecialSum;
        }
    }

    return maxSum;
}

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result = MaxSpecialSum(arr, n);
    cout<<"The maximum special sum is: "<<result<<"\n";
    return 0;
}
