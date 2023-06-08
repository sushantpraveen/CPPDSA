#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[0];

    char ch[6] = "abcde";
    char *c=&ch[0];
    cout<<c<<endl;
    //cout << arr << endl;
    //cout << ch << endl;
    //cout << p << endl;
}
