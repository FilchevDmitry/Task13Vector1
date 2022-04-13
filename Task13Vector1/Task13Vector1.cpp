#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> num;
    int cou;
    int del = 0;
    cout << "Enter the length :";
    cin >> cou;
    for (int i = 0; i < cou; ++i) {
        int temp = 0;
        cout << "Input numbers " << i + 1 << "-";
        cin >> temp;
        num.push_back(temp);
    }
    cout << "Enter delete number =";
    cin >> del;
    for (int i = 0; i < num.size(); i++)
    {
        if (num.at(i) == del) {
            num.erase(num.begin() + i);
            --i;
        }
    }
    for (int i = 0; i < num.size(); ++i) {
        cout << num[i] << " ";
    }
    return 0;
}