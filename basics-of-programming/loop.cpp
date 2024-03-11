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

//patterns

#include <iostream>
using namespace std;

int main(){

    //outer loop -> rows
    for(int i=0; i<4; i=i+1){

        //print 4 stars
        for(int j=0; j<4; j=j+1){
            cout << " * ";
        }
        cout << endl;
    }
}

// rectangle pattern

#include <iostream>
using namespace std;

int main() {

    //outer loop -> rows
    for( int i=0; i<3; i=i+1) {
       //for each row, print 5 star
       //inner loop -> print 5 stars

       for(int j=0; j<5; j=j+1){
        cout << " * ";
       }
       cout << endl;
    }
 }

 // hollow rectangle

 #include <iostream>
 using namespace std;

 int main() {

  //outer loop
 for(int row=0; row<5; row=row+1){
    //inner loop
    for(int col=0; col<5; col=col+1){
        //if zeroth pr last row, then print star
        if(row == 0 || row == 4){
            cout << "* ";
        }
        else{
            if(col == 0 || col == 4){
                cout << "  ";
            }
        }
    }
    cout << endl;
 }
 }



