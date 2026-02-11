# Stack<T> — Template Stack Implementation in C++

A generic implementation of a **Stack (LIFO data structure)** using dynamically linked nodes in C++ with templates.

This class allows you to store elements of any type (`int`, `float`, `std::string`, custom objects, etc.) following the **Last In, First Out (LIFO)** principle.

---

##  Features

- Generic implementation using `template<typename T>`
- Dynamic node allocation
- Safe memory deallocation
- Full stack cleanup method (`Clear`)
- Automatic destructor cleanup
- Access to the top node value (`GetTop`)

---

##  Internal Structure

Each element is stored inside a node:

```cpp
struct mNode
{
    T value;
    mNode* nextNode;
};
```

The stack maintains a pointer to the top node:

```cpp
mNode* mTop = nullptr;
```

---

##  Installation / Usage

1. Copy the class into a header file, for example:

```
Stack.hpp
```

2. Include it in your project:

```cpp
#include "Stack.hpp"
```

---

##  Usage Example

```cpp
#include <iostream>
#include "Stack.hpp"

int main()
{
    Stack<int> myStack;

    myStack.Push(10);
    myStack.Push(20);
    myStack.Push(30);

    std::cout << "Top: "
              << myStack.GetTop()
              << std::endl;

    myStack.Pop();

    std::cout << "New Top: "
              << myStack.GetTop()
              << std::endl;

    myStack.Clear();

    return 0;
}
```

---

##  Class Reference

### `void Push(T value)`
Pushes an element onto the top of the stack.

**Time Complexity:** O(1)

---

### `void Pop()`
Removes the element at the top of the stack.

- Does nothing if the stack is empty.
- Frees dynamically allocated memory.

**Time Complexity:** O(1)

---

### `T& GetTop() const`
Returns the value of the top node.

     May return `nullptr` if the stack is empty.

---

### `void Clear()`
Removes all elements from the stack iteratively using `Pop()`.

---

### `bool isEmpty()`
Returns if the Stack is empty or not`Pop()`.

**Time Complexity:** O(n)

---

### `~Stack()`
Class destructor.

Automatically releases all allocated memory when the stack object goes out of scope.

---

##  Notes

- This implementation uses raw pointers (`new` / `delete`).
- Copy constructor and assignment operator are not implemented.
- Not thread‑safe.
- Intended for educational / foundational data structure practice.


---

## Milestones For The Next Commits


 - Implement the copy constructor so the addresses don't duplicate 
 - Implement the Stack Class with thread-safe principles 
 - Find a better way of managing the pointers


---

##  License

This project is open-source and free to use for educational purposes.
