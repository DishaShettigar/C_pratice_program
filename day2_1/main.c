#include <assert.h>
#include "operator.h"

#define YES 1
#define NO 0
int main()
{
    assert(sum_digits(13457) == 20);
    assert(sum_digits(12345) == 15);
    assert(sum_digits(10001) == 2);
    assert(sum_digits(10000) == 1);
    assert(sum_digits(34000) == 7);


    assert(sum_digits_modulus(13457) == 20);
    assert(sum_digits_modulus(12345) == 15);
    assert(sum_digits_modulus(10001) == 2);
    assert(sum_digits_modulus(10000) == 1);
    assert(sum_digits_modulus(34000) == 7);


    assert(reverse_number(12345)== 54321);
    assert(reverse_number(347890021)== 120098743);

    assert(occurance_digit(1234)==4);
    assert(occurance_digit(58793023)==8);
    assert(occurance_digit(0000)==0);


    assert(palindrome(1001)==YES);
    assert(palindrome(56788765)==YES);
    assert(palindrome(123123)==NO);
    assert(palindrome(00)==YES);


    assert(generate_prime_numbers(5)==5);

}
