#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create hash table to count frequency
    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++; // increment count of each element
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cout << "Enter number to check frequency: ";
        cin >> number;
        cout << "Frequency of " << number << " = " << hash[number] << endl;
    }

    return 0;
}
