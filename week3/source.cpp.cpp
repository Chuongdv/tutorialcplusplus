/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <function>

using namespace std;

template<typename T>
class Less_than {
    const T val; 
    public:
            Less_than(const T& v) :val(v) { }
            bool operator()(const T& x) const { return x<val; } 
}


template<typename C, typename P>
int count(const C& c, P pred)
{
    int cnt = 0;
    for (const auto& x : c)
    if (pred(x))
        ++cnt;
    return cnt;
}

void f(const Vector<int>& vec, const list<string>& lst, int x, const string& s)
{
    cout << "number of values less than " << x
        << ": " << count(vec,Less_than<int>{x})
        << '\n';
    cout << "number of values less than " << s
         << ": " << count(lst,Less_than<string>{s})
         << '\n';
}

//lambda

void f(const Vector<int>& vec, const list<string>& lst, int x, const string& s)
{
    cout << "number of values less than " << x
         << ": " << count(vec,[&](int a){ return a<x; })
        << '\n';
    cout << "number of values less than " << s
        << ": " << count(lst,[&](const string& a){ return a<s; })
        << '\n';
}



int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    
    [&a, b, c](string s)->int{
      a++;
      b++; // compiler error
      cout << s;
      return c;
    }("hello");
    cout << a << endl; // a = 2
    cout << b << endl;
    cout << c << endl;
    
    auto rev = [&rev](char∗ b, char∗ e){
        if (1<e−b) { 
            swap(∗b,∗−−e); rev(++b,e); 
            
        } 
    };
    
    function<void(char∗ b, char∗ e)> rev = [&](char∗ b, char∗ e) { 
        if (1<e−b) { 
            swap(∗b,∗−−e); rev(++b,e); 
            
        } 
        
    };
    
    return 0;
}
