#ifndef _ALGORITMICA_SELECTIONSORT_
#define _ALGORITMICA_SELECTIONSORT_

#include "functions.hpp"

namespace algoritmica
{
namespace algorithms
{
namespace sorting
{

template <typename T1>
void selectionsort(T1 s[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int min = i;

        for(int j = i + 1; j < size; ++j)
        {
            if(s[j] < s[min])
                min = j;
        }
        details::swap(&s[i], &s[min]);
    }
}

} // sorting
} // algorithms
} // algoritmica

#endif //_ALGORITMICA_SELECTIONSORT_
