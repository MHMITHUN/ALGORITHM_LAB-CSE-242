#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &vec){
    for(int i = 1;i<vec.size();i++){
        int j=i-1;
        int key = vec[i];

        while (j>=0 && vec[j]>key){
            vec[j+1]=vec[j];
            j--;
        }
        vec[j+1]=key;
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++ ){
        cin >> vec[i];
    }

    insertionSort(vec);
    cout << "Sorted grades: ";
    for(int i = 0; i < n; i++ ){
        cout << vec[i] << " ";
    }
    return 0;

}
