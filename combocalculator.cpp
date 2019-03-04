
//This program calculates permutations and combinations, given n and r
//I used this program for a test prep class I taught

#include<iostream>
using namespace std;

int fac (int n);

int main() {
    string command;
    int n;
    int r;
    int result;

    cout << "Enter 'p' for permutation or 'c' for combination: ";
    cin >> command;

    cout << "n: ";
    cin >> n;

    cout << "r: ";
    cin >> r;

    cout << "fac n: " << fac(n) << endl;
    cout << "fac r: " << fac(r) << endl;

    if (command == "c"){
        result = fac(n)/(fac(r) * fac((n-r)));
        cout << n << " combination " << r << " is equal to " << result <<endl;
    }
    else if (command == "p"){
        result = fac(n)/fac((n-r));
        cout << n << " permutation " << r << " is equal to " << result <<endl;
    }
    else {
        cout << "Invalid command. Try again!" << endl;
    }

    return 0;
}


int fac(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * fac(n-1);
    }
}
