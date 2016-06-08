/*************************************************************************
	> File Name: test2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 20 Mar 2016 07:11:50 AM EDT
 ************************************************************************/

#include<iostream>
using namespace std;
template <typename T>
T max(T a, T b)
{
    return a>b ? a : b;
}

int main()
{
    int a = 1;
    int b = 2;
    double c = 2.34;
    double d = 90.2;
    cout << max(a, b) << " "; //<< max(c, d);
    return 0;
}
