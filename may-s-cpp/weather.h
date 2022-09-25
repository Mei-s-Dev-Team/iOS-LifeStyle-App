#ifndef HEADER_FILE_NAME
#define HEADER_FILE_NAME
#include <iostream>
#include <string>
#include <curl/curl.h>

using namespace std;


class OpenWeather{
    public: 
        OpenWeather(float longitude, float latitude);
        string res;
        string returnRes();
    private:
        void setAPIKeys(string keys);
        void getWeather();
        string APIKeys;
        string URL;
        float longitude;
        float latitude;
};
    

   

#endif