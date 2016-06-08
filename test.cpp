/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 20 Mar 2016 02:26:35 AM EDT
 ************************************************************************/

#include<iostream>
using namespace std;

class Preson
{
    private:
    int age;

    public:
    Preson(int n)
    {
        age = n;
    }

    void print()
    {
        cout << age << endl;
    }
};

int main()
{
   // Preson p1;
    Preson p1(2);
    p1.print();
    return 0;

}
