//
// Created by ld on 2023/11/30.
//
#include <iostream>
#include <string>

using namespace std;

class Game{
public:
    Game(string name){
        this->g_name = name;
        cout << "Game的构造" << this->g_name << endl;
    }

    ~Game(){
        cout << "game 的析构 " << endl;
    }

    string g_name;
};

class Phone{
public:
    Phone(string name){
        this->p_name = name;
        cout << "Phone的构造" << this->p_name << endl;
    }

    ~Phone(){
        cout << "phone 的析构 " << endl;
    }

    string p_name;
};

class Person{
public:
    Person(string name, string p_name, string g_name): per_name(name), phone(p_name), game(g_name){
        cout << "Person的构造" << endl;
    }

    ~Person(){
        cout << " person 的析构 " << endl;
    }

    void show(){
        cout << this->per_name << "拿着" << this->phone.p_name << "玩" << this->game.g_name << endl;
    }

    string per_name;
    Phone phone;  // 这里相当于 声明, 上面列表相当于 赋值
    Game game;
};

void test(){
    Person p("小明", "小米黑鲨", "王者荣耀");
    p.show();
}

int main(){
    test();
    return 0;
}


