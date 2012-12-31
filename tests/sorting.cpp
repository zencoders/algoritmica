#include "algorithms/sorting/insertsort.hpp"
#include "algorithms/sorting/quicksort.hpp"
#include "algorithms/sorting/selectionsort.hpp"

#include "littletest.hpp"

using namespace algoritmica::algorithms::sorting;

// Adapter to reuse the same testing structure for quicksort, that has a
// different signature from other sorting algorithms.
template <typename T>
void quicksort_adapter(T s, int size) {
    quicksort(s, 0, size - 1);
}

LT_BEGIN_SUITE(ordering_basic)
    int expected[5];

    void set_up() {
        for (int i = 0; i < 5; ++i) {
            expected[i] = i + 1;
        }
    }

    void tear_down() {}
LT_END_SUITE(ordering_basic)

#define BASIC_ORDERING_TESTS(__algo__) \
LT_BEGIN_AUTO_TEST(ordering_basic, empty_ ## __algo__) \
    int empty1[] = {}; \
    int empty2[] = {}; \
    __algo__(empty1, 0); \
    LT_CHECK_COLLECTIONS_EQ(empty1, empty1, empty2) \
LT_END_AUTO_TEST(empty_ ## __algo__) \
\
LT_BEGIN_AUTO_TEST(ordering_basic, ordered_ ## __algo__) \
    int ordered[] = {1, 2, 3, 4, 5}; \
    __algo__(ordered, 5); \
    LT_CHECK_COLLECTIONS_EQ(ordered, ordered + 4, expected) \
LT_END_AUTO_TEST(ordered_ ## __algo__) \
\
LT_BEGIN_AUTO_TEST(ordering_basic, reversed_ ## __algo__) \
    int reversed[] = {5, 4, 3, 2, 1}; \
    __algo__(reversed, 5); \
    LT_CHECK_COLLECTIONS_EQ(reversed, reversed + 4, expected) \
LT_END_AUTO_TEST(reversed_ ## __algo__)

BASIC_ORDERING_TESTS(insertsort)
BASIC_ORDERING_TESTS(quicksort_adapter)
BASIC_ORDERING_TESTS(selectionsort)

LT_BEGIN_AUTO_TEST_ENV()
    AUTORUN_TESTS()
LT_END_AUTO_TEST_ENV()
