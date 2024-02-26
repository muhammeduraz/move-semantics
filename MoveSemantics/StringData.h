#pragma once
#include <iostream>

class StringData
{
private:
    char* m_Data;
    uint32_t m_Size;

public:
    StringData() = default;
    StringData(const char* string);
    StringData(const StringData& other);
    StringData(StringData&& other) noexcept;

    ~StringData();

    //StringData& operator=(StringData other) noexcept;
    StringData& operator=(StringData&& other) noexcept;
    void Print();
};