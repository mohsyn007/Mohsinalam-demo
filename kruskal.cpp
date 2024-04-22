#include <bits/stdc++.h>
using namespace std;
void printgrap(vector<vector<int>>& arr) {
    for (const auto& row : arr) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}


bool compareLastColumn(const vector<int>& a, const vector<int>& b) {
    return a.back() < b.back();
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> grap(n, vector<int>(3));
cout<<"Graps input after sorting \n";
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> grap[i][j];
            cout<<grap[i][j]<<" ";
        }
        cout<<endl;
    }
    sort(grap.begin(), grap.end(), compareLastColumn);
    cout << "Sorted grap based on weight:" << endl;
    printgrap(grap);}