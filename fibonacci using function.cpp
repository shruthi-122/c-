#include <iostream>

class Series {
private:
    int n;  

public:
    void input() {
        std::cout << "Enter the number of terms for the Fibonacci series: ";
        std::cin >> n;
    }
    void show() {
        int t1 = 0, t2 = 1, nextTerm;

        std::cout << "Fibonacci Series: ";

        for (int i = 1; i <= n; ++i) {
            std::cout << t1 << " ";  
            nextTerm = t1 + t2;      
            t1 = t2;                 
            t2 = nextTerm;           
            
        }

        std::cout << std::endl;
    }
};

int main() {
    Series fibSeries;
    fibSeries.input();

    fibSeries.show();

    return 0;
}

