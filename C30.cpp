/* 
        Tìm hiểU về các hàm xử lý, thao tác với file, tập tin
*/
// (1): MỞ file 
/*
#include<iostream>
#include<fstream>
using namespace std;
int main (){
    fstream file1;
    file1.open("C15.cpp",ios::in | ios::binary);
    bool flag1 = file1.fail();
    if (flag1 == true)
        cout <<"KO ton tai";
    else 
        cout <<"Mo file thanh công .";
}*/
//  (2): MỞ file sau đó ghi dữ liệu và lại đóng lại. Mở file ra đọc lại dữ liệu
/*
#include <iostream>
#include <fstream>
using namespace std;
int main (){
    fstream file1;
    char a = 'a',b;
    // Mở file co sẵn để ghi
    file1.open("bai2.cpp",ios::out | ios::binary);
    //Ghi du lieu tu mang vao file
    cout<< "Ghi vao file \n";
    file1.write(&a, sizeof(a));
    file1.close();
    //Mo file để đọc
    file1.open("bai2.cpp",ios::in | ios::binary);
    // Đọc nội dung file vao mảng b
    cout << "doc du lieu vao bo nho\n";
    file1.read(&b,sizeof(b));
    cout<<"B = "<< b ;
    file1.close();

}*/
//  (3): Ghi và đọc dữ liệu không phải kiểu 'char', ta dùng (reinterpret_cast<type>(&biến),sizeof(biến))
/*
#include <fstream>
#include <iostream>
using namespace std;
int main (){
    fstream file2;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    
    file2.open("bai2.cpp",ios::out | ios::binary);

    cout <<" Ghi gi do di \n";
    file2.write(reinterpret_cast<char*>(&a),sizeof(a));
    file2.close();

    file2.open("bai2.cpp",ios::in | ios::binary);

    int b[10];
    
    cout << "Doc du lieu vao bo nho \n";
    file2.read(reinterpret_cast<char*>(&b), sizeof(b));
         cout <<"B = ";
    // Xuất dữ liệu từ mảng 
    for (int i=0; i<10;i++)
        cout << b[i]<<"  ";

    file2.close();

}*/
// (4): Đọc và ghi file văn bản
/*
#include <fstream>
#include <iostream>
using namespace std;
int main (){
    fstream f("bai2.cpp",ios::in);
    char a[80];
    while(!f.eof())
    {
        f >> a;
        cout << a <<"";
    }
    f.close();

}
*/

//      Ví dụ ghi file văn bản

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main (){
    fstream f;
    char a[100] = " Xin chao cac ban";
    f.open("bai2.cpp",ios::out);
    f << a;
    f.close();
}