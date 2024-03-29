#include <string>
#include <vector>

namespace httplib 
{
   class Client;
}

class RestApiClient
{
   httplib::Client *m_cli;
   const std::string& m_apiKey;

public:
   RestApiClient(const std::string& baseUrl, const std::string& apiKey = "");
   ~RestApiClient();

   std::string Prompt();
   std::string GetPSK();
   std::string Get(const std::string& path);
   std::string Delete(const std::string& path);
   std::string Post(const std::string& path, const std::string& body);
   std::string Patch(const std::string& path, const std::string& body);
   std::string Put(const std::string& path, const std::string& body);
   std::vector<std::string> Completions(const std::string& path);
   std::string Swagger();
};
