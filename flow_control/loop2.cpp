#include <iostream>
using namespace std;

int main(){

    // for (int i =0; i<5; i++){
    //     cout<<"Yes"<<"\n";
    // }

    // for (int i = 0; i<10; i++){
    //     if (i==4){
    //         break;
    //     }
    //     cout<<i<<"\n";
    // }

    // for (int i = 0; i<10; i++){
    //     if (i==4){
    //         continue;
    //     }
    //     cout<<i<<"\n";
    // }

    int i =0;
    // while (i<10){
    //     cout<<i<<"\n";
    //     i++;
    //     if (i==4){
    //         break;
    //     }
    // }

    while(i<10){
        if (i==4){
            i++;
            continue;
        }
        cout<<i<<"\n";
        i++;
        
    }
    return 0;
}