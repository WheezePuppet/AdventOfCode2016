
#include<iostream>
#include<string>

using namespace std;

int main() {

    cout << "Hi T!" << endl;

    int side1, side2, side3;
    int total_possible = 0;

    while (!cin.eof()) {

        cin >> side1 >> side2 >> side3;
        if ((side1 + side2 <= side3) ||
            (side1 + side3 <= side2) ||
            (side2 + side3 <= side1)) {

            // empty if statement
            cout << "bad triangle! " << side1 << " " << side2 << " " <<
                side3 << endl;
        } else {
            total_possible++;
        }
    }

    cout << "There are " << total_possible << " possible triangles." << endl;
}
