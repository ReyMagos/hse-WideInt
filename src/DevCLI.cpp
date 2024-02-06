import WideInt;

#include <iostream>
#include <format>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 1) {
        cout << "WideInt testing CLI:\n"
                "  --sum <a> <b>    Evaluate sum a + b" << endl;
        return 0;
    }

    string command = static_cast<string>(argv[1]);
    if (command == "--sum") {
        if (argc < 4) {
            cerr << "--sum <a> <b>: Not enough arguments" << endl;
            return 1;
        }

        WideInt a(argv[2]);
        WideInt b(argv[3]);

        cout << (a + b) << endl;
    } else {
        cerr << format("Unknown token: {}", command) << endl;
        return 1;
    }

    return 0;
}