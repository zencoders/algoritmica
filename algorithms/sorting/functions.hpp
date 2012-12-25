#ifndef _ALGORITMICA_SORTING_FUNCTIONS_
#define _ALGORITMICA_SORTING_FUNCTIONS_

namespace algoritmica
{
namespace algorithms
{
namespace sorting
{
namespace details
{

    template <typename T1>
    void swap(T1* a, T1* b);

    template <typename T1>
    void swap(T1* a, T1* b)
    {
        T1 t = *a;
        *a = *b;
        *b = t;
    }
}
}
}
}

#endif //_ALGORITMICA_SORTING_FUNCTIONS_
