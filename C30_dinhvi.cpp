#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream f("bai2.cpp",ios::in);
    char a[80];
    // Đọc từ byte thứ 2
    // f.seekg(2);
    while(!f.eof())
    {
        // Nhảy 2 byte từ vị trí hiệN tại
         f.seekg(2,ios::cur);
        f >> a;
        cout <<" Gia tri :"<<a ;
        cout << endl;
        cout << "Vi tri: "<< f.tellg();
        cout<< endl;
    }
    f.close();
}
