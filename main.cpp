#include <iostream>
using namespace std;

int main() {
    int user_input;
    int amount = 0;
    int count = 0;

    while (true) {
        cout << "\n";
        cout << "VEHICLE PARKING MANAGEMENT SYSTEM" << endl;
        cout << "\n";
        cout << "ENTER THE NUMBER ACCORDINGLY TO PARK THE LISTED VEHICLES" << endl;
        cout << "\n";
        cout << "PRESS 1 : For AutoRickshaw" << endl;
        cout << "PRESS 2 : For Car" << endl;
        cout << "PRESS 3 : For Bus" << endl;
        cout << "PRESS 4 : TO Show Record" << endl;
        cout << "PRESS 5 : To Delete Record" << endl;
        cout << "PRESS 6 : To Exit" << endl;

        cin >> user_input;

        if (user_input == 1) {
            count = count + 1;
            amount = amount + 100;
        } else if (user_input == 2) {
            amount = amount + 200;
            count = count + 1;
        } else if (user_input == 3) {
            amount = amount + 300;
            count = count + 1;
        } else if (user_input == 4) {
            cout << "TOTAL AMOUNT IS : " << " " << amount << endl;
            cout << "TOTAL NUMBER OF VEHICLES PARKED : " << " " << count << endl;
        } else if (user_input == 5) {
            amount = 0; // Delete the records
            count = 0;
        } else if (user_input == 6) {
            // Exit the program
            break;
        } else {
            cout << "ENTER A VALID NUMBER WHICH CAN BE MAPPED WITH THE ABOVE OPERATIONS!" << endl;
        }
cout<<amount<<endl;
cout<<count<<endl;
    }

    return 0;
}