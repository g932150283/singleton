#include <bits/stdc++.h>

using namespace std;

class Singletonhungry
{
private:
    /* data */
    Singletonhungry() {}
    ~Singletonhungry()
    {
        if (instance)
        {
            delete instance;
            instance = nullptr;
        }
    }
    static Singletonhungry *instance;

public:
    static Singletonhungry *GetInstance()
    {
        return instance;
    }

    void Print()
    {
        cout << this << endl;
    }
};

// 静态成员变量需要在类外进行定义和初始化
Singletonhungry *Singletonhungry::instance = new Singletonhungry();

int main()
{
    Singletonhungry *s1 = Singletonhungry::GetInstance();
    cout << s1 << endl;
    s1->Print();
    Singletonhungry *s2 = Singletonhungry::GetInstance();
    cout << s2 << endl;
    s2->Print();
}
