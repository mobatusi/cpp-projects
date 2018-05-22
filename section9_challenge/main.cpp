// Section 9
// Challenge

/*
  This challenge is about using a collection (list) of integers and allowing the user
  to select options from a menu to perform operations on the list.

  Your program should display a menu options to the user as follows:

  P - Print numbers
  A - Add a number
  M - Display mean of the numbers
  S - Display the smallest number
  L - Display the largest number
  Q - Quit

  Enter your choice:

The program should only accept valid choices from the user, both upper and
lowercase selections should be allowed.
If an illegal choice is made, you should display. "unknown selection, please try again"
and the menu options should be displayed again.

If the user enters 'P' or 'p', you should display all the elements (ints) in the list
If the list is empty you should dispaly "[] - the list is empty"
If the list is not empty then all the list elements should be displayed inside square brackets
by a space/
For example [1 2 3 4 5]

if the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For eample, if the user enters S
you should display '5 added'/
Duplicate list entries are ok 
