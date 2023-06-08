#include <iostream>
using namespace std;
int main()
{
    int cum = 10;      // in thiscase we are incr the val of cumm
    int f = cum;       // but cum val is stored in the f so if cumm++
    cum++;             // it will not effect the value of cum
    cout << f << endl; // so remain unchanged

    int a = 19; /*i have stored value of a in b and increasing
                   b++ so it will increse*/
    int b = a;
    b++;
    cout << b << endl;

    // pointers
    int num = 34; /*num is containing 34 and p is the pointer which is strong
     the address of num and then we are increasing
     the pointer on which is pointed so the value will increse*/
    int *p = &num;
    (*p)++;
    cout << *p << endl;

    int x = 1;
    int *ptr = &x;
    (*ptr)++;
    cout << *ptr << endl;

    int l = 10;
    /*value of l will remain unchanged but the value of m will change*/
    int m = 12;
    int *n = &m;
    (*n)++;
    cout << l << " " << m << endl;

    int q=89;
    int *w=&q;
    (*w)++;
    int e=9;
    int *o=&e;
    cout<<q<<"  "<<e<<endl;


    
}