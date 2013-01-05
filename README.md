algoritmica
===========

A fully templatized algorithms library.

Algoritmica is pure exercise in essentially 3 different fields:

* Data Structures
* Algorithms
* C++

# Development Objectives

## Data Structures

### Arrays

* Bidirectional map
* Bit array
* Bit field
* Bitboard
* Bitmap
* Circular buffer
* Control table
* Dynamic array
* Gap buffer
* Hashed array tree
* Heightmap
* Lookup table
* Matrix
* Parallel array
* Sorted array
* Sparse array
* Sparse matrix
* Iliffe vector
* Tuple

### Lists

### Graphs

### Binary Trees

### B-Threes

### Heaps

### Tries

### Multiway Trees

### Space Partitioning Trees

### AS Trees

### Hashes

### Other

## Algorithms

### Sorting

# Development Rules

* Each implemented code must not have any external dependency
* Implemented algorithms are allowed to use only data structures contained inside the library (STL structures and algorithms are not allowed)
* Each algorithm must be applicable to all the structures inside the library (where obviously it is rational) and with all STL structures.
* Implementations using C++0x are allowed but it must be possible to make them optional at compile time using the macro NOCPP11.
