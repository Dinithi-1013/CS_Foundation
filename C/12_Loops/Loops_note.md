# Loops in C

Loops are used to execute a block of code repeatedly until a specified condition is met. They help avoid code repetition and make programs concise and efficient.

## Key Aspects

- **Initialization:** Set up a variable before the loop starts.
- **Condition:** The loop continues as long as this is true.
- **Update:** Change the variable to eventually end the loop.

## Common Loop Types

### 1. `for` Loop

Best when the number of iterations is known.

```c
for (initialization; condition; update) {
    // code to execute
}
```

**Example:**

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

### 2. `while` Loop

Use when the number of iterations is not known in advance.

```c
while (condition) {
    // code to execute
}
```

**Example:**

```c
int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
```

### 3. `do...while` Loop

Executes the code block at least once.

```c
do {
    // code to execute
} while (condition);
```

**Example:**

```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);
```

## Making Code Smaller

- Use concise loop conditions and updates.
- Combine initialization, condition, and update in `for` loops.
- Use `break` to exit early and `continue` to skip to the next iteration.

**Example:**

```c
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) continue; // skip even numbers
    printf("%d\n", i);
}
```

**Tip:** Prefer `for` loops for counting, and `while` loops for indefinite repetition.
