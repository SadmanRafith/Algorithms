#include<iostream>
#include<vector>
using namespace std;

struct Item {
    int weight;
    int value;
};

int knapsack(int capacity, const vector<Item>& items) {
    int n = items.size();

    // Create a table to store the maximum values
    // that can be obtained for different capacities
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Fill the table in a bottom-up manner
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= capacity; ++j) {
            if (items[i - 1].weight <= j) {
                dp[i][j] = max(dp[i - 1][j], items[i - 1].value + dp[i - 1][j - items[i - 1].weight]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Return the maximum value that can be obtained
    return dp[n][capacity];
}

int main()
{
    int capacity = 10;

    // Example items
    vector<Item> items = {
        {2, 4},
        {3, 5},
        {4, 8},
        {5, 9},
        {6, 10}
    };

    int maxValue = knapsack(capacity, items);
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}