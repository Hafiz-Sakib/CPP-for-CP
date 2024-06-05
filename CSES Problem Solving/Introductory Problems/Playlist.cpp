#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> playlist(n);

    for (int i = 0; i < n; i++)
    {
        cin >> playlist[i];
    }

    unordered_set<int> unique_elements;
    int max_length = 0;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        while (unique_elements.find(playlist[right]) != unique_elements.end())
        {
            unique_elements.erase(playlist[left]);
            left++;
        }
        unique_elements.insert(playlist[right]);
        max_length = max(max_length, right - left + 1);
    }

    cout << max_length << endl;

    return 0;
}
