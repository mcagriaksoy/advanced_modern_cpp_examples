// Mehmet Cagri Aksoy

#include <deque>
#include <iostream>
#include <string>

using namespace std;

class URL
{
private:
    deque<string> urls;

public:
    void add_url(string url)
    {
        bool is_url_exist = false;
        for (auto itr = urls.begin(); itr != urls.end(); ++itr)
        {
            if (*itr == url)
            {
                is_url_exist = true;
                break;
            }
        }

        if (!is_url_exist)
        {
            urls.push_front(url);
        }
    }

    void print_urls()
    {
        cout << "URLs:" << endl;
        for (auto url : urls)
        {
            cout << url << endl;
        }
    }
};

int main()
{
    URL my_url;
    for (string url; cin >> url && url != "quit";)
    {
        my_url.add_url(url);
    }

    my_url.print_urls();
}