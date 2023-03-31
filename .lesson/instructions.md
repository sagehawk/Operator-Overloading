# Instructions  

  ** Overloading operators **

Using the provided point class, overload operators to improve functionality

Overload the following operators:

* Distance between two points (operator-)
* Input (operator>>) 
* Output (operator<<) 
* Equality (operator==)
* Inequality (operator!=). 
* Midpoint (operator/).
* Equals (operator=)

You decide to also fix up your friend's class by adding operator= and 'missing' constructors.

Don't forget to write a small test application to show that the class still works -- new operators and all!

Thought Provoking Questions
Which operators are members and which are non-members? Do any have to be members?
Which operators should be const? What other methods might well be made const? In general, what is the rule which determines if a method should be made const?
What type do equality and and inequality return? Input? Output? Assignment?
Do you agree with your friend's decision to use operator/ for midpoint? Why/Why not?
Why didn't you overload operators for less than, greater than, etc.?
Your friend wanted to overload operators for the flip and shift methods, too (~ and += respectively). Why did you talk them out of it? Why wasn't this a good idea?
Just because you've added operators, should you necessarily remove the old methods that did these jobs?
This assignment is (Level 2).

Options
Add (Level 1) to overload operator[] to return the x or y part of the point. For instance:

   Point p(3.2, 9.8);
   double my_x;
   my_x = p['x'];   // my_x should be 3.2
would store the Point p's x value (3.2) for storage in my_x.

More Thought Provoking Questions
Should the programmer be able to do:
    p['X'] = 2.0;
to change the X-coordinate of a Point object p?
If you were going to allow such behavior, how would you do it?