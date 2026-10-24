
#include <iostream>
using namespace std;

class SocialMediaUser {
public:
    char username[100];
    int followers;

    SocialMediaUser(const char name[], int f) {
        int i = 0;

        while (name[i] != '\0' && i < 99) {
            username[i] = name[i];
            i++;
        }
        username[i] = '\0';

        followers = f;
    }

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

int main() {
    SocialMediaUser user("coder123", 1500);

    user.displayProfile();

    return 0;
}

