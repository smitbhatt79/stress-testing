# Stress Testing Script for Competitive Programming Solutions (Windows)
A script to identify test cases where a code produces incorrect results by comparing its output against a known correct solution.

## Deployment

To deploy this project, run:
```
    git clone https://github.com/smitbhatt79/stress-testing
```
## Working

- `brute.cpp` must contain the known correct solution.
- `solution.cpp` must contain the incorrect solution for which the failing case is desired.
- `gen.cpp` must generate test cases for stress testing.

An example of how these files can be structured is provided initially [for this problem](https://codeforces.com/contest/1982/problem/C).

## Running Tests

1. Open terminal and change your working directory to the directory where you cloned this project.
2. Paste the path of the `stress.bat` file followed by the number of cases for which you want to stress test your solution. The command below will stress test for 100 cases:
```
    cd path/to/stress-testing
```
```
    path/to/stress-testing/stress.bat 100
```

To avoid seeing test cases as you stress test, comment out these lines in the `stress.bat` file:
```
    echo Input: 
    type input.in
    echo.
    echo Output:
    type output.out
    echo Expected:
    type output2.out
    echo.
```
Video demonstration of the same: 

https://github.com/user-attachments/assets/82b73607-189d-4cbd-a729-14d7f023cb5a
