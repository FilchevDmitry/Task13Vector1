#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> num1;
    vector<int>num2;
    int cou;
    int del = 0;
    cout << "Enter the length :";
    cin >> cou;
    for (int i = 0; i < cou; ++i) {
        int temp = 0;
        cout << "Input numbers " << i + 1 << "-";
        cin >> temp;
        num1.push_back(temp);
    }
    cout << "Enter delete number =";
    cin >> del;
    for (int i = 0; i < cou; i++)
    {
        if (num1.at(i) != del)
            num2.push_back(num1.at(i));
    }
    for (int i = 0; i < num2.size(); ++i) {
        cout << num2[i] << " ";
    }

    return 0;
}