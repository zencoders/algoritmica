BUILDDIR=build
TEST_SRCDIR=tests

tests: sorting
	${BUILDDIR}/sorting

sorting: init ${TEST_SRCDIR}/sorting.cpp
	g++ ${TEST_SRCDIR}/sorting.cpp -I. -o ${BUILDDIR}/sorting ${CXXFLAGS}

init:
	mkdir -p ${BUILDDIR}

clean:
	rm -rf ${BUILDDIR}
