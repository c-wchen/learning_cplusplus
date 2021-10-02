#include <iostream>
using namespace std;

struct StudentA {
    string name;
    int age;
    // 可以只定义不赋值
} g_student_a = {"chen", 21}, g_student_a_arr[] = {{"c12", 12}, {"c13", 13}};

struct StudentB {
    string name;
    int age;
};
// 在C中必须在定义结构体上添加struct, struct StudentB g_student_b
StudentB g_student_b = {"wchen", 22};


int main() {
    cout << g_student_a.name << "  " << g_student_a.age << endl;
    cout << g_student_b.name << "  " << g_student_b.age << endl;
    // 不赋初值
    StudentA stu_a;
    stu_a.name = "cwangcing";
    stu_a.age = 23;
    cout << stu_a.name << "  " << stu_a.age << endl;
    // 指针方式
    //StudentA *stu_ptra = new StudentA();
    
    return 0;
}