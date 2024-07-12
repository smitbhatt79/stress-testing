# Stress testing script for Competitive Programming solutions (Windows)
Script to identify test cases where a code produces incorrect results by comparing its output against a known correct solution 



## Deployment

To deploy this project run

```bash
git clone https://github.com/smitbhatt79/stress-testing
```


## Working

```brute.cpp``` must contain the known correct solution

```solution.cpp``` must contain the incorrect solution for which failing case is desired

```gen.cpp``` must generate test cases for stress testing

An example of how these files can be is provided initially  [For this [Problem](https://codeforces.com/contest/1982/problem/C)]

## Running Tests

- Open terminal,  change your working directory to the directory in which you cloned this project
- Paste the path of the stress.bat file followed by the number of cases for which you want to stress test your solution

```
cd path/to/stress-testing
```
```
path/to/stress-testing/stress.bat 100
```

Above command will stress test for 100 cases

To not see test cases as you stress test comment these lines in the stress.bat file
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

Video demonstration of the same : 

https://github.com/user-attachments/assets/82b73607-189d-4cbd-a729-14d7f023cb5a



