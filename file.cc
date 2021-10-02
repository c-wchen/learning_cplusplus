#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Person {
public:
    string name;
    int age;
    string  sex;
    void show() {
        cout << "{ name = " << name << ", age = " << age << ", sex = " << sex << " }" << endl;
    }
};

void test_write() {
    fstream fs;
    fs.open("./file/test.txt", ios::out);
    fs << "第一行" << endl;
    fs.close();
}

void test_read() {
    string line;
    fstream fs;
    fs.open("./file/test.txt", ios::in);
    while (!fs.eof()) {
        fs >> line;
        cout << "== " << line << endl;
    }
    fs.close(); 
}

void test_write_obj() {
    Person *p = new Person;
    p->name = "wchen";
    p->age = 21;
    p->sex = "1";
    ofstream ofs("./file/person.txt", ios::out | ios::binary);
    ofs.write((const char *)p, sizeof(Person));
    ofs.close();
}

void test_read_obj() {
    Person p;
    ifstream ifs;
    ifs.open("./file/person.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "打开失败" << endl;
        return;
    }
    // TODO: 段错误
    ifs.read((char *)&p, sizeof(p));
    p.show();
    ifs.close();
}



int main() {
    test_read_obj();
    return 0;
}