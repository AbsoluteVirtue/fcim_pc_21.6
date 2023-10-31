#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// структура является аналогом массива с несколькими отличиями
// в отличие от массивов, элементы структуры должны быть именованны
struct simple_structure
{
    int x;
    char y;  // отдельные поля могут быть разных типов
};

// ключевое слово typedef позволяет задавать любые имена для существующих типов данных
typedef unsigned int uint;

// особый вид структуры - энумератор - также хранит именованные поля
typedef enum {
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN
} enumerator;

// структуры могут хранить любые значения, в том числе массивы и другие структуры
typedef struct
{
    char group[50];
    char name[50];
    uint age;
} data_t;

int main(int argc, char const *argv[])
{
    // сходства заключаются в том, что структура группирует значения в памяти
    // эти значения будут доступны в программе через общую переменную
    struct simple_structure A = {1, 2};
    int B[2] = {1, 2};

    // обращение к отдельным значениям массива и структуры
    B[0] = 10;  // если в массиве доступ по индексу, так как все поля одного типа
    A.x = 10;   // в структуре - по имени, потому что поля могут быть разных типов

    // в структурах индекс отдельных полей часто невозможно посчитать арифметически
    *(B + 1) = 20;
    A.y = 20;
    
    // доступ к значению также осуществляется по имени поля
    printf("%d %d\n", TEN, ELEVEN);
    printf("%d %d\n", A.x, A.y);
    printf("%d %d\n", B[0], B[1]);

    // можно создавать массивы структур
    struct simple_structure C[2] = {{1, 2}, {3, 4}};
    printf("%d %d\n", C[0].x, C[1].y);

    // или массивы структур с массивами внутри
    data_t D[10];
    // для созданного массива можно вычислить его длину, поделив размер в памяти на размер одного элемента
    size_t n = (sizeof(D) / sizeof(data_t));

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%s", D[i].name);
        // функция fscanf повторяет функцию scanf, но для конкретных файл-объектов
        // ключевое слово stdin указывает на такой объект, который связан с вводом из терминала
        fscanf(stdin, "%d", &D[i].age);
        // другой способ записать строку - скопировать в нее значение из другой строки
        strcpy(D[i].group, "TI-228");
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%s %d %s\n", D[i].name, D[i].age, D[i].group);
    }
}