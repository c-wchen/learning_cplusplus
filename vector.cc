#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_val(int val) {
    cout << val << endl;
}
int main() {
    vector<int> v_list;
    v_list.push_back(1);
    v_list.push_back(2);
    v_list.push_back(4);
    vector<int>::iterator iter = v_list.begin();
    while(iter != v_list.end()) {
        cout << *iter++ << endl;
    }
    for_each(v_list.begin(), v_list.end(), print_val);
    return 0;
}