//week11-3.cpp
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["���|��"] = 12750300;
    m["������"] = 12750794;

    cout << "���|�����Ǹ��O:" << m["���|��"] << endl;
    cout << "�����ڪ��Ǹ��O:" << m["������"] << endl;
}
