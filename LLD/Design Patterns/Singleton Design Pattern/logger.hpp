#ifndef logger_hpp
#define logger_hpp

#include <mutex>
#include <string>

class Logger
{
    static int counter;
    static Logger *loggerInstance;
    static std::mutex mtx;
    Logger();
    Logger(const Logger &);
    Logger operator=(const Logger &);

public:
    static Logger *getLogger();
    void Log(std::string msg);
};

#endif