#include <iostream>
using namespace std;

void selectRoomType(int& roomType) {
    cout << endl;
    cout << "Select a Room Type:" << endl;
    cout << "1. single bed Room(5000 birr/night)" << endl;
    cout << "2. twin bed Room (7000 birr/night)" << endl;
    cout << "3. classic king  (10000 birr/night)" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> roomType;

    switch (roomType) {
        case 1:
            cout << endl << "You selected: single bed Room" << endl;
            break;
        case 2:
            cout << endl << "You selected: twin bed Room" << endl;
            break;
        case 3:
            cout << endl << "You selected: classic king" << endl;
            break;
        default:
            cout << "Invalid room type selected. Exiting..." << endl;
            exit(1);
    }
}

void collectBookingInfo(string& name, string& checkIn, string& checkOut, string& phone, string& paymentMethod) {
    cout << "Enter Check-in Date: ";
    cin >> checkIn;

    cout << "Enter Check-out Date: ";
    cin >> checkOut;

    cout << "Enter your first name: ";
    cin >> name;

    cout << "Enter your last name: ";
    cin >> name;

    cout << "Enter your phone number: ";
    cin >> phone;

    cout << "Enter payment method (cash or transfer): ";
    cin >> paymentMethod;
}

int main() {
    string name, checkIn, checkOut, phone, paymentMethod;
    int roomType;

    cout << " Welcome to group 5 Hotel Booking" << endl;
    cout << " free WIFI and breakfast " << endl;

    selectRoomType(roomType);
    collectBookingInfo(name, checkIn, checkOut, phone, paymentMethod);

    cout << endl << "Thank you for booking with us!" << endl;

    return 0;
}

