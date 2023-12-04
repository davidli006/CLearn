//
// Created by ld on 2023/12/4.
//
#include <iostream>
#include <string>

using namespace std;


class Building;

class GoodGay{
public:
    GoodGay(string hall,string bedroom);
    void visit();
    Building *b;

};

class Building{
public:
    friend class GoodGay;
    Building(string hall, string bedroom){
      this->hall = hall;
      this->bedroom = bedroom;
    };
    string hall;
private:
    string bedroom;
};

GoodGay::GoodGay(std::string hall, std::string bedroom) {
    this->b = new Building(hall, bedroom);
}

void GoodGay::visit() {
    cout << this->b->hall << " " << this->b->bedroom << endl;
}

int main(){

    GoodGay gb("凌霄宝殿", "寝宫");
    gb.visit();

    return 0;
}
