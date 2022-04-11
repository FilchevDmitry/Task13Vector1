#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> num;
    int cou = 0;
    cout << "Enter the length :";
    cin >> cou;
    for (int i = 0; i < cou; ++i) {
        int temp = 0;
        cout << "Input numbers " << i + 1 << "-";
        cin >> temp;
        num.push_back(temp);
    }
    for (int i = 0; i < num.size(); ++i) {
        cout << num[i] << " ";
    }
    system("pause");
    return 0;
}