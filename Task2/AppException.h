#pragma once
#include <iostream>
#include <string>
class AppException
{
private:
    std::string m_error;

public:
    AppException(std::string error);
    const char* getError();
};

