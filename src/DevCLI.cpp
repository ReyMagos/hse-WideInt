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

    for (int i = 1; i < argc; ++i) {
        string command = static_cast<string>(argv[1]);
        if (command == "--sum") {
            if (i + 2 >= argc) {
                cerr << "--sum <a> <b>: Not enough arguments" << endl;
                return 1;
            }
            i += 2;

            WideInt a(argv[2]);
            WideInt b(argv[3]);
            cout << WideInt::debug_stream << (a + b) << endl;
        } else {
            cerr << format("Unknown token: {}", command) << endl;
            return 1;
        }
    }

    return 0;
}