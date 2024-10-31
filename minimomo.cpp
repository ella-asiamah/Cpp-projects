#include <iostream>
#include <string>
using namespace std;

string shortcode;
int option1, option2;

int main() {
    cout << "#######B Welcome to MiniMoMo B#######" << endl;
    cout << "Please enter your shortcode: ";
    cin >> shortcode;

    if(shortcode == "*170#") {
        cout << "1. Transfer Money\n2. Momo Pay & PayBill\n3. Airtime & Bundles\n4. Allow Cashout\n5. Financial Services\n6. My Wallet" << endl;
        cout << "Please choose an option: ";
        cin >> option1;

        if (option1 == 1) {
            cout << "1. Momo User\n2. Non-Momo User\n3. SendWithCare\n4. Favourite\n5. Other Networks\n6. Bank Account" << endl;
            cout << "Please choose an option: ";
            cin >> option2;
        } else if (option1 == 2) {
            cout << "1. Momo Pay\n2. Pay Bill\n3. GHQR\n4. Fuels\n5. Ghana.gov\n" << endl;
            cout << "Please choose an option: ";
            cin >> option2;
        } else if (option1 >= 3 && option1 <= 6) {
            cout << "This option is under construction." << endl;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    } else {
        cout << "Invalid shortcode. Please try again." << endl;
    }

    return 0;
}
