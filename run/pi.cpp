import WideInt;

#include <iostream>
#include <chrono>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    WideInt::set_precision(15);

    WideInt k1 = 5_w,
            k2 = 239_w;
    WideInt k1sq = k1 * k1,
            k2sq = k2 * k2;

    WideInt pi;

    for (int i = 0; i < 72; ++i) {
        pi += (i % 2 ? -1_w : 1_w) *
                  (4_w / (k1 * (2 * i + 1)) - 1_w / (k2 * (2 * i + 1)));

        k1 *= k1sq;
        k2 *= k2sq;
    }

    pi *= 4_w;

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<float, milli> duration = end - start;
    cout << "[PI] Execution time: " << duration.count() << "ms" << endl;

    cout << pi << endl;
}