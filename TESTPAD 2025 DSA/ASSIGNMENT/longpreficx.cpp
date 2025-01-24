#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(string strs[], int n) {
    string prefix = strs[0];
    for (int i = 0; i < n; i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);
        }
    }
    return prefix;
}


int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string strs[n];
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs, n);
    if (result.empty())
        cout << "No common prefix." << endl;
    else
        cout << "Longest common prefix: " << result << endl;

    return 0;
}

