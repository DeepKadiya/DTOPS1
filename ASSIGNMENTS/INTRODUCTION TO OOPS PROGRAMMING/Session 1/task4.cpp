
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

class TaskList {
public:
    Task tasks[10];
    int count;

    TaskList() {
        count = 0;
    }

    void addTask(const char title[]) {
        if (count < 10) {
            int i = 0;
            while (title[i] != '\0' && i < 99) {
                tasks[count].title[i] = title[i];
                i++;
            }
            tasks[count].title[i] = '\0';
            count++;
        }
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < count) {
            tasks[index].markDone();
        }
    }

    void showTasks() {
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main() {
    TaskList list;

    list.addTask("Complete homework");
    list.addTask("Study C++");
    list.addTask("Finish project");

    list.markTaskDone(1);

    cout << "Task List:\n";
    list.showTasks();

    return 0;
}

