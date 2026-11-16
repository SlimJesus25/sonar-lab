#include "stats.h"

double averageAge(const std::vector<int>& ages) {
    return average(ages);
}

double averageScore(const std::vector<int>& scores) {
    return average(scores);
}

double average(const std::vector<int>& collection) {
    int sum = 0;
    int count = 0;
    for (const auto& c : collection) {
        sum += c;
        count++;
    }
    if (count == 0) {
        return 0.0;
    }
    return static_cast<double>(sum) / count;
}

int maxValue(const int* values, const int n) {

    if (values == nullptr || n <= 0) {
        throw std::invalid_argument("Invalid array");
    }
    
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (values[i] > max) {
            max = values[i];
        }
    }
    return max;
}
