
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

class YouTuber : public SocialMediaUser {
public:
    char channelName[100];

    YouTuber(const char username[], int followers,
             const char channel[]) 
        : SocialMediaUser(username, followers) {
        int i = 0;
        while (channel[i] != '\0' && i < 99) {
            channelName[i] = channel[i];
            i++;
        }
        channelName[i] = '\0';
    }

    void uploadVideo(const char title[]) {
        cout << "Video " << title
             << " uploaded to " << channelName << endl;
    }
};

int main() {
    YouTuber y("coder123", 1500, "Code World");

    y.displayProfile();
    y.uploadVideo("Learn C++");

    return 0;
}

