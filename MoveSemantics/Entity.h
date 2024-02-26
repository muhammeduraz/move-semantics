#pragma once
#include "StringData.h"

class Entity
{
private:
    StringData m_Data;

public:

    // Standard Constructor
    Entity(const StringData& data)
        : m_Data(data){}

    // Move Semantics
    Entity(StringData&& data) 
        : m_Data(std::move(data)) {};
    // : m_Data((String&&)data) // Need to explicitly cast to rvalue ref, if not it will be using other constructor
    // std::move does the same thing with explicit cast

    void PrintData();
};