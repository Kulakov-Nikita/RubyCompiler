#include "file_opener.h"

FILE* open(char* a, const char* b) {
    FILE *file = fopen(a, "r+");  

    // Перемещаем указатель в конец файла
    if (fseek(file, -1, SEEK_END) != 0) {
        // Если файл пустой, просто добавляем символ '\n'
        if (fseek(file, 0, SEEK_END) == 0) {
            fputc('\n', file);
        fclose(file);
        return fopen(a, b);
    }
    }

    // Читаем последний символ
    char lastChar = fgetc(file);
    if (lastChar != '\n') {
        // Добавляем символ '\n', если его нет
        fseek(file, 0, SEEK_END); // Снова перемещаем указатель в конец файла
        fputc('\n', file);
    }

    // Закрываем файл
    fclose(file);
    return fopen(a, b);
}
