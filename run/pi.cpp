import WideInt;

#include <iostream>
#include <chrono>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    WideInt k1 = 5_w,
            k2 = 239_w;
    WideInt k1sq = k1 * k1,
            k2sq = k2 * k2;

    WideInt pi;

    for (int i = 0; i < 71; ++i) {
        WideInt s = (i % 2 ? -1_w : 1_w),
                t1 = 4_w / (k1 * (2 * i + 1)),
                t2 = 1_w / (k2 * (2 * i + 1));
        pi = pi + s * (t1 - t2);

        k1 = k1 * k1sq;
        k2 = k2 * k2sq;
    }

    pi = pi * 4_w;

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<float, milli> duration = end - start;
    cout << "[PI] Execution time: " << duration.count() << "ms" << endl;

    cout << pi << endl;
}