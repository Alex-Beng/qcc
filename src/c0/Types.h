#pragma once

class Type {
public:
    // type
    bool isVoid() {
        return false;
    }
    bool isBool() {
        return false;
    }
    bool isInteger() {
        return false;
    }
    bool isString() {
        return false;
    }
    bool isArray() {
        return false;
    }
    bool isClass() {
        return false;
    }
    bool isFunction() {
        return false;
    }
    bool isNull() {
        return false;
    }

    // ability
    bool isFullComparable() {
        return false;
    }
    bool isFullComparable() {
        return false;
    }
    virtual bool isCompatible(Type other);

    // mem size
    virtual int size();

    long allocSize() {
        return size();
    }
};

class ArrayType : Type {

};