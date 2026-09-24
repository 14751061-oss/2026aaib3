///week03-3
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(99);///把99塞到陣列後面
    a.push_back(88);
    a.push_back(77);
    for (int i=0; i<a.size(); i++) cout << a[i] <<" ";
    cout << "\n";

    a.push_back(88);
    a.push_back(77);
    for (int i=0; i<a.size(); i++) cout << a[i] <<" ";
    cout << "\n";
}
