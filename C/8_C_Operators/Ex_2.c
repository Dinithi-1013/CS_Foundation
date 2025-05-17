/*
 * Compound Assignment Operators Exercise
 * 
 * In this exercise, you will practice using compound assignment operators in C.
 * Follow the instructions in each task to modify the given variables using
 * the appropriate compound assignment operators.
 */

#include <stdio.h>

int main() {
    int score = 100;    // Starting score in a game
    int lives = 3;      // Number of lives in a game
    int coins = 20;     // Number of coins collected
    float health = 100.0; // Player health percentage
    int ammo = 50;      // Amount of ammunition
    
    printf("Initial values:\n");
    printf("Score: %d, Lives: %d, Coins: %d, Health: %.1f, Ammo: %d\n\n", 
           score, lives, coins, health, ammo);
    
    /*
     * TASK 1: The player earns 50 points. Use the += operator to add
     * these points to the 'score' variable.
     */
    // YOUR CODE HERE
    
    
    /*
     * TASK 2: The player loses 1 life. Use the -= operator to subtract
     * this from the 'lives' variable.
     */
    // YOUR CODE HERE
    
    
    /*
     * TASK 3: The player's coins are doubled after collecting a power-up.
     * Use the *= operator to multiply the 'coins' variable by 2.
     */
    // YOUR CODE HERE
    
    
    /*
     * TASK 4: The player's health is reduced by half after being hit.
     * Use the /= operator to divide the 'health' variable by 2.
     */
    // YOUR CODE HERE
    
    
    /*
     * TASK 5: The player's ammo is set to the remainder when divided by 30
     * (representing reloading with a clip size of 30).
     * Use the %= operator with the 'ammo' variable.
     */
    // YOUR CODE HERE
    
    
    // Print the new values after applying compound operators
    printf("After game updates:\n");
    printf("Score: %d, Lives: %d, Coins: %d, Health: %.1f, Ammo: %d\n\n", 
           score, lives, coins, health, ammo);
    
    /*
     * BONUS CHALLENGE:
     * Create a level_multiplier variable equal to 3 (representing level 3)
     * Use compound operators to:
     * 1. Multiply score by the level_multiplier
     * 2. Add one extra life for each level
     * 3. Reduce health by 10% for each level
     */
    // YOUR CODE HERE
    
    
    // Print the final values after the bonus challenge
    printf("After level multiplier bonus:\n");
    printf("Score: %d, Lives: %d, Coins: %d, Health: %.1f, Ammo: %d\n", 
           score, lives, coins, health, ammo);
    
    return 0;
}