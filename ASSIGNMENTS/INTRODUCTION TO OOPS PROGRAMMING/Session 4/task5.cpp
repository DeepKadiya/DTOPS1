
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
    YouTuber(const char name[], int f)
        : SocialMediaUser(name, f) {
    }
};

class Podcaster : public SocialMediaUser {
public:
    Podcaster(const char name[], int f)
        : SocialMediaUser(name, f) {
    }
};

class InstagramInfluencer : public SocialMediaUser {
public:
    InstagramInfluencer(const char name[], int f)
        : SocialMediaUser(name, f) {
    }

    void postStory(const char storyTitle[]) {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer user("InstaStar", 10000);

    user.displayProfile();
    user.postStory("My College Life");

    return 0;
}

