#include <iostream>


//Simple streaming algorithm that calculates the average of a stream of numbers given by the user:
int main() {
    double sum = 0;
    int count = 0;
    double x;
    std::cout<<"Enter however much number you want and Enter slash / to stop the inputting and see the result: "<<std::endl;
    while (std::cin >> x) {
        sum += x;
        count++;
    }
    double average = sum / count;
    std::cout << "Average of the given inputs are: " << average << std::endl;
    return 0;
}