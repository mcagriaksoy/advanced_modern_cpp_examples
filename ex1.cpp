// Mehmet Cagri Aksoy - 2023

#include <iostream>
#include <string>

namespace std
{
    class url_creator
    {
        std::string url;

    public:
        url_creator()
        {
        }

        url_creator(std::string &protocol, std::string &resource)
        {
            url = protocol + "://" + resource;
        }

        url_creator(std::string &protocol, std::string &resource, std::string &port)
        {
            url = protocol + "://" + resource + ":" + port;
        }

        ~url_creator()
        {
        }

        std::string get_url()
        {
            return url;
        }

        void print_url()
        {
            std::cout << url << std::endl;
        }
    };
} // namespace std

int main()
{
    std::string protocol = "http";
    std::string resource = "www.example.com/index.html";

    std::url_creator url{protocol, resource};
    url.print_url();

    return 0;
}
