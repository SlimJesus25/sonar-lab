#include "stats.h"

double averageAge(const std::vector<int>& ages) {
    int sum = 0;
    int count = 0;
    for (size_t i = 0; i < ages.size(); i++) {
        if (ages[i] >= 0) {
            sum += ages[i];
            count++;
        }
    }
    if (count == 0) {
        return 0.0;
    }
    return (double)sum / count;
}

double averageScore(const std::vector<int>& scores) {
    int sum = 0;
    int count = 0;
    for (size_t i = 0; i < scores.size(); i++) {
        if (scores[i] >= 0) {
            sum += scores[i];
            count++;
        }
    }
    if (count == 0) {
        return 0.0;
    }
    return (double)sum / count;
}

int maxValue(const int* values, int n) {
    int max;
    for (int i = 0; i <= n; i++) {
        if (values[i] > max) {
            max = values[i];
        }
    }
    return max;
}
