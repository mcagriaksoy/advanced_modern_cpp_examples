// Mehmet Cagri Aksoy - 2023

#include <iostream>
#include <string>

/**
 * @brief A class for creating URLs with different parameters.
 *
 */
namespace std
{
    class url_creator
    {
        std::string url;

    public:
        /**
         * @brief Construct a new url creator object
         *
         */
        url_creator()
        {
        }

        /**
         * @brief Construct a new url creator object with protocol and resource parameters.
         *
         * @param protocol The protocol to use for the URL.
         * @param resource The resource to use for the URL.
         */
        url_creator(std::string &protocol, std::string &resource)
        {
            url = protocol + "://" + resource;
        }

        /**
         * @brief Construct a new url creator object with protocol, resource and port parameters.
         *
         * @param protocol The protocol to use for the URL.
         * @param resource The resource to use for the URL.
         * @param port The port to use for the URL.
         */
        url_creator(std::string &protocol, std::string &resource, std::string &port)
        {
            url = protocol + "://" + resource + ":" + port;
        }

        /**
         * @brief Destroy the url creator object
         *
         */
        ~url_creator()
        {
        }

        /**
         * @brief Get the URL string.
         *
         * @return std::string The URL string.
         */
        std::string get_url()
        {
            return url;
        }

        /**
         * @brief Print the URL string to the console.
         *
         */
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
