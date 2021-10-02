#include <iostream>
using namespace std;
// 1. 全局函数做有元
class Room {
friend void goodFriend(Room &room);
public:
    Room() {
        this->name = "wchen";
    }
private:
    string name;
};
// 有元可以访问对象的私有属性
void goodFriend(Room &room) {
    cout << room.name << endl;
}


int main() {
    Room room;
    goodFriend(room);
    return 0;
}