#include "logger.hpp"
#include <iostream>
using namespace std;

int Logger::counter = 0;
Logger *Logger::loggerInstance = nullptr;
std::mutex Logger::mtx;

Logger::Logger()
{
    counter++;
    cout << "Logger instance created. And number of instances created are: " << counter << endl;
}

void Logger::Log(string msg)
{
    cout << "Logging:-- " << endl
         << msg << endl;
}

Logger *Logger::getLogger()
{
    if (loggerInstance == nullptr)
    {
        cout << "Logger instantiated" << endl;
        loggerInstance = new Logger(); // here we can use the Logger constructor and create object, as the getLogger is a static function, means it's a member of the class not object that's why we can access it over here
    }
    return loggerInstance;
}