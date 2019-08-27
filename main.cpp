#include <iostream>
#include<algorithm>

using namespace std;

int FindLargestKElement(int arr[], int arrSize, int largestN, int j){
    int maxValue;
    sort(arr, arr + arrSize);
    maxValue = max(arr[0], arr[arrSize - 1]);
    if(j == largestN){
        return 0;
    }
    else{
        cout << maxValue << " ";
        return FindLargestKElement(arr, arrSize - 1, largestN , j+1);
    }

}


int main()
{
    int arrSize;
    cout << "Enter Array: ";
    cin >> arrSize;

    int arr[arrSize], largestN;
    cout << "Enter Array Elements: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    cout << "Enter wanted Largest elements Number: ";
    cin >> largestN;

    FindLargestKElement(arr, arrSize, largestN, 0);

    return 0;
}
