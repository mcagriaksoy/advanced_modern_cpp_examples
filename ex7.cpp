// Mehmet Cagri Aksoy
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> words_vector;
    map<string, int> words_map;

    int key = 0;
    for (string word; cin >> word && word != "quit";)
    {
        words_vector.push_back(word);
        words_map[word] = key;
        // or
        words_map.insert(make_pair(word, key));
        key++;
    }

    cout << "Words on vector:" << endl;
    for (auto element : words_vector)
    {
        cout << element << endl;
    }

    cout << "Words on map:" << endl;
    for (auto element : words_map)
    {
        cout << element.first << " " << element.second << endl;
    }
}