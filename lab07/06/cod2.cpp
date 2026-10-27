#include <iostream>
#include <string>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    std::string s;
    for (int i = 0; i < 1000000; i++)
        s = s + 'a';
    std::cout << s.size() << "\n";
    auto end = std::chrono::high_resolution_clock::now();
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    std::cerr << "Time: " << ms << " ms\n";
    return 0;
}