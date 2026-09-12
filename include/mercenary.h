#ifndef MERCENARY_H
#define MERCENARY_H
#include <string_view>

//1. For binary -> Returns "1" or "0"
constexpr std::string_view binary(bool value) noexcept
{
    return value ? "1" : "0";
}

//2. For true/false -> Returns "true" or "false"
constexpr std::string_view normal(bool value) noexcept
{
    return value ? "true" : "false";
}

//3. For True/False -> Returns "True" or "False"
constexpr std::string_view normalCaps(bool value) noexcept
{
    return value ? "True" : "False";
}

#endif //MERCENARY_H