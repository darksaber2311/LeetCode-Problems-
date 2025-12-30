# LeetCode Problems

Curated C++ solutions to selected LeetCode problems, organized by difficulty. Use this as a quick reference for classic patterns and as a starting point for your own solutions.

## Layout
- `Easy/` — placeholder for easy problems.
- `Medium/` — implemented C++ solutions (see list below).
- `Hard/` — placeholder for hard problems.

## Implemented solutions (C++)
- `Medium/P-15.cpp` — 3Sum (two‑pointer after sorting).
- `Medium/P-33.cpp` — Search in Rotated Sorted Array (binary search on sorted half).
- `Medium/P-56.cpp` — Merge Intervals (sort + sweep merge).
- `Medium/P-75.cpp` — Sort Colors (Dutch national flag).
- `Medium/P-238.cpp` — Product of Array Except Self (prefix/suffix products).

## How to run locally
1. Ensure a C++17 compiler (e.g., `g++` or `clang++`) is installed.
2. Compile the desired solution; example for 3Sum:
   - `g++ -std=c++17 -O2 Medium/P-15.cpp -o three_sum`
3. Provide input in the format expected by the LeetCode problem (or adapt the `main` function as needed if you add one).

## Contributing
- Add new solutions under the matching difficulty folder using the pattern `P-<problem-number>.cpp`.
- Keep implementations self-contained and include brief comments only where the logic is non-obvious.
- Update this README when adding or significantly changing solutions.

## Notes
- The text files in each difficulty folder are placeholders for future problem listings.
- Solutions favor clarity and standard library usage; no external dependencies are required.

