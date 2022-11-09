#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows,cols;
    cin >> rows >> cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
    }
    int count = 0;
    int total = rows*cols;
    int sRow , sCol = 0;
    int eRow = rows-1;
    int eCol = cols-1;
    vector<int> ans;
    while (count < total){
        for(int index = sCol ; index < eCol ; index++){
            ans.push_back(arr[sRow][index]);
            count++;
        }
        sRow++;
        for(int index = sRow ; index < eRow ; index++){
            ans.push_back(arr[index][eCol]);
            count++;
        }
        eCol--;
        for(int index = eCol ; index >= sCol ; index++){
            ans.push_back(arr[eRow][index]);
            count++;
        }
        eRow--;
        for(int index = eRow ; index >= sRow ; index++){
            ans.push_back(arr[index][sCol]);
            count++;
        }
        sCol++;
    }
    cout << "Array is: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Spiral Print is: ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}