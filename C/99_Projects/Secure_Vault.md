# Secure Vault: Code Lock Simulator

Design a C program that simulates a secure vault with a combination lock. The vault requires a 4-digit PIN code to unlock, and the user has a limited number of attempts to guess the code. After each incorrect guess, the program should provide a hint indicating how many digits in the guess are correct and in the correct position. Use a `do...while` loop to repeatedly prompt the user until the correct code is entered or all attempts are used.

## Program Requirements

* The vault has a predetermined 4-digit secret code (e.g., 5732). Prompt the user to enter a 4-digit integer as their guess.
* Allow the user up to 5 attempts to guess the code.
* **After each guess:**

  * If the guess is correct, display a success message (e.g., "Correct code! Vault unlocked.") and end the program.
  * If the guess is incorrect and attempts remain, display the number of digits that are correct **and** in the correct position (for example, "2 digits correct."). Then indicate how many attempts are remaining.
  * If the guess is incorrect and no attempts remain, display a failure message (e.g., "No attempts remaining. Vault locked.") and end the program.
* **Input validation:** If the user enters a number that is not a 4-digit integer (for example, less than 1000 or greater than 9999), print an error message (for example, "Invalid input. Please enter a 4-digit numeric code.") and prompt again without consuming an attempt.
* Use a `do...while` loop to repeat the guessing process until success or until no attempts remain.
* Use only basic C features (variables, loops, conditionals, `printf`, `scanf`, etc.) to solve the problem.

## Example Runs

```c
Enter the 4-digit PIN: 5723
Incorrect code. 2 digits correct.
Attempts remaining: 4.
Enter the 4-digit PIN: 9999
Incorrect code. No digits correct.
Attempts remaining: 3.
Enter the 4-digit PIN: 573
Invalid input. Please enter a 4-digit numeric code.
Attempts remaining: 3.
Enter the 4-digit PIN: 5732
Correct code! Vault unlocked.
```

``` c
Enter the 4-digit PIN: 5721
Incorrect code. 2 digits correct.
Attempts remaining: 4.
Enter the 4-digit PIN: 1000
Incorrect code. No digits correct.
Attempts remaining: 3.
Enter the 4-digit PIN: 5777
Incorrect code. 2 digits correct.
Attempts remaining: 2.
Enter the 4-digit PIN: 5733
Incorrect code. 3 digits correct.
Attempts remaining: 1.
Enter the 4-digit PIN: 0000
Incorrect code. No digits correct.
No attempts remaining. Vault locked.
```

* **Hint:** Think carefully about how to compare each digit of the guess to the secret code (for example, using integer division and modulo). Also consider edge cases such as repeated digits in the code or invalid inputs when testing your program.
