/*
    KIểu dữ liệu do người dùng tự định nghĩa: struct
    link:https://www.youtube.com/watch?v=nMScHG7hM9Y
    https://www.youtube.com/watch?v=VmEqXiAzgDQ
                NỘi DUNG BÀi HọC
    1. Tìm hiểu về struct, gán, xuất và nhập hàm struct
    2. Con trỏ trong struct, cú pháp con trỏ trong struct
    3. Truyền tham trị hoặc truyển tham biến
    4. Cấu trúc lồng nhau
    
*/
#include <iostream>
 using namespace std;

struct Car{
        char owner[100]; /* Chủ sở hữu */
        char brand[100]; /* Thương hiệu*/
        char color[100]; /* Màu */
        int weight = 2000;      /* trọng lượng */
        int width;      /* chiều rộng */
        int height;     /* chiều cao */
};
    struct Cat{
        char name[100];
        int age;
        float weight;
        char color [100];
        char eyesColor[100];
};
 struct student{
        char ID[20];
        char name[100];
        int age;
        float mark; /*mark là điểm */
        char address[100]; /* Địa chỉ */
        Car car;     /* Cấu trúc lồng nhau */
        Cat pet;    /* Cấu trúc lồng nhau */
    };

void getInfo(student& s){  /* truyền kiểu tham biến */
    cout <<"Enter name: ";
    gets(s.name);
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter address: ";
    cin.ignore();
    gets(s.address);
    cout <<"Enter mark: ";
    cin >> s.mark;    
};
void getInfo2(student* s){   
    cout <<"Input2 \nEnter name: ";
    gets(s->name);
    cout << "Enter age: ";
    cin >> s->age;
    cout << "Enter address: ";
    cin.ignore(); /* Hàm cin.ignore để tách hàm trên với hàm char ở dưới */
    gets(s->address);
    cout <<"Enter mark: ";
    cin >> s->mark;    
};
void showInfo(student s){ 
    cout <<" Student Info \n";
    cout <<"Name: "<<s.name;
    cout <<"\nage: "<<s.age;
    cout <<"\nAddress: "<<s.address;
    cout <<"\nMark: "<<s.mark;
};
void showInfo2(student* s){
    cout <<" Student Info 2 \n";
    cout <<"Name: "<<(*s).name;
    cout <<"\nage: "<<s->age;
    cout <<"\nAddress: "<<s->address;
    cout <<"\nMark: "<<s->mark;
/* Có thể thay cú pháp s->biến = cú pháp (*s).biến */
}
int main (){
   student s;
   student* st ;
   getInfo(s);
   st = &s;
  
   showInfo2(st);
   //delete st;

   cout<<"\nKL car:"<< s.car.weight;/* Ví dụ: cũng có thể gọi các thông tin ở trong hàm main*/
    return 0;
}

