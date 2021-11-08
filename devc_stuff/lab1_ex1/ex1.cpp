#include <stdio.h>
#include "ex1.h"

int get_choice(void)
{
    /*
    This functions displays the menu. It also asks for a choice from the user. Then it would be returned as an output
    Input: None
    Returns:
        choice (int) = Whatever choice the user entered in the console
    */
    int choice = 0;
    printf("Menu: \n");
    printf("1. Display the numbers\n");
    printf("2. Display it in reverse order\n");
    printf("3. Display values of even indices\n");
    printf("4. Display values of odd indices\n");
    printf("5. Rotate array by k (Forward)\n");
    printf("6. Rotate array by k (Backward)\n");

    printf("choice: ");
    scanf("%d", &choice);
    return choice;
}

void get_numbers(int size, int arr_numbers[])
{
    /*
    This function would get an input from the user using the console.
    Parameters:
        size (int) = tells you how many expected number of inputs would we need from the user
        arr_numbers(int) = this is where you store the numbers entered by the user
    */

    // YOUR CODE HERE
}

void display_original(int array[], int size)
{
    /* display_original function would simply display the array
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

    // YOUR CODE HERE
}

void display_reverse(int array[], int size)
{
    /* display_reverse function would display the elements array in reverse order
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

    // YOUR CODE HERE
}

void display_even(int array[], int size)
{
    /* display_even function would display the elements of even indices starting from 0
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

    // YOUR CODE HERE
}

void display_odd(int array[], int size)
{
    /* display_even function would display the elements of odd indices starting from 1
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

    // YOUR CODE HERE
}

void rotate_forward(int array[], int size, int offset)
{
    /* rotate_forward function would rotate all elements towards the right. It would ask for index k to know its offset
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

    // YOUR CODE HERE
}

void rotate_backward(int array[], int size, int offset)
{
    /* rotate_backward function would rotate all elements towards the left. It would ask for index k to know its offset
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

    // YOUR CODE HERE
}

void process_array(int array[], int size)
{
    /*
    Process Array function would be a placeholder function to process the input based on the given problem.
    In this exercise, this function would like to use get_choice to get an input from the user.
    Afterwards, it would perform some processing depending on the input.
    The type of processing is as follows:
        1 = just display the original (using display_original function)
        2 = display its reverse (using display_reverse function)
        3 = display values of even indices (using display_even function)
        4 = display values of odd indicies (using display_odd function)
        5 = display values from k to k-1 (using display_k function)

    Input:
        array[] (int) = the array to be processed
        size (int) = the size of the array to be processed
    Returns:
        None
    */
    int choice = get_choice();
    if (choice == 1)
    {
        display_original(array, size);
    }
    else if (choice == 2)
    {
        display_reverse(array, size);
    }
    else if (choice == 3)
    {
        display_even(array, size);
    }
    else if (choice == 4)
    {
        display_odd(array, size);
    }
    else if (choice == 5)
    {
        int offset;
        printf("offset: ");
        scanf("%d", &offset);
        rotate_forward(array, size, offset);
    }
    else if (choice == 6)
    {
        int offset;
        printf("offset: ");
        scanf("%d", &offset);
        rotate_backward(array, size, offset);
    }
}
