**TASK 1**

Difference between a Normal Variable and a Pointer
A **normal** variable stores an actual data value in memory. The value is accessed and modified directly using the variable name  while
A **pointer** stores the memory address of another variable. To access or modify the value stored at that address, the pointer must be dereferenced.

Example
```c
int x = 10;      // normal variable
int *p = &x;    // pointer storing address of x


2. Variable Declaration vs Pointer Declaration

A variable declaration reserves memory to store a value, while a pointer declaration reserves memory to store an address.
The (&) operator is used to obtain the address of a variable, while the (*) operator is used to declare a pointer or dereference it

int num = 5;
int *ptr = &num;

3. Dereferencing a Pointer
Dereferencing a pointer means accessing the value stored at the memory address held by the pointer. This allows indirect modification of the variable.

int x = 10;
int *p = &x;
*p = 20;

4. Scenarios Where Pointers Are Preferred
Pointers are preferred in situations such as:
-Passing large data structures to functions to improve performance
-Dynamic memory allocation
-Modifying variables inside functions

5. Limitations and Risks of Using Pointers
Dangling pointers
-Null pointer dereferencing
-Memory leaks
-Program crashes due to incorrect memory access

6. Call by Value vs Call by Reference
Call by Value
-A copy of the variable is passed to the function. Changes do not affect the original variable.

**EXAMPLE**
void change(int x) {
    x = 20;
}

Call by Reference
The address of the variable is passed. Changes affect the original variable.

**EXAMPLE**
void change(int *x) {
    *x = 20;
}
7. Practical Scenarios
Call by Value is preferred when:
-Original data should not be modified
-Working with small data values

**Call by Reference is preferred when:**
-The function needs to modify original data
-Passing arrays or large data structures
-Improving memory efficiency




