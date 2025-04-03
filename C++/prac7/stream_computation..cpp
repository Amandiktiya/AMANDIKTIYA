#include <iostream>
#include <functional>

class Stream {
private:
    std::function<int()> generator;
public:
    Stream(std::function<int()> gen) : generator(gen) {}

    int next() { return generator(); }
};

Stream generate_numbers(int start = 0) {
    return Stream([n = start]() mutable { return n++; });
}

int main() {
    Stream stream = generate_numbers(1);

    std::cout << "First 10 numbers: ";
    for (int i = 0; i <=9; ++i) {
        std::cout << stream.next() << " ";
    }

    return 0;
}