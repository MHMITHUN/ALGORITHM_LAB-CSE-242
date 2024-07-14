#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < vec.size(); j++) {
            if (vec[j] > vec[mini]) {
                mini = j;
            }
        }
        if (mini != i) {
            swap(vec[mini], vec[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    selectionSort(vec);
    cout << "Sorted salaries: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    return 0;
}
