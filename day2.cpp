
#include<iostream>
#include<string>

using namespace std;

int main() {

    cout << "Hi T!" << endl;

    int curr_num = 5;
    string line;
    string code;

    while (!cin.eof()) {

        getline(cin, line);

        for (int i=0; i<line.length(); i++) {
            switch (line[i]) {
                case 'U':
                    switch (curr_num) {
                        case 1:
                        case 2:
                        case 3:
                            break;
                        default:
                            curr_num -= 3;
                    }
                    break;
                case 'D':
                    switch (curr_num) {
                        case 7:
                        case 8:
                        case 9:
                            break;
                        default:
                            curr_num += 3;
                    }
                    break;
                case 'L':
                    switch (curr_num) {
                        case 1:
                        case 4:
                        case 7:
                            break;
                        default:
                            curr_num -= 1;
                    }
                    break;
                case 'R':
                    switch (curr_num) {
                        case 3:
                        case 6:
                        case 9:
                            break;
                        default:
                            curr_num += 1;
                    }
                    break;
            }
        }
        code += '0' + curr_num;
    }
    cout << "The code is: " << code << endl;
    
}
