#ifndef _ALGORITMICA_QUICKSORT_
#define _ALGORITMICA_QUICKSORT_

#include "functions.hpp"

namespace algoritmica
{
namespace algorithms
{
namespace sorting
{

template <typename T1>
void quicksort(T1 s[], int l, int h);

namespace details
{

template <typename T1>
int partition(T1 s[], int l, int h);

} // details

} // sorting
} // algorithms
} // algoritmica


namespace algoritmica
{
namespace algorithms
{
namespace sorting
{
namespace details
{
    template <typename T1>
    int partition(T1 s[], int l, int h)
    {
        int pivot = h;
        int firsthigh = l;
        for(int i = l; i < pivot; ++i)
        {
            if(s[i] < s[pivot])
            {
                details::swap(&s[i], &s[firsthigh]);
                firsthigh++;
            }
        }
        details::swap(&s[firsthigh], &s[pivot]);
        return firsthigh;
    }
} // details

template <typename T1>
void quicksort(T1 s[], int l, int h)
{
    int p;
    if(h > l)
    {
        p = details::partition(s, l, h);
        quicksort(s, l, p - 1);
        quicksort(s, p + 1, h);
    }
}

} // sorting
} // algorithms
} // algoritmica

#endif //_ALGORITMICA_QUICKSORT_
