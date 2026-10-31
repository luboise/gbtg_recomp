#pragma once

#include "cpu/x86_ops.h"
#include "kernel/memory.h"

template <typename T, size_t offset>
struct EmbeddedNode {
    x86_u32u prevPtr;
    x86_u32u nextPtr;

    EmbeddedNode* next() {
        auto base{mem::Base()};
        if (nextPtr == 0) {
            return nullptr;
        }

        return X86_PTR(EmbeddedNode, nextPtr);
    }

    T* data() {
        auto base{mem::Base()};
        return (T*)(reinterpret_cast<uint8_t*>(this) - offset);
    }
};

template <typename T>
struct Ptr {
    x86_u32u ptr;

    T* operator*() const {
        if (ptr == 0) return nullptr;

        auto base{mem::Base()};
        return X86_PTR(T, ptr);
    }
};