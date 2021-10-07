#include <iostream>
using namespace std;

int main() {
    char* arr[10];
    char *p = arr[1];
    
    cout << "*arr size of " << sizeof(arr) << endl;
    cout << "p size of " << sizeof(p) << endl; 

    return 0;
}