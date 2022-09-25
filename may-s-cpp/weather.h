#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME
#include <string>
using namespace std;

namespace weather{
    class OpenWeather{
        public: 
            string res;
            string returnRes();
        private:
            void getWeather(float longitude, float altitude, string key);
            string apiKeys;
            string URL;
    };
    
}
   

#endif