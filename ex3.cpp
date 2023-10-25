// Mehmet Cagri Aksoy - 2023

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct language
{
    string lang;
    string designer;
    int date;
};

/**
 * @brief Reads a file named "languages.txt" and parses its content to create a vector of language objects.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    ifstream file{"languages.txt"};
    vector<language> languages;

    if (file)
    {
        string line;
        while (getline(file, line))
        {
            string lang;
            string designer{""};
            int date;

            istringstream istring{line, istringstream::ate};
            istring >> lang;
            while (!(istring.peek() >= '0' && istring.peek() <= '9'))
            {
                designer += istring.get();
            }
            istring >> date;

            languages.push_back({lang, designer, date});
        }
        file.close();
    }
    else
    {
        cout << "File not found!" << endl;
    }

    for (const auto &lang : languages)
    {
        cout << lang.lang << ", " << lang.designer << ", " << lang.date << endl;
    }

    return 0;
}