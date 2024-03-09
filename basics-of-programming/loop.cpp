#include <iostream>
using namespace std;

int main(){

    int num = 10;

    if(num > 0){
        cout<< "Positive" << endl;
    }
    else if(num < 0){
        cout<< "Negative" << endl;
    }
    else{
        cout << "zero" << endl;
    }
    return 0;
}

// even or odd

int main(){

int num = 7;

if(num%2 ==0){
    cout << "Even" << endl;
}
else{
    cout << "Odd" << endl;
    }
}

// loop statement

int main(){
    
    for(int i=1; i<=10; i=i+1 ){
        cout << i << endl;
    }
}
