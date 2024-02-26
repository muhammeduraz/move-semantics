#include "StringData.h"

// Standard Constructor
StringData::StringData(const char* string)
{
    printf("Created!\n");
    m_Size = strlen(string);
    m_Data = new char[m_Size];
    memcpy(m_Data, string, m_Size);
}

// Copy constructor
StringData::StringData(const StringData& other)
{
    printf("Copied!\n");
    m_Size = other.m_Size;
    m_Data = new char[m_Size];
    memcpy(m_Data, other.m_Data, m_Size);
}

// Move semantic
StringData::StringData(StringData&& other) noexcept
{
    printf("Moved!\n");
    m_Size = other.m_Size;
    m_Data = other.m_Data;

    other.m_Size = 0;
    other.m_Data = nullptr;
}

// Deconstructor
StringData::~StringData()
{
    printf("Destroyed!\n");
    delete m_Data;
}

// Equals Operator Overload for Swap
//StringData& StringData::operator=(StringData other) noexcept
//{
//    std::swap(m_Data, other.m_Data);
//    return *this;
//}

// Equals Operator Overload for Move Semantics
StringData& StringData::operator=(StringData&& other) noexcept
{
    printf("Object Moved!\n");

    if (this != &other)
    {
        delete[] m_Data;

        m_Size = other.m_Size;
        m_Data = other.m_Data;

        other.m_Size = 0;
        other.m_Data = nullptr;
    }

    return *this;
}

void StringData::Print()
{
    for (uint32_t i = 0; i < m_Size; i++)
    {
        printf("%c", m_Data[i]);
    }

    printf("\n");
}