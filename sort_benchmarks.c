#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//              q[3,2,4,1,5]
//       q[2,1] ++   [3]   ++ q[4,5]
// q[1] ++ [2] ++ q []   q[] ++ [4] ++ q[5]
//  [1]                                 [5]
// place all smaller elements to the left, all greater elements to the right
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // element to be set into right position
    int i = low - 1;       // index of smaller element
    for(int j = low; j <= high - 1; ++j) {
        if (arr[j] <= pivot) {
            ++i; 
            SWAP(arr[i], arr[j]);
        }
    }
    SWAP(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        // arr[pi] is set after this point
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

static inline int cmp(const void *p1, const void *p2)
{
    return *(int *)p1 > *(int *)p2 ? 1 : (*(int *)p1 == *(int *)p2 ? 0 : -1);
}

static inline void sort6_libqsort(int *d)
{
    qsort(d, 6, sizeof(int), cmp);
}

static inline void sort6_insertion_sort_v1(int *d)
{

    int j, i, imin;
    int tmp;
    for (j = 0; j < 5; j++)
    {
        imin = j;
        for (i = j + 1; i < 6; i++)
        {
            if (d[i] < d[imin])
            {
                imin = i;
            }
        }
        tmp = d[j];
        d[j] = d[imin];
        d[imin] = tmp;
    }
}

static inline void sort6_insertion_sort_v2(int *d)
{
    int i, j;
    for (i = 1; i < 6; i++)
    {
        int tmp = d[i];
        for (j = i; j >= 1 && tmp < d[j - 1]; j--)
            d[j] = d[j - 1];
        d[j] = tmp;
    }
}

static inline void sort6_insertion_sort_unrolled(int *d)
{
    int j1;
    int tmp1 = d[1];
    for (j1 = 1; j1 >= 1 && tmp1 < d[j1 - 1]; j1--)
        d[j1] = d[j1 - 1];
    d[j1] = tmp1;
    int j2;
    int tmp2 = d[2];
    for (j2 = 2; j2 >= 1 && tmp2 < d[j2 - 1]; j2--)
        d[j2] = d[j2 - 1];
    d[j2] = tmp2;
    int j3;
    int tmp3 = d[3];
    for (j3 = 3; j3 >= 1 && tmp3 < d[j3 - 1]; j3--)
        d[j3] = d[j3 - 1];
    d[j3] = tmp3;
    int j4;
    int tmp4 = d[4];
    for (j4 = 4; j4 >= 1 && tmp4 < d[j4 - 1]; j4--)
        d[j4] = d[j4 - 1];
    d[j4] = tmp4;
    int j5;
    int tmp5 = d[5];
    for (j5 = 5; j5 >= 1 && tmp5 < d[j5 - 1]; j5--)
        d[j5] = d[j5 - 1];
    d[j5] = tmp5;
}

static inline void sort6_sorting_network_v1(int *d)
{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
     
    static inline int cmp(const void *p1, const void *p2)
    {
        return *(int *)p1 > *(int *)p2 ? 1 : (*(int *)p1 == *(int *)p2 ? 0 : -1);
        //return *(int*)p1-*(int*)p2;
    }

    static inline void sort6_libqsort(int *d)
    {
        qsort(d, 6, sizeof(int), cmp);
    }

    static inline void sort6_insertion_sort_v1(int *d)
    {

        int j, i, imin;
        int tmp;
        for (j = 0; j < 5; j++)
        {
            imin = j;
            for (i = j + 1; i < 6; i++)
            {
                if (d[i] < d[imin])
                {
                    imin = i;
                }
            }
            tmp = d[j];
            d[j] = d[imin];
            d[imin] = tmp;
        }
    }

    static inline void sort6_insertion_sort_v2(int *d)
    {
        int i, j;
        for (i = 1; i < 6; i++)
        {
            int tmp = d[i];
            for (j = i; j >= 1 && tmp < d[j - 1]; j--)
                d[j] = d[j - 1];
            d[j] = tmp;
        }
    }

    static inline void sort6_insertion_sort_unrolled(int *d)
    {
        int j1;
        int tmp1 = d[1];
        for (j1 = 1; j1 >= 1 && tmp1 < d[j1 - 1]; j1--)
            d[j1] = d[j1 - 1];
        d[j1] = tmp1;
        int j2;
        int tmp2 = d[2];
        for (j2 = 2; j2 >= 1 && tmp2 < d[j2 - 1]; j2--)
            d[j2] = d[j2 - 1];
        d[j2] = tmp2;
        int j3;
        int tmp3 = d[3];
        for (j3 = 3; j3 >= 1 && tmp3 < d[j3 - 1]; j3--)
            d[j3] = d[j3 - 1];
        d[j3] = tmp3;
        int j4;
        int tmp4 = d[4];
        for (j4 = 4; j4 >= 1 && tmp4 < d[j4 - 1]; j4--)
            d[j4] = d[j4 - 1];
        d[j4] = tmp4;
        int j5;
        int tmp5 = d[5];
        for (j5 = 5; j5 >= 1 && tmp5 < d[j5 - 1]; j5--)
            d[j5] = d[j5 - 1];
        d[j5] = tmp5;
    }

    static inline void sort6_sorting_network_v1(int *d)
    {
#define SWAP(x, y)      \
    if (d[y] < d[x])    \
    {                   \
        int tmp = d[x]; \
        d[x] = d[y];    \
        d[y] = tmp;     \
    }
        SWAP(1, 2);
        SWAP(0, 2);
        SWAP(0, 1);
        SWAP(4, 5);
        SWAP(3, 5);
        SWAP(3, 4);
        SWAP(0, 3);
        SWAP(1, 4);
        SWAP(2, 5);
        SWAP(2, 4);
        SWAP(1, 3);
        SWAP(2, 3);
#undef SWAP
    }

#define min(x, y) (y ^ ((x ^ y) & -(x < y)))
#define max(x, y) (x ^ ((x ^ y) & -(x < y)))

    static inline void sort2_sorting_network_v2(int *p0, int *p1)
    {
        const int temp = min(*p0, *p1);
        *p1 = max(*p0, *p1);
        *p0 = temp;
    }

    static inline void sort3_sorting_network_v2(int *p0, int *p1, int *p2)
    {
        sort2_sorting_network_v2(p0, p1);
        sort2_sorting_network_v2(p1, p2);
        sort2_sorting_network_v2(p0, p1);
    }

    static inline void sort4_sorting_network_v2(int *p0, int *p1, int *p2, int *p3)
    {
        sort2_sorting_network_v2(p0, p1);
        sort2_sorting_network_v2(p2, p3);
        sort2_sorting_network_v2(p0, p2);
        sort2_sorting_network_v2(p1, p3);
        sort2_sorting_network_v2(p1, p2);
    }

    static inline void sort6_sorting_network_v2(int *d)
    {
        sort3_sorting_network_v2(d + 0, d + 1, d + 2);
        sort3_sorting_network_v2(d + 3, d + 4, d + 5);
        sort2_sorting_network_v2(d + 0, d + 3);
        sort2_sorting_network_v2(d + 2, d + 5);
        sort4_sorting_network_v2(d + 1, d + 2, d + 3, d + 4);
    }
#undef min
#undef max

    static inline void sort6_sorting_network_v3(int *d)
    {
#define min(x, y) (y ^ ((x ^ y) & -(x < y)))
#define max(x, y) (x ^ ((x ^ y) & -(x < y)))
#define SWAP(x, y)                 \
    {                              \
        int tmp = min(d[x], d[y]); \
        d[y] = max(d[x], d[y]);    \
        d[x] = tmp;                \
    }
        SWAP(1, 2);
        SWAP(0, 2);
        SWAP(0, 1);
        SWAP(4, 5);
        SWAP(3, 5);
        SWAP(3, 4);
        SWAP(0, 3);
        SWAP(1, 4);
        SWAP(2, 5);
        SWAP(2, 4);
        SWAP(1, 3);
        SWAP(2, 3);
#undef SWAP
#undef min
#undef max
    }

    static inline void sort6_sorting_network_v4(int *d)
    {
#define min(x, y) (y ^ ((x ^ y) & -(x < y)))
#define max(x, y) (x ^ ((x ^ y) & -(x < y)))
#define SWAP(x, y)                 \
    {                              \
        int tmp = min(d[x], d[y]); \
        d[y] = max(d[x], d[y]);    \
        d[x] = tmp;                \
    }
        SWAP(1, 2);
        SWAP(4, 5);
        SWAP(0, 2);
        SWAP(3, 5);
        SWAP(0, 1);
        SWAP(3, 4);
        SWAP(1, 4);
        SWAP(0, 3);
        SWAP(2, 5);
        SWAP(1, 3);
        SWAP(2, 4);
        SWAP(2, 3);
#undef SWAP
#undef min
#undef max
    }

    static inline void sort6_sorting_net_simple_swap(int *d)
    {
#define min(x, y) (y > x ? x : y)
#define max(x, y) (y > x ? y : x)
#define SWAP(x, y)               \
    {                            \
        int a = min(d[x], d[y]); \
        int b = max(d[x], d[y]); \
        d[x] = a;                \
        d[y] = b;                \
    }
        SWAP(1, 2);
        SWAP(4, 5);
        SWAP(0, 2);
        SWAP(3, 5);
        SWAP(0, 1);
        SWAP(3, 4);
        SWAP(1, 4);
        SWAP(0, 3);
        SWAP(2, 5);
        SWAP(1, 3);
        SWAP(2, 4);
        SWAP(2, 3);
#undef SWAP
#undef min
#undef max
    }

    static inline void sort6_rank_order(int *d)
    {
        int e[6];
        memcpy(e, d, 6 * sizeof(int));
        int o0 = (d[0] > d[1]) + (d[0] > d[2]) + (d[0] > d[3]) + (d[0] > d[4]) + (d[0] > d[5]);
        int o1 = (d[1] >= d[0]) + (d[1] > d[2]) + (d[1] > d[3]) + (d[1] > d[4]) + (d[1] > d[5]);
        int o2 = (d[2] >= d[0]) + (d[2] >= d[1]) + (d[2] > d[3]) + (d[2] > d[4]) + (d[2] > d[5]);
        int o3 = (d[3] >= d[0]) + (d[3] >= d[1]) + (d[3] >= d[2]) + (d[3] > d[4]) + (d[3] > d[5]);
        int o4 = (d[4] >= d[0]) + (d[4] >= d[1]) + (d[4] >= d[2]) + (d[4] >= d[3]) + (d[4] > d[5]);
        int o5 = 15 - (o0 + o1 + o2 + o3 + o4);
        d[o0] = e[0];
        d[o1] = e[1];
        d[o2] = e[2];
        d[o3] = e[3];
        d[o4] = e[4];
        d[o5] = e[5];
    }

    static inline void sort6_rank_order_reg(int *d)
    {
        register int x0, x1, x2, x3, x4, x5;
        x0 = d[0];
        x1 = d[1];
        x2 = d[2];
        x3 = d[3];
        x4 = d[4];
        x5 = d[5];
        int o0 = (x0 > x1) + (x0 > x2) + (x0 > x3) + (x0 > x4) + (x0 > x5);
        int o1 = (x1 >= x0) + (x1 > x2) + (x1 > x3) + (x1 > x4) + (x1 > x5);
        int o2 = (x2 >= x0) + (x2 >= x1) + (x2 > x3) + (x2 > x4) + (x2 > x5);
        int o3 = (x3 >= x0) + (x3 >= x1) + (x3 >= x2) + (x3 > x4) + (x3 > x5);
        int o4 = (x4 >= x0) + (x4 >= x1) + (x4 >= x2) + (x4 >= x3) + (x4 > x5);
        int o5 = 15 - (o0 + o1 + o2 + o3 + o4);
        d[o0] = x0;
        d[o1] = x1;
        d[o2] = x2;
        d[o3] = x3;
        d[o4] = x4;
        d[o5] = x5;
    }

    static inline void sort6_inlined_bubble(int *d)
    {
#define SWAP(x, y)                      \
    {                                   \
        int dx = d[x], dy = d[y], tmp;  \
        tmp = d[x] = dx < dy ? dx : dy; \
        d[y] ^= dx ^ tmp;               \
    }
        SWAP(0, 1);
        SWAP(1, 2);
        SWAP(2, 3);
        SWAP(3, 4);
        SWAP(4, 5);
        SWAP(0, 1);
        SWAP(1, 2);
        SWAP(2, 3);
        SWAP(3, 4);
        SWAP(0, 1);
        SWAP(1, 2);
        SWAP(2, 3);
        SWAP(0, 1);
        SWAP(1, 2);
        SWAP(0, 1);
#undef SWAP
    }

    static inline void sort6_insertion_sort_unrolled_v2(int *d)
    {
//#define ITER(x) { if (t < d[x]) { d[x+1] = d[x]; d[x] = t; } }
//Faster on x86, probably slower on ARM or similar:
#define ITER(x)                                     \
    {                                               \
        d[x + 1] ^= t < d[x] ? d[x] ^ d[x + 1] : 0; \
        d[x] = t < d[x] ? t : d[x];                 \
    }
        int t;
        t = d[1];
        ITER(0);
        t = d[2];
        ITER(1);
        ITER(0);
        t = d[3];
        ITER(2);
        ITER(1);
        ITER(0);
        t = d[4];
        ITER(3);
        ITER(2);
        ITER(1);
        ITER(0);
        t = d[5];
        ITER(4);
        ITER(3);
        ITER(2);
        ITER(1);
        ITER(0);
#undef ITER
    }

    // to be debugged
    static inline void sort6_shellsort(int *d)
    {
        char j, i, inc;
        int tmp;
        for (inc = 4; inc > 0; inc -= 3)
        {
            for (i = inc; i < 5; i++)
            {
                tmp = d[i];
                j = i;
                while (j >= inc && d[j - inc] > tmp)
                {
                    d[j] = d[j - inc];
                    j -= inc;
                }
                d[j] = tmp;
            }
        }
    }

    static inline void sort6_fast_network(int *d)
    {
//#define SWAP(x,y) asm("mov %0, %2 ; cmp %1, %0 ; cmovg %1, %0 ; cmovg %2, %1" : "=r" (x), "=r" (y), "=r" (tmp) : "0" (x), "1" (y) : "cc");
//    register int x0,x1,x2,x3,x4,x5,tmp;
#define SWAP(x, y)                   \
    {                                \
        int dx = x, dy = y, tmp;     \
        tmp = x = dx < dy ? dx : dy; \
        y ^= dx ^ tmp;               \
    }
        register int x0, x1, x2, x3, x4, x5;
        x1 = d[1];
        x2 = d[2];
        SWAP(x1, x2);
        x4 = d[4];
        x5 = d[5];
        SWAP(x4, x5);
        x0 = d[0];
        SWAP(x0, x2);
        x3 = d[3];
        SWAP(x3, x5);
        SWAP(x0, x1);
        SWAP(x3, x4);
        SWAP(x1, x4);
        SWAP(x0, x3);
        d[0] = x0;
        SWAP(x2, x5);
        d[5] = x5;
        SWAP(x1, x3);
        d[1] = x1;
        SWAP(x2, x4);
        d[4] = x4;
        SWAP(x2, x3);
        d[2] = x2;
        d[3] = x3;

#undef SWAP
#undef min
#undef max
    }

    static inline void sort6_fast_network_simplified(int *d)
    {
//#define SWAP(x,y) asm("mov %0, %2 ; cmp %1, %0 ; cmovg %1, %0 ; cmovg %2, %1" : "=r" (x), "=r" (y), "=r" (tmp) : "0" (x), "1" (y) : "cc");
#define SWAP(x, y)                          \
    {                                       \
        int dx = d[x];                      \
        int dy = d[y];                      \
        int tmp = d[x] = dx < dy ? dx : dy; \
        d[y] ^= dx ^ tmp;                   \
    }
        SWAP(1, 2);
        SWAP(4, 5);
        SWAP(0, 2);
        SWAP(3, 5);
        SWAP(0, 1);
        SWAP(3, 4);
        SWAP(1, 4);
        SWAP(0, 3);
        SWAP(2, 5);
        SWAP(1, 3);
        SWAP(2, 4);
        SWAP(2, 3);
#undef SWAP
#undef min
#undef max
    }

    static inline unsigned long long rdtsc(void)
    {
        unsigned long long int x;
        asm volatile("rdtsc; shlq $32, %%rdx; orq %%rdx, %0"
                     : "=a"(x)
                     :
                     : "rdx");
        return x;
    }

    void ran_fill(int n, int *a)
    {
        static int seed = 76521;
        while (n--)
            *a++ = (seed = seed * 1812433253 + 12345);
    }

#define NTESTS 16384
    int main()
    {

#define TEST(variant, description)                                                                                                   \
    {                                                                                                                                \
        int i;                                                                                                                       \
        int d[6 * NTESTS];                                                                                                           \
        sort6_##variant(d);                                                                                                          \
        ran_fill(6 * NTESTS, d);                                                                                                     \
        unsigned long long cycles = rdtsc();                                                                                         \
        for (i = 0; i < 6 * NTESTS; i += 6)                                                                                          \
        {                                                                                                                            \
            sort6_##variant(d + i);                                                                                                  \
        }                                                                                                                            \
        cycles = rdtsc() - cycles;                                                                                                   \
        printf(description " : %.2lf\n", (double)cycles / (double)NTESTS);                                                           \
        {                                                                                                                            \
            int passed = 1;                                                                                                          \
            for (i = 0; i < 6 * NTESTS; i += 6)                                                                                      \
            {                                                                                                                        \
                if (d[i + 0] > d[i + 1] || d[i + 1] > d[i + 2] || d[i + 2] > d[i + 3] || d[i + 3] > d[i + 4] || d[i + 4] > d[i + 5]) \
                {                                                                                                                    \
                    printf("d%d : %d %d %d %d %d %d\n", i,                                                                           \
                           d[i + 0], d[i + 1], d[i + 2],                                                                             \
                           d[i + 3], d[i + 4], d[i + 5]);                                                                            \
                    passed = 0;                                                                                                      \
                }                                                                                                                    \
            }                                                                                                                        \
            if (!passed)                                                                                                             \
            {                                                                                                                        \
                printf(" FAILED\n");                                                                                                 \
            }                                                                                                                        \
        }                                                                                                                            \
    }

        TEST(libqsort, "Direct call to qsort library function     ");
        TEST(insertion_sort_v1, "Naive implementation (insertion sort)     ");
        TEST(insertion_sort_v2, "Insertion Sort (Daniel Stutzbach)         ");
        TEST(insertion_sort_unrolled, "Insertion Sort Unrolled                   ");
        TEST(rank_order, "Rank Order                                ");
        TEST(rank_order_reg, "Rank Order with registers                 ");
        TEST(sorting_network_v1, "Sorting Networks (Daniel Stutzbach)       ");
        TEST(sorting_network_v2, "Sorting Networks (Paul R)                 ");
        TEST(sorting_network_v3, "Sorting Networks 12 with Fast Swap        ");
        TEST(sorting_network_v4, "Sorting Networks 12 reordered Swap        ");
        TEST(sorting_net_simple_swap, "Sorting Networks 12 reordered Simple Swap (");
        TEST(fast_network, "Reordered Sorting Network w/ fast swap    ");
        TEST(fast_network_simplified, "Reordered Sorting Network w/ fast swap V2 ");
        TEST(inlined_bubble, "Inlined Bubble Sort (Paolo Bonzini)       ");
        TEST(insertion_sort_unrolled_v2, "Unrolled Insertion Sort (Paolo Bonzini)   ");

        return 0;
    }

#define SWAP(x, y)      \
    if (d[y] < d[x])    \
    {                   \
        int tmp = d[x]; \
        d[x] = d[y];    \
        d[y] = tmp;     \
    }
    SWAP(1, 2);
    SWAP(0, 2);
    SWAP(0, 1);
    SWAP(4, 5);
    SWAP(3, 5);
    SWAP(3, 4);
    SWAP(0, 3);
    SWAP(1, 4);
    SWAP(2, 5);
    SWAP(2, 4);
    SWAP(1, 3);
    SWAP(2, 3);
#undef SWAP
}

#define min(x, y) (y ^ ((x ^ y) & -(x < y)))
#define max(x, y) (x ^ ((x ^ y) & -(x < y)))

static inline void sort2_sorting_network_v2(int *p0, int *p1)
{
    const int temp = min(*p0, *p1);
    *p1 = max(*p0, *p1);
    *p0 = temp;
}

static inline void sort3_sorting_network_v2(int *p0, int *p1, int *p2)
{
    sort2_sorting_network_v2(p0, p1);
    sort2_sorting_network_v2(p1, p2);
    sort2_sorting_network_v2(p0, p1);
}

static inline void sort4_sorting_network_v2(int *p0, int *p1, int *p2, int *p3)
{
    sort2_sorting_network_v2(p0, p1);
    sort2_sorting_network_v2(p2, p3);
    sort2_sorting_network_v2(p0, p2);
    sort2_sorting_network_v2(p1, p3);
    sort2_sorting_network_v2(p1, p2);
}

static inline void sort6_sorting_network_v2(int *d)
{
    sort3_sorting_network_v2(d + 0, d + 1, d + 2);
    sort3_sorting_network_v2(d + 3, d + 4, d + 5);
    sort2_sorting_network_v2(d + 0, d + 3);
    sort2_sorting_network_v2(d + 2, d + 5);
    sort4_sorting_network_v2(d + 1, d + 2, d + 3, d + 4);
}
#undef min
#undef max

static inline void sort6_sorting_network_v3(int *d)
{
#define min(x, y) (y ^ ((x ^ y) & -(x < y)))
#define max(x, y) (x ^ ((x ^ y) & -(x < y)))
#define SWAP(x, y)                 \
    {                              \
        int tmp = min(d[x], d[y]); \
        d[y] = max(d[x], d[y]);    \
        d[x] = tmp;                \
    }
    SWAP(1, 2);
    SWAP(0, 2);
    SWAP(0, 1);
    SWAP(4, 5);
    SWAP(3, 5);
    SWAP(3, 4);
    SWAP(0, 3);
    SWAP(1, 4);
    SWAP(2, 5);
    SWAP(2, 4);
    SWAP(1, 3);
    SWAP(2, 3);
#undef SWAP
#undef min
#undef max
}

static inline void sort6_sorting_network_v4(int *d)
{
#define min(x, y) (y ^ ((x ^ y) & -(x < y)))
#define max(x, y) (x ^ ((x ^ y) & -(x < y)))
#define SWAP(x, y)                 \
    {                              \
        int tmp = min(d[x], d[y]); \
        d[y] = max(d[x], d[y]);    \
        d[x] = tmp;                \
    }
    SWAP(1, 2);
    SWAP(4, 5);
    SWAP(0, 2);
    SWAP(3, 5);
    SWAP(0, 1);
    SWAP(3, 4);
    SWAP(1, 4);
    SWAP(0, 3);
    SWAP(2, 5);
    SWAP(1, 3);
    SWAP(2, 4);
    SWAP(2, 3);
#undef SWAP
#undef min
#undef max
}

static inline void sort6_sorting_net_simple_swap(int *d)
{
#define min(x, y) (y > x ? x : y)
#define max(x, y) (y > x ? y : x)
#define SWAP(x, y)               \
    {                            \
        int a = min(d[x], d[y]); \
        int b = max(d[x], d[y]); \
        d[x] = a;                \
        d[y] = b;                \
    }
    SWAP(1, 2);
    SWAP(4, 5);
    SWAP(0, 2);
    SWAP(3, 5);
    SWAP(0, 1);
    SWAP(3, 4);
    SWAP(1, 4);
    SWAP(0, 3);
    SWAP(2, 5);
    SWAP(1, 3);
    SWAP(2, 4);
    SWAP(2, 3);
#undef SWAP
#undef min
#undef max
}

static inline void sort6_rank_order(int *d)
{
    int e[6];
    memcpy(e, d, 6 * sizeof(int));
    int o0 = (d[0] > d[1]) + (d[0] > d[2]) + (d[0] > d[3]) + (d[0] > d[4]) + (d[0] > d[5]);
    int o1 = (d[1] >= d[0]) + (d[1] > d[2]) + (d[1] > d[3]) + (d[1] > d[4]) + (d[1] > d[5]);
    int o2 = (d[2] >= d[0]) + (d[2] >= d[1]) + (d[2] > d[3]) + (d[2] > d[4]) + (d[2] > d[5]);
    int o3 = (d[3] >= d[0]) + (d[3] >= d[1]) + (d[3] >= d[2]) + (d[3] > d[4]) + (d[3] > d[5]);
    int o4 = (d[4] >= d[0]) + (d[4] >= d[1]) + (d[4] >= d[2]) + (d[4] >= d[3]) + (d[4] > d[5]);
    int o5 = 15 - (o0 + o1 + o2 + o3 + o4);
    d[o0] = e[0];
    d[o1] = e[1];
    d[o2] = e[2];
    d[o3] = e[3];
    d[o4] = e[4];
    d[o5] = e[5];
}

static inline void sort6_rank_order_reg(int *d)
{
    register int x0, x1, x2, x3, x4, x5;
    x0 = d[0];
    x1 = d[1];
    x2 = d[2];
    x3 = d[3];
    x4 = d[4];
    x5 = d[5];
    int o0 = (x0 > x1) + (x0 > x2) + (x0 > x3) + (x0 > x4) + (x0 > x5);
    int o1 = (x1 >= x0) + (x1 > x2) + (x1 > x3) + (x1 > x4) + (x1 > x5);
    int o2 = (x2 >= x0) + (x2 >= x1) + (x2 > x3) + (x2 > x4) + (x2 > x5);
    int o3 = (x3 >= x0) + (x3 >= x1) + (x3 >= x2) + (x3 > x4) + (x3 > x5);
    int o4 = (x4 >= x0) + (x4 >= x1) + (x4 >= x2) + (x4 >= x3) + (x4 > x5);
    int o5 = 15 - (o0 + o1 + o2 + o3 + o4);
    d[o0] = x0;
    d[o1] = x1;
    d[o2] = x2;
    d[o3] = x3;
    d[o4] = x4;
    d[o5] = x5;
}

static inline void sort6_inlined_bubble(int *d)
{
#define SWAP(x, y)                      \
    {                                   \
        int dx = d[x], dy = d[y], tmp;  \
        tmp = d[x] = dx < dy ? dx : dy; \
        d[y] ^= dx ^ tmp;               \
    }
    SWAP(0, 1);
    SWAP(1, 2);
    SWAP(2, 3);
    SWAP(3, 4);
    SWAP(4, 5);
    SWAP(0, 1);
    SWAP(1, 2);
    SWAP(2, 3);
    SWAP(3, 4);
    SWAP(0, 1);
    SWAP(1, 2);
    SWAP(2, 3);
    SWAP(0, 1);
    SWAP(1, 2);
    SWAP(0, 1);
#undef SWAP
}

static inline void sort6_insertion_sort_unrolled_v2(int *d)
{
//#define ITER(x) { if (t < d[x]) { d[x+1] = d[x]; d[x] = t; } }
//Faster on x86, probably slower on ARM or similar:
#define ITER(x)                                     \
    {                                               \
        d[x + 1] ^= t < d[x] ? d[x] ^ d[x + 1] : 0; \
        d[x] = t < d[x] ? t : d[x];                 \
    }
    int t;
    t = d[1];
    ITER(0);
    t = d[2];
    ITER(1);
    ITER(0);
    t = d[3];
    ITER(2);
    ITER(1);
    ITER(0);
    t = d[4];
    ITER(3);
    ITER(2);
    ITER(1);
    ITER(0);
    t = d[5];
    ITER(4);
    ITER(3);
    ITER(2);
    ITER(1);
    ITER(0);
#undef ITER
}

// to be debugged
static inline void sort6_shellsort(int *d)
{
    char j, i, inc;
    int tmp;
    for (inc = 4; inc > 0; inc -= 3)
    {
        for (i = inc; i < 5; i++)
        {
            tmp = d[i];
            j = i;
            while (j >= inc && d[j - inc] > tmp)
            {
                d[j] = d[j - inc];
                j -= inc;
            }
            d[j] = tmp;
        }
    }
}

static inline void sort6_fast_network(int *d)
{
//#define SWAP(x,y) asm("mov %0, %2 ; cmp %1, %0 ; cmovg %1, %0 ; cmovg %2, %1" : "=r" (x), "=r" (y), "=r" (tmp) : "0" (x), "1" (y) : "cc");
//    register int x0,x1,x2,x3,x4,x5,tmp;
#define SWAP(x, y)                   \
    {                                \
        int dx = x, dy = y, tmp;     \
        tmp = x = dx < dy ? dx : dy; \
        y ^= dx ^ tmp;               \
    }
    register int x0, x1, x2, x3, x4, x5;
    x1 = d[1];
    x2 = d[2];
    SWAP(x1, x2);
    x4 = d[4];
    x5 = d[5];
    SWAP(x4, x5);
    x0 = d[0];
    SWAP(x0, x2);
    x3 = d[3];
    SWAP(x3, x5);
    SWAP(x0, x1);
    SWAP(x3, x4);
    SWAP(x1, x4);
    SWAP(x0, x3);
    d[0] = x0;
    SWAP(x2, x5);
    d[5] = x5;
    SWAP(x1, x3);
    d[1] = x1;
    SWAP(x2, x4);
    d[4] = x4;
    SWAP(x2, x3);
    d[2] = x2;
    d[3] = x3;

#undef SWAP
#undef min
#undef max
}

static inline void sort6_fast_network_simplified(int *d)
{
//#define SWAP(x,y) asm("mov %0, %2 ; cmp %1, %0 ; cmovg %1, %0 ; cmovg %2, %1" : "=r" (x), "=r" (y), "=r" (tmp) : "0" (x), "1" (y) : "cc");
#define SWAP(x, y)                          \
    {                                       \
        int dx = d[x];                      \
        int dy = d[y];                      \
        int tmp = d[x] = dx < dy ? dx : dy; \
        d[y] ^= dx ^ tmp;                   \
    }
    SWAP(1, 2);
    SWAP(4, 5);
    SWAP(0, 2);
    SWAP(3, 5);
    SWAP(0, 1);
    SWAP(3, 4);
    SWAP(1, 4);
    SWAP(0, 3);
    SWAP(2, 5);
    SWAP(1, 3);
    SWAP(2, 4);
    SWAP(2, 3);
#undef SWAP
#undef min
#undef max
}

static inline unsigned long long rdtsc(void)
{
    unsigned long long int x;
    asm volatile("rdtsc; shlq $32, %%rdx; orq %%rdx, %0"
                 : "=a"(x)
                 :
                 : "rdx");
    return x;
}

void ran_fill(int n, int *a)
{
    static int seed = 76521;
    while (n--)
        *a++ = (seed = seed * 1812433253 + 12345);
}

#define NTESTS 16384
int main()
{

    #define TEST(variant, description)                                                                                                   \
    {                                                                                                                                \
        int i;                                                                                                                       \
        int d[6 * NTESTS];                                                                                                           \
        sort6_##variant(d);                                                                                                          \
        ran_fill(6 * NTESTS, d);                                                                                                     \
        unsigned long long cycles = rdtsc();                                                                                         \
        for (i = 0; i < 6 * NTESTS; i += 6)                                                                                          \
        {                                                                                                                            \
            sort6_##variant(d + i);                                                                                                  \
        }                                                                                                                            \
        cycles = rdtsc() - cycles;                                                                                                   \
        printf(description " : %.2lf\n", (double)cycles / (double)NTESTS);                                                           \
        {                                                                                                                            \
            int passed = 1;                                                                                                          \
            for (i = 0; i < 6 * NTESTS; i += 6)                                                                                      \
            {                                                                                                                        \
                if (d[i + 0] > d[i + 1] || d[i + 1] > d[i + 2] || d[i + 2] > d[i + 3] || d[i + 3] > d[i + 4] || d[i + 4] > d[i + 5]) \
                {                                                                                                                    \
                    printf("d%d : %d %d %d %d %d %d\n", i,                                                                           \
                           d[i + 0], d[i + 1], d[i + 2],                                                                             \
                           d[i + 3], d[i + 4], d[i + 5]);                                                                            \
                    passed = 0;                                                                                                      \
                }                                                                                                                    \
            }                                                                                                                        \
            if (!passed)                                                                                                             \
            {                                                                                                                        \
                printf(" FAILED\n");                                                                                                 \
            }                                                                                                                        \
        }                                                                                                                            \
    }

    TEST(libqsort, "Direct call to qsort library function     ");
    TEST(insertion_sort_v1, "Naive implementation (insertion sort)     ");
    TEST(insertion_sort_v2, "Insertion Sort (Daniel Stutzbach)         ");
    TEST(insertion_sort_unrolled, "Insertion Sort Unrolled                   ");
    TEST(rank_order, "Rank Order                                ");
    TEST(rank_order_reg, "Rank Order with registers                 ");
    TEST(sorting_network_v1, "Sorting Networks (Daniel Stutzbach)       ");
    TEST(sorting_network_v2, "Sorting Networks (Paul R)                 ");
    TEST(sorting_network_v3, "Sorting Networks 12 with Fast Swap        ");
    TEST(sorting_network_v4, "Sorting Networks 12 reordered Swap        ");
    TEST(sorting_net_simple_swap, "Sorting Networks 12 reordered Simple Swap (");
    TEST(fast_network, "Reordered Sorting Network w/ fast swap    ");
    TEST(fast_network_simplified, "Reordered Sorting Network w/ fast swap V2 ");
    TEST(inlined_bubble, "Inlined Bubble Sort (Paolo Bonzini)       ");
    TEST(insertion_sort_unrolled_v2, "Unrolled Insertion Sort (Paolo Bonzini)   ");
}
