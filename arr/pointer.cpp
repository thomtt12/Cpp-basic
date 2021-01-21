#include <iostream>
using namespace std;

int main(){
    // string food = "Pizza"; //biến food kiểu string
    // string* ptr = &food; //biến pointer, tên ptr, lưu địa chỉ của food
    // //value of Food
    // cout<<"food"<<"\n";
    // //address of food
    // cout<<&food<<"\n";
    // //memory address
    // cout<<ptr<<"\n";


    string food = "Pizza";
    string* ptr = &food;

    cout<<food<<"\n";
    cout<<&food<<"\n";
    // truy cập địa chỉ và output là giá trị pizza
    cout<<*ptr<<"\n";
    //change the value of the pointer
    *ptr = "Hamburger";
    cout<<*ptr <<"\n";
    cout<<food<<"\n";
    

    //

    return 0;
}
