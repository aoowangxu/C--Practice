/*************************************************************************
	> File Name: area.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2016 03:46:04 AM EDT
 ************************************************************************/

#include<iostream>
using namespace std;
#define PI 3.1415926

class Poor//类名大写；
{
public:
    Poor();
    Poor(int a){m_r = a;}
    float  mon_bar()
    {
        return (m_r + 3) * 2 * PI *35;
    }

    float mon_penl()
    {
        return ((m_r + 3) * (m_r +3) - m_r * m_r) * PI * 20;
    }


private:
    int m_r;//私有属性要加 m _;
};//类有分号；


int main()
{
    int r = 0;
    cout << "printf input r:"<<endl;
    cin >> r;
    Poor p1(r);
    cout<< "bar money " << p1.mon_bar()<< "  penl money   " << p1.mon_penl() << endl;
    return 0;


}
