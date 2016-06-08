/*************************************************************************
	> File Name: test1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 20 Mar 2016 03:48:42 AM EDT
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Card
{
    private:
    string name;
    int age;
    char sex;
    public:
    int set_name(string name1)
    {
        name = name1;
        return 0;
    }

    int set_age(int n)
    {
        age = n;
        return 0;
    }

    int set_sex(char s)
    {
        sex = s;
    }

    Card()
    {
        name = "";
        age = 0;
        sex = ' ';
    }

    Card(string na, int a, char ch)
    {
        name = na;
        age = a;
        sex = ch;
    }

    Card(string na)//委托构造函数怎么会输出错误！！！！！！！！！！！！
    {
        Card(na,0,' ');
    }

    Card(int n)
    {
        Card(NULL,n,' ');
    }
    Card(char ch)
    {
        Card(NULL,0,ch);
    }

    void show()
    {
        cout << name << ' ' << age << " " << sex<< endl;

    }

    friend ostream& operator<< (ostream &out, Card &cd)
    {
        out << cd.name << cd.age << cd.sex<< endl;
        return out;

    }


    ~Card()
    {
        cout << "~CARD!"<<endl;
    }

};
int main()
{
    //Card me("wangxu", 23,'m');
   // Card jinwei("jinwei", 22, 'm');
    Card haojie("haojie");
    haojie.show();
 //   Card tongwei(24);
    //    tongwei.show();
    //Card wen = "wen";
    //Card preson = me;
    //me.show();
   // jinwei.show();
  //  preson.show();
    cout << haojie << endl;
    return 0;

}
