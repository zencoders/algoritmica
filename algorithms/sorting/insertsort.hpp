#ifndef _ALGORITMICA_INSERTSORT_
#define _ALGORITMICA_INSERTSORT_

#include "functions.hpp"

namespace algoritmica
{
namespace algorithms
{
namespace sorting
{

template <typename T1>
void insertsort(T1 s[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int j = i;
        while((j > 0) && (s[j] < s[j-1]))
        {
            details::swap(&s[j], &s[j-1]);
            j--;
        }
    }
}

} // sorting
} // algorithms
} // algoritmica

#endif //_ALGORITMICA_INSERTSORT_
