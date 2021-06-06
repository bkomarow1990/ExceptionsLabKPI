#include "AppException.h"

AppException::AppException(std::string error)
    : m_error(error)
{
}

const char* AppException::getError()
{
    return m_error.c_str();
}

