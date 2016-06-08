/*************************************************************************
	> File Name: class_mul_hin.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 Apr 2016 11:48:56 PM EDT
 ************************************************************************/

#include<iostream>
using namespace std;

class base1
{
    public:
    virtual void fun1(){cout << "base1_fun1" << endl;}
    virtual void fun2(){cout << "base1_fun2" << endl;}
};

class base2
{
    public:
    virtual void fun1(){cout << "base2_fun1" << endl;}
    virtual void fun2(){cout << "base2_fun2"<< endl;}
};

class chilern : public base1, public base2
{
    public:
    void  fun1(){cout << "chilern fun1" << endl;}
    virtual void fun_c(){cout << "chilern_c_fun" << endl;}
    void fun_un(){cout << "unique son's fun" << endl;}

    private:
    int a;
};

typedef void (*A)();
int main()
{
    A test;
    chilern a;
    a.fun_c();
    a.fun_un();
    
    base1* pt = new chilern();
   // pt->fun_c();
    //pt->a = 10;
    test = (A)*((int*)*(int*)(pt)+0);
    test();
    test = (A)*((int*)*(int*)(pt)+1);
    test();
    test = (A)*((int*)*(int*)(pt)+2);
    test();


    base2* pt1 = new chilern();
    //pt1->fun_un();
    test = (A)*((int*)*(int*)(pt1)+0);
    test();
    test = (A)*((int*)*(int*)(pt1)+1);
    test();
    test = (A)*((int*)*(int*)(pt1)+2);
    test();
    return 0;

}
