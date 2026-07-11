#include<iostream>
using namespace std;
void welcome() {
    cout << "================\n";
    cout << " Welcome Vinit.\n";
    cout << "================\n\n";
}

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        welcome();
    }
    return 0;
}