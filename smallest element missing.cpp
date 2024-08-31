#include <iostream>
#include <vector>

int findSmallestMissing(std::vector<int>& arr) {
    int n = arr.size();
    int missing = 0;
    int i = 0;

     
    while (i < n) {
         
        if (arr[i] != missing) {
            return missing;  
        }
         
        missing++;
        i++;
    }

    return missing;
}

int main() {
    std::vector<int> arr = {0, 1, 2, 3, 5, 6, 7};

    int missing = findSmallestMissing(arr);

    std::cout << "The smallest missing element is: " << missing << std::endl;

    return 0;
}

