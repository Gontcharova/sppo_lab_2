#include "CppUnitGenerator.h"

CppUnitGenerator::CppUnitGenerator() {}

CppUnitGenerator::~CppUnitGenerator() {}

std::shared_ptr<ClassUnit> CppUnitGenerator::getClassUnit(std::string name, uint32_t modifier) const
{
    //вернуть указатель на экземпляр CppClassUnit
    return std::make_shared< CppClassUnit >(name, modifier);
}

std::shared_ptr<MethodUnit> CppUnitGenerator::getMethodUnit(std::string name, std::string returnType,
    uint32_t flags) const
{
    //вернуть указатель на экземпляр CppMethodUnit
    return std::make_shared< CppMethodUnit >(name, returnType, flags);
}

std::shared_ptr<PrintUnit> CppUnitGenerator::getPrintUnit(std::string text) const
{
    //вернуть указатель на экземпляр CppPrintUnit
    return std::make_shared< CppPrintUnit >(text);
}
