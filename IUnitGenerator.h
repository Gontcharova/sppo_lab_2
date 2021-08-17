#pragma once
#include "Units.h"

/*
    абстрактный генератор кода (интерфейс)
*/

class IUnitGenerator
{
public:

    virtual ~IUnitGenerator() = default;

    //получить языковую констукцию класса
    virtual std::shared_ptr<ClassUnit> getClassUnit(std::string name, uint32_t modifier = ClassUnit::NONE) const = 0;

    //получить языковую констукцию метода
    virtual std::shared_ptr<MethodUnit> getMethodUnit(std::string name, std::string returnType,
        uint32_t flags = MethodUnit::NONE) const = 0;

    //получить языковую констукцию оператора вывода
    virtual  std::shared_ptr<PrintUnit> getPrintUnit(std::string text) const = 0;
};

