#include <iostream>

using namespace std;

class FeiFei{
public:
    int age;
    char name[128];

    static FeiFei * instance(){
        return single;
    }

private:
    static FeiFei * single;
    FeiFei(){};
    FeiFei(const FeiFei &f){};
};

FeiFei * FeiFei::single = new FeiFei;

void test(){
    FeiFei *p = FeiFei::instance();
    p->age = 18;
    cout << p->age << endl;

}

int main(){
    test();
    return 0;
}

