//cin with string 
#include <iostream> 
#include <string>
#include <sstream>
using namespace std;


int main(){
    //cin với string
    // string mystring;
    // cout<<"what is ur name?";
    // getline(cin, mystring);
    // cout<<"Hello"<<mystring<<".\n";


    //string stream 
    string mystr;
    float price =0;
    int quantity =0;

    cout<<"Enter price: ";
    getline (cin, mystr);
    stringstream(mystr)>>price;
    
    cout<<"Enter quantity: ";
    getline (cin, mystr);
    stringstream(mystr)>>quantity;

    return 0;
}