/*
The question is, how many times can you divide N by 2 until you have 1? This is essentially saying, do a binary search (half the elements) until you found it.

    1 = N / 2^x

multiply by 2^x:

    2^x = N

now do the log2:

    log2(2^x)   = log2 N
    x * log2(2) = log2 N
    x * 1       = log2 N

this means you can divide log N times until you have everything divided.

    T(n)=T(n/2)+1

    T(n/2)= T(n/4)+1+1

Put the value of The(n/2) in above so

    T(n)=T(n/4)+1+1 . . . . T(n/2^x)+1+1+1.....+1

    = T(2^x/2^x)+1+1....+1 up to x

    = T(1)+x

As we taken 2^x = n

    x = log n

The iteration in Binary Search terminates after k iterations. At each iteration, the array is divided by half. So let’s say the length of the array at any iteration is n At Iteration 1,

    Length of array = n

At Iteration 2,

    Length of array = n⁄2

At Iteration 3,

    Length of array = (n⁄2)⁄2 = n⁄22

Therefore, after Iteration k,

    Length of array = n⁄2k

Also, we know that after After k divisions, the length of the array becomes 1 Therefore

    Length of array = n⁄2k = 1
    => n = 2k

Applying log function on both sides:

    => log2 (n) = log2 (2k)
    => log2 (n) = k log2 (2)
    As (loga (a) = 1)

Therefore,

    As (loga (a) = 1)
    k = log2 (n)

*/
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int x;
    void *next; // тип поля структуры должен быть известен заранее, иначе невозможно определить размер структуры
                // т.о. если структура должна ссылаться на объект своего же типа, это необходимо делать через явный указатель
} node_a;

typedef struct node {
    int x;
    struct node* left;
    struct node* right; // здесь ситуация аналогична предыдущему примеру, но тип указателя приводится автоматически
                        // это позволяет видеть поля объекта, на который ссылается указатель, без необходимости приводить тип
} node_b;

int main()
{
    node_a b1 = {1, NULL};
    node_a a1 = {0, &b1};

    node_a *t1 = &a1;
    while(t1 != NULL) {
        printf("%d ", t1->x); // неявное приведение типа из void* к node_a*
        t1 = t1->next;
    }

    for(node_a *t1 = &a1; t1 != NULL; t1 = t1->next) {
        printf("%d ", *((int*)t1)); // тип указателя можно сразу привести к int*, так как первое поле структуры имеет тип int
    }
    
    struct node c2 = {2, NULL, NULL};
    struct node b2 = {0, NULL, NULL};
    node_b a2 = {1, &b2, &c2};

    printf("%d %d %d", a2.x, a2.left->x, a2.right->x); // тип полей left и right явно приведен к нужному типу заранее
}
