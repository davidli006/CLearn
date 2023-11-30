//
// Created by ld on 2023/11/28.
//
#include <iostream>
#include <cstring>

using namespace std;

class Cube{
private:
    int L;
    int W;
    int H;

public:
    void init(int l, int w, int h){
        if ( l<0|| w<0 || h<0 ){
            return;
        }
        this->L = l;
        this->W = w;
        this->H = h;
    }

    int get_L(){
        return this->L;
    }

    int get_W(){
        return this->W;
    }

    int get_H(){
        return this->H;
    }

    int get_V(){
        return this->L * this->W * this->H;
    }

    int get_S(){
        return 2 * (this->L*this->W + this->L*this->H + this->W*this->H);
    }

    bool compare(Cube &c){
        return this->L == c.get_L() &&
               this->W == c.get_W() &&
               this->H == c.get_H();
    }

};

bool compare_cube(Cube &c1,Cube &c2){
    return c1.get_L()==c2.get_L() &&
           c1.get_W()==c2.get_W() &&
           c1.get_H()==c2.get_H();
}

void test(){
    Cube c1;
    c1.init(10, 20, 30);
    cout << c1.get_V() << endl;
    cout << c1.get_S() << endl;

    Cube c2;
    c2.init(10, 20, 30);
    cout << c2.compare(c1) << endl;

    Cube c3;
    c3.init(20, 30, 30);
    cout << compare_cube(c1, c3) << endl;
}

int main(){
    test();
    return 0;
}