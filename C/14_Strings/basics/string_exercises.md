# 🔐 C String Exercises in C (Without `string.h`)
> **🚫 Do not use the `string.h` library for these exercises.**  
> Practice implementing all string operations manually!

---

## 🚧 Exercise 1: Username Validator

### 🧠 Objective:
Create a program that checks whether a given username is valid.

### ✅ Requirements:
- The username should contain only:
  - Letters (A–Z, a–z)
  - Digits (0–9)
  - Underscores (_)
- The username must be at least **5 characters** long.

### 📥 Sample Input:
```
Enter a username: hacker_01
```

### 📤 Sample Output:
```
Valid username.
```

### ❌ Invalid Input:
```
user!
```

### 📤 Output:
```
Invalid character found.
```

---

### 🛠 Hints:
- Use `scanf()` to get input.
- Use a `for` loop to iterate each character.
- Check characters using comparisons like:
  ```c
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ...)
  ```
- Manually count length and compare to 5.

---

## 🧠 Exercise 2: Word Frequency Counter (Lite)

### 🧠 Objective:
Create a program that counts how many times each word appears in a sentence.

### ✅ Requirements:
- Read a full sentence from the user (up to 100 characters).
- Split the sentence into words using spaces.
- Count and display how many times each word appears.

### 📥 Sample Input:
```
This is a test this is only a test
```

### 📤 Sample Output:
```
this: 2
is: 2
a: 2
test: 2
only: 1
```

---

### 🔧 Constraints:
- No pointer arithmetic.
- Use a 2D array to store words: `char words[50][20];`
- Use a parallel array for count: `int count[50];`
- Do basic case normalization (convert all letters to lowercase).
- Skip punctuation manually.

---

### 🛠 Hints:
- Use `fgets()` to read the sentence.
- Manually split on `' '` using a loop.
- Compare strings using your own `compareStrings()` function.
- Convert each character to lowercase manually:
  ```c
  if (ch >= 'A' && ch <= 'Z') ch = ch + 32;
  ```

---


> Master the machine. Don’t just code it — **command it**.

---
