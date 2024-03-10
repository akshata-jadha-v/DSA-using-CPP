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

// loop statement1

int main(){

    for(int i=1; i<=10; i=i+1 ){
        cout << i << endl;
    }
}

//loop statement2

int main(){

    for(int i=10; i>=0; i= i-3){
        cout << i << endl;
    }
}

// single loop

int main(){

    for(int i=0; i<5; i=i+1){
        cout << "A" << " ";
    }
    cout << endl;
}

// nested loop

int main(){

    for(int i=0; i<5; i=i+1){
        cout << "Outer loop" << i << endl;
        for(int j=0; j<5; j=j+1){
            cout << "inner loop" << j << endl;
        }
    }
}



