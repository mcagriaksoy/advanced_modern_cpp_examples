
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<std::string> usernames;
    for (int i = 0; i < t; i++)
    {
        string u;
        try
        {
            cin >> u;
        }
        catch (BadLengthException e)
        {
            cout << "Exception: " << e.what() << endl;
        }
        usernames.push_back(u);
        cout << u << endl;
    }
}
