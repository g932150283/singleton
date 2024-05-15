#include<bits/stdc++.h>

using namespace std;


class Singletonlazy
{
private:
    /* data */
    Singletonlazy() = default;
    Singletonlazy(const Singletonlazy& s) = delete;
    Singletonlazy& operator=(const Singletonlazy& s) = delete;
public:
    static Singletonlazy& getInstance(){
        static Singletonlazy value;
        return value;
    }

    void Print(){
        cout << this << endl;
    }

};

int main(){
    Singletonlazy &s1 = Singletonlazy::getInstance();
    cout << &s1 << endl;
    s1.Print();
    Singletonlazy &s2 = Singletonlazy::getInstance();
    cout << &s2 << endl;
    s2.Print();

    return 0;

}
