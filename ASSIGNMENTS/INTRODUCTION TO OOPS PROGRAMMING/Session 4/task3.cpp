
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

class Podcaster : public SocialMediaUser {
public:
    char podcastName[100];

    Podcaster(const char username[], int followers,
              const char podcast[])
        : SocialMediaUser(username, followers) {
        int i = 0;
        while (podcast[i] != '\0' && i < 99) {
            podcastName[i] = podcast[i];
            i++;
        }
        podcastName[i] = '\0';
    }

    void publishEpisode(const char episodeTitle[]) {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster p("audio_creator", 2500, "Tech Talks");

    p.displayProfile();
    p.publishEpisode("Future of AI");

    return 0;
}

