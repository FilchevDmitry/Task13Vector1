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
        cout << "Input numbers" << i + 1 << " - ";
        cin >> temp;
        num.push_back(temp);
    }
    cout << "Enter delete number =";
    cin >> del;
    int sp = 0;
    for (int i = 0; i < num.size(); i++)
    {
        num[sp] = num[i];
        if (num[i] == del) {
            continue;
        }
        sp++;
    }
    sp = num.size() - sp;
    while (sp--)
        num.pop_back();
    for (int i = 0; i < num.size(); ++i) {
        cout << num[i] << " ";
    }

    return 0;
}