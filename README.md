# Programming Assignment 2

2022-2023 Spring Semester

## Program Description: 
This C program uses the fork() system call that generates the sequence provided by the Collatz Conjecture in the child process. 

------------------------------------------

## Files
`ProgAssn2.c`
* Source code for the program. 

`README.md`
* README file to explain all aspects of the program. 

------------------------------------------

## Collatz Conjecture
The Collatz Conjecture concerns what happens when we take any positive integer *n* and apply the following algorithm: 

If *n* is even: 
* *n* = *n* / 2

If *n* is odd: 
* *n* = 3*n* + 1

------------------------------------------

## Sequence Examples
If *n* = 8:
* 8, 4, 2, 1

If *n* = 35:
* 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1

-------------------------------------

## Program Compilation
In the command line, or VSCode terminal, follow the steps below: 
1. Compile the program:
* ```gcc ProgAssn2.c -o PA2```
2. Press ENTER
3. Run the executable file `PA2` and put *n* after, *n* being the positive integer for the Collatz Conjecture. Refer to valid argument values for *n* in the next section.
* ```./PA2 3```
4. Press ENTER
5. Sample Output (Given *n* = 3):
* ```3, 10, 5, 16, 8, 4, 2, 1```

-------------------------------------

## Sample Outputs
The outputs below are shown with the assumption that the compiled program is named PA2 and (if provided) argument after is the value for *n*.

Example 1: VALID
```
./PA2 3
3, 10, 5, 16, 8, 4, 2, 1
```

Example 2: INVALID
```
./PA2 -3
<starting value> should be a positive integer>
```

Example 3: INVALID
```
./PA2
Usage: ./PA2 <starting value>
```

Example 4: INVALID
```
./PA2 3 10
Usage: ./PA2 <starting value>
```