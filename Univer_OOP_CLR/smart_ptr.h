#pragma once

template <typename T>
class smart_ptr {
private:
    T* obj;

public:
    explicit smart_ptr(T* p) : obj(p) {}

    ~smart_ptr() {
        delete obj;
    }

    smart_ptr(const smart_ptr&) = delete;
    smart_ptr& operator=(const smart_ptr&) = delete;

    T* operator->() {
        return obj;
    }

    T& operator*() {
        return *obj;
    }
};
