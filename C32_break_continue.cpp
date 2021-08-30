/*
#include <iostream>
//#include 
using namespace std;
int main(){
    int i = 1;
    int sum = 0;
    // Các tạo một vòng lặp vô hạn
    while(true){
        sum += i;
        i += 1;
        // Vòng lặp sẽ thoát khi gặp điều kiện có break
        if(sum >= 100)
        {       
            break   ;  //BREAL  
        }       
    }
    cout << sum << endl;
}
*/
#include <iostream>
using namespace std;
int main (){
    int sum ;
	// Tổng các số chẵn từ 1 đến 100
    for (int i = 0; i <= 100; i++ )
    {
        if (i%2 != 0) 
        // nếu biến lặp là một số lẻ thì chuyển qua lần lặp tiếp theo
        {
            continue;
        }
        else // Nếu biến lặp là một số chẵn thì cộng vào biến sum
        sum += i;
    }
    cout << sum << endl;
}
