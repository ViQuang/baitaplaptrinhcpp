/* 
   Bài 28: Kiểu enum và union trong C/C++ 
*/
/*
//      (1) enum 
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
    enum Color {
        black, 
        blue,
        cyan,    // lục 
        purple,  // tím 
        white,
        yellow,     // vàng 
        green,
        red
    };
    Color color1;
    color1 = Color(2);
    if(color1 == cyan) color1 = red;
    cout << color1;
} 

//      (2) union
#include<iostream>
using namespace std;
union realmeQ{
    char name;
    char cpu;
    int ram ;
    int rom;
    int nsx;
};
int main (){
    realmeQ q;
    q.ram = 4;
    q.rom = 64;
    q.nsx = 12;
    cout << "Thong tin may realme Q :\n"<<q.ram<<"/"<<q.rom<<"\n"<<q.nsx;

}*/
// So sanh voi struct
#include<iostream>
using namespace std;
struct realmeQ{        //Struct
    char name;
    char cpu;
    int ram ;
    int rom;
    int nsx;
};
int main (){
    realmeQ q;
    q.ram = 4;
    q.rom = 64;
    q.nsx = 12;
    cout << "Thong tin may realme Q :\n"<<q.ram<<"/"<<q.rom<<"\n"<<q.nsx;

}
