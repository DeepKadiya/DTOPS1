#include <iostream>
using namespace std;

class UserProfile {
private:
    long long phoneNumber;

public:
    void setPhoneNumber(long long number) {
        phoneNumber = number;
    }

    long long getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    UserProfile user;

    user.setPhoneNumber(9876543210LL);

    cout << "Phone Number: " << user.getPhoneNumber() << endl;

    return 0;
}
