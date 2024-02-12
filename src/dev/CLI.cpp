import WideInt;

#include <iostream>
#include <format>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 1) {
        cout << "WideInt testing CLI:\n"
                "  --sum <a> <b>       Evaluate addition a + b\n"
                "  --multiply <a> <b>  Evaluate multiplication a * b" << endl;
        return 0;
    }

    for (int i = 1; i < argc; ++i) {
        string command = static_cast<string>(argv[i]);
        if (command == "--sum") {
            if (i + 2 >= argc) {
                cerr << "--sum <a> <b>: Not enough arguments" << endl;
                return 1;
            }

            WideInt a(argv[i + 1]);
            WideInt b(argv[i + 2]);
            i += 2;

            cout << WideInt::debug_stream << (a + b) << endl;
        } else if (command == "--multiply") {
            if (i + 2 >= argc) {
                cerr << "--multiply <a> <b>: Not enough arguments" << endl;
                return 1;
            }

            WideInt a(argv[i + 1]);
            WideInt b(argv[i + 2]);
            i += 2;

            cout << WideInt::debug_stream << (a * b) << endl;
        } else if (command == "--div") {
            if (i + 2 >= argc) {
                cerr << "--div <a> <b>: Not enough arguments" << endl;
                return 1;
            }

            WideInt a(argv[i + 1]);
            WideInt b(argv[i + 2]);
            i += 2;

            cout << WideInt::debug_stream << (a / b) << endl;
        } else {
            cerr << format("Unknown token: {}", command) << endl;
            return 1;
        }
    }

    return 0;
}