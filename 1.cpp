#include <iostream>
using namespace std;

int main(){
    int l[10] = {10, 1, 24, 33, 44, 64, -74, 84, 94, 10};
    int min=10;
    for(int i = 0; i<10; i++){
        if(min > l[i]){
            min = l[i];
            
        }
         //cout<<min<<endl;;
    }
    cout<<min;
    return 0;
}
