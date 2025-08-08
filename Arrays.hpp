#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>    // malloc, realloc, free
#include <stdexcept>  // std::out_of_range
#include <algorithm>  // std::sort

template<typename T>
struct Array {
    T* data;
    int size;
    int capacity;
};

template<typename T>
Array<T> array() {
    Array<T> arr;
    arr.capacity = 4;
    arr.size = 0;
    arr.data = (T*) malloc(arr.capacity * sizeof(T));
    return arr;
}

template<typename T>
int arrayAdd(Array<T>& a, T t) {
    if (a.size >= a.capacity) {
        a.capacity *= 2;
        a.data = (T*) realloc(a.data, a.capacity * sizeof(T));
    }
    a.data[a.size] = t;
    a.size++;
    return a.size - 1;
}

template<typename T>
T* arrayGet(Array<T> a, int p) {
    if (p < 0 || p >= a.size) throw std::out_of_range("arrayGet: posición inválida");
    return &a.data[p];
}

template<typename T>
void arraySet(Array<T>& a, int p, T t) {
    if (p < 0 || p >= a.size) throw std::out_of_range("arraySet: posición inválida");
    a.data[p] = t;
}

template<typename T>
void arrayInsert(Array<T>& a, T t, int p) {
    if (p < 0 || p > a.size) throw std::out_of_range("arrayInsert: posición inválida");
    if (a.size >= a.capacity) {
        a.capacity *= 2;
        a.data = (T*) realloc(a.data, a.capacity * sizeof(T));
    }
    for (int i = a.size; i > p; i--) {
        a.data[i] = a.data[i - 1];
    }
    a.data[p] = t;
    a.size++;
}

template<typename T>
int arraySize(Array<T> a) {
    return a.size;
}

template<typename T>
T arrayRemove(Array<T>& a, int p) {
    if (p < 0 || p >= a.size) throw std::out_of_range("arrayRemove: posición inválida");
    T removed = a.data[p];
    for (int i = p; i < a.size - 1; i++) {
        a.data[i] = a.data[i + 1];
    }
    a.size--;
    return removed;
}

template<typename T>
void arrayRemoveAll(Array<T>& a) {
    a.size = 0;
}

template<typename T, typename K>
int arrayFind(Array<T> a, K k, int cmpTK(T, K)) {
    for (int i = 0; i < a.size; i++) {
        if (cmpTK(a.data[i], k) == 0) {
            return i;
        }
    }
    return -1;
}

template<typename T>
int arrayOrderedInsert(Array<T>& a, T t, int cmpTT(T, T)) {
    int pos = 0;
    while (pos < a.size && cmpTT(a.data[pos], t) < 0) {
        pos++;
    }
    arrayInsert<T>(a, t, pos);
    return pos;
}

template<typename T>
T* arrayDiscover(Array<T>& a, T t, int cmpTT(T, T)) {
    for (int i = 0; i < a.size; i++) {
        if (cmpTT(a.data[i], t) == 0) {
            return &a.data[i];
        }
    }
    arrayAdd<T>(a, t);
    return &a.data[a.size - 1];
}

template<typename T>
void arraySort(Array<T>& a, int cmpTT(T, T)) {
    std::sort(a.data, a.data + a.size, [cmpTT](const T& lhs, const T& rhs) {
        return cmpTT(lhs, rhs) < 0;
    });
}

#endif // ARRAY_HPP
