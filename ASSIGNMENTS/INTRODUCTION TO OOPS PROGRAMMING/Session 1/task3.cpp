
#include <iostream>
using namespace std;

class Task {
public:
    char title[100];
    bool isDone;

    Task() {
        isDone = false;
    }

    void markDone() {
        isDone = true;
    }

    void display() {
        cout << title << " - ";
        if (isDone)
            cout << "DONE" << endl;
        else
            cout << "PENDING" << endl;
    }
};

int main() {
    Task task;

    cout << "Enter task title: ";
    cin.getline(task.title, 100);

    task.display();

    task.markDone();

    cout << "Updated task: ";
    task.display();

    return 0;
}

