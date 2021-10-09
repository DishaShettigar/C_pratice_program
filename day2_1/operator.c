#include <stdio.h>
#include "operator.h"

//enter a 5 digit no 12345 sum=15
//using modulus
int sum_digits_modulus(int input)
{
    int reminder, sum = 0;

    while(input != 0)
    {
        reminder = input % 10; // get the last digit
        sum = sum + reminder; // add the digit to sum
        input = input / 10;  // remove the last digit
    }
     return sum;
}
//or this code
int sum_digits(int input)
{
    // Input number is 13457; expected output 20
    int sum = 0;
    int power = 10000, reminder, digit_in_hand;
    while(power != 0)
    {
        reminder = input % power;
        digit_in_hand = input/ power;
        sum = sum + digit_in_hand;
        input = reminder;
        power = power / 10;
    }
    return sum;
}


//to reverse the number
int reverse_number(int n)
{
    int reminder, rev=0;
    while(n!=0)
    {
        reminder = n % 10;
        rev = rev * 10 + reminder;
        n = n/10;  //n/= 10;
    }
    return rev;
}


//to count the occurance of digit
int occurance_digit(int n)
{
    int count=0;
    while(n!=0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

//plaindrome 12321, 56788765
int palindrome(int n)
{
    int sum=0,temp,rem;
    temp = n;
    while(n>0)
    {
        rem = n % 10;
        sum = (sum* 10) + rem;
        n = n/10;
    }
    if(temp==sum)
        return  1;// 1 if its palindrome
    else
        return 0;// 0 if its not a palindrome
}

//generate prime no
int is_prime_number(int input)
{
    int i;

    for(i=2; i <= input/2; i++)
    {
        if(input % i == 0)
            return 0;
    }
   return 1;
}
// If limit = 6; we are suppose to find 2,3,5,7,11,13
int generate_prime_numbers(int limit)
{
    int count = 0, input = 2;

    while(count < limit)
    {
        if(is_prime_number(input)){ // check if it is a prime number
            count++; // keep track of prime numbers
            printf("%d \t", input); // display the prime number
        }

        input++; // choosing next number
    }

    return count;
}
