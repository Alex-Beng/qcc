#pragma once

#include "Types.h"
#include "ASTNodes.h"

class Entity {
    Location location;
    std::string name;
    Type type;
    int offset;
    Reference reference;

};