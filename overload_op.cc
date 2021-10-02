#include <iostream>

using namespace std;

class Compute {
    friend ostream& operator<<(ostream &stream, Compute &c);
    string cpu = "intel x64";
    string gpu = "amd";
public:
    void operator() (string val) {
        cout << val << endl;
    }
};

ostream& operator<<(ostream &stream, Compute &c) {
    stream << c.cpu << " " << c.gpu << endl;
    return stream;  
}

int main() {
    Compute c1;
    cout << c1;
    c1("hello world");
    return 0;
}