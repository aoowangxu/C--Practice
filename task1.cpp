/*************************************************************************
	> File Name: task1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 19 Mar 2016 11:18:43 AM EDT
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Man
{
    private:
        int age; 
        string name;
        char sex;
    public:
        int set_age(int num);
        int set_name(string name1);
        int set_sex(char sex1);
        virtual int speak();
};

class Woman
{
    public:
        virtual int  mo()
        {
            
        };
};

int Man::set_age(int num)
{
    age = num;
}
int Man::set_name(string name1)
{
    name = name1;
}
int Man::set_sex(char sex1)
{
    sex = sex1;
}
int Man::speak()
{
    cout << "i am a Man." << endl;
}


class Boy:public Man ,public Woman
{
    public:
        int speak();
};

int Boy::speak()
{
    cout << "i am a Boy"<< endl;
}

int main()
{
    Man *man = new Man;
    Man *man_boy = new Boy;
    man->speak();
    man_boy->speak();
    cout << sizeof(Boy);
    return 0;
}
