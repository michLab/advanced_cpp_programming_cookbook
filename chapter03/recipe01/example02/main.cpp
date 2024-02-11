#include <iostream>

class TheAnswer {
    public:
    TheAnswer() {
        std::cout << "The answer is: " << m_answer << std::endl;
    }
    virtual ~TheAnswer() = default;
    
    TheAnswer(TheAnswer&&) noexcept = default;
    TheAnswer& operator=(TheAnswer &&) noexcept = default;

    TheAnswer(const TheAnswer&) = default;
    TheAnswer& operator=(const TheAnswer&) = default;

    private:
    int m_answer {42};
};

int main() {
    TheAnswer is;
    return 0;
}