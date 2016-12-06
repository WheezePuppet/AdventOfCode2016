
#include<iostream>

using namespace std;

int abs(int x) {
    if (x > 0) {
        return x;
    } else {
        return -x;
    }
}

int main() {
    cout << "It's TJ and Daddy!" << endl;

    char current_facing = 'N';   // 'N'-north, 'W'-west, 'S'-east, 'E'-east
    int step_distance;
    int curr_distance_east = 0;
    int curr_distance_north = 0;
    char turning_direction;

    while (!cin.eof()) {
        cin >> turning_direction;
        if (turning_direction == 'L') {
            switch (current_facing) {
                case 'N':
                    current_facing = 'W';
                    break;
                case 'W':
                    current_facing = 'S';
                    break;
                case 'S':
                    current_facing = 'E';
                    break;
                case 'E':
                    current_facing = 'N';
                    break;
                default:
                    cout << "Waaaaaaaaaaaaaaat???" << endl;
                    return 13;
            }
        } else {
            switch (current_facing) {
                case 'N':
                    current_facing = 'E';
                    break;
                case 'W':
                    current_facing = 'N';
                    break;
                case 'S':
                    current_facing = 'W';
                    break;
                case 'E':
                    current_facing = 'S';
                    break;
                default:
                    cout << "Waaaaaaaaaaaaaaat???" << endl;
                    return 14;
            }
        }

        cin >> step_distance;
        switch (current_facing) {
            case 'N':
                curr_distance_north += step_distance;            
                break;
            case 'W':
                curr_distance_east -= step_distance;            
                break;
            case 'S':
                curr_distance_north -= step_distance;            
                break;
            case 'E':
                curr_distance_east += step_distance;            
                break;
            default:
                cout << "Waaaaaaaaaaaaaaat???" << endl;
                return 15;
        }

        char dummy;
        cin >> dummy; // throws away ","
    }

    int total_distance;
    total_distance = abs(curr_distance_north) + abs(curr_distance_east);
    cout << "curr_distance_north=" << curr_distance_north << endl;
    cout << "curr_distance_east=" << curr_distance_east << endl;
    cout << "You are " << total_distance << " squares away from the start." 
        << endl;
}
