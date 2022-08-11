#include <iostream>
#include <thread>

using namespace std;

int main() {
    new thread([] () {
        while(true) {
            char * p = new char[16384];
        }
    });
    
    while(true) {
        cout << "\x1B[2J\x1B[H" << endl;
        system("free -m");
        this_thread::sleep_for(chrono::milliseconds(1000));
    }

    return 0;
}
