#ifndef FILES_HPP
#define FILES_HPP

#include <cstdio>   // FILE*, fopen, fread, fwrite, fseek, ftell, SEEK_SET
#include <cstdlib>  // size_t

// 1.4.1.1. Función write
template <typename T>
void write(FILE* f, T t) {
    fwrite(&t, sizeof(T), 1, f);
}

// 1.4.1.2. Función read
template <typename T>
T read(FILE* f) {
    T value;
    fread(&value, sizeof(T), 1, f);
    return value;
}

// 1.4.1.3. Función seek
template <typename T>
void seek(FILE* f, int n) {
    fseek(f, n * sizeof(T), SEEK_SET);
}

// 1.4.1.4. Función fileSize
template <typename T>
int fileSize(FILE* f) {
    long currentPos = ftell(f);          // Guardar posición actual
    fseek(f, 0, SEEK_END);               // Ir al final
    long sizeInBytes = ftell(f);         // Tamaño total en bytes
    fseek(f, currentPos, SEEK_SET);      // Volver a la posición original
    return static_cast<int>(sizeInBytes / sizeof(T));
}

// 1.4.1.5. Función filePos
template <typename T>
int filePos(FILE* f) {
    long bytePos = ftell(f);             // Posición actual en bytes
    return static_cast<int>(bytePos / sizeof(T));
}

#endif // FILES_HPP
