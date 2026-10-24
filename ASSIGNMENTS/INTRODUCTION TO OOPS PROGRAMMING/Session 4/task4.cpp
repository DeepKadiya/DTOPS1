
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
};

class YouTuber : public SocialMediaUser {
public:
    char channelName[100];

    YouTuber(const char name[], int f, const char channel[])
        : SocialMediaUser(name, f) {
        int i = 0;
        while (channel[i] != '\0' && i < 99) {
            channelName[i] = channel[i];
            i++;
        }
        channelName[i] = '\0';
    }
};

class GamingYouTuber : public YouTuber {
public:
    GamingYouTuber(const char name[], int f, const char channel[])
        : YouTuber(name, f, channel) {
    }

    void streamGame(const char gameName[]) {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main() {
    GamingYouTuber g("Gamer123", 5000, "Gaming World");

    g.streamGame("Minecraft");

    return 0;
}

