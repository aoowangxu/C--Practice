/*************************************************************************
	> File Name: p162.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2016 11:34:54 AM EDT
 ************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void process_prime(bool *p, int max_n, int n);

int main()
{
    int max_n = 0;
    cout << "calculate primes up to what number?";
    cin >> max_n;
    bool *p = new bool(max_n + 1);

    for(int i = 2; i < max_n; ++i)
    {
        p[i] = true;
    }

    for(int i = 0; i  < max_n; ++i)
    {
        if(p[i])
        {
            process_prime(p, max_n, i);
        }
    }

    cout << endl;

    delete [] p;
    cin.ignore();
    cin.ignore();
    return 0;
}

void process_prime(bool *p, int max_n, int n)
{
    cout<< n << "\t";
    for(int i = n + n; i <= max_n; i += n)
    {
        p[i] = false;
    }
}
