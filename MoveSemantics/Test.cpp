#include "Test.h"
// MoveSemantics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class String
{
public:
    String(char* string)
    {
        printf("Created!\n");
        std::cout << "String:" << string << std::endl;
        std::cout << "*String:" << *string << std::endl;
        m_Size = strlen(string);
        printf("m_Size %d, \n", m_Size);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }

    String(const String& other)
    {
        printf("Copied!\n");
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    ~String()
    {
        printf("Destroyed!\n");
        delete m_Data;
    }

    void Print()
    {
        for (uint32_t i = 0; i < m_Size; i++)
        {
            printf("%c", m_Data[i]);
        }

        printf("\n");
    }

private:
    char* m_Data;
    uint32_t m_Size;
};

//int main()
//{
//    //String str(String("Uraz"));
//    //str.Print();
//
//    //String str1("Uraz1");
//    //str1.Print();
//
//    /*const char* ch = new char[6] {'0', '1', '2', '3', '4', '5'};
//    String str3(ch);
//    str3.Print();*/
//
//    char c = '0';
//    char* p = &c;
//
//    String str4(p);
//    str4.Print();
//
//    /*String str3("01234");
//    str3.Print();*/
//
//    /*String* str = new String("Uraz");
//    str->Print();*/
//    
//    std::cin.get();
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
