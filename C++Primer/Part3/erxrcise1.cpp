#include<iostream>
using namespace std;
const int INCH = 12;
int main()
{
    int height;
    cout << "请输入身高_";
    cin >> height;
    cout << "身高为" << height/INCH << "英尺" << height%INCH << "英寸" << endl;
    return 0;
}