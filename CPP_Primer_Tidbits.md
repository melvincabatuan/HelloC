# Chapter 7. Classes

In C++ we use classes to define our own data types. 

By defining types that mirror concepts in the problems we are trying to solve, we can make our programs easier to write, debug, and modify.

The fundamental ideas behind classes are *data abstraction* and *encapsulation*.

## Data abstraction

- a programming (and design) technique that relies on the separation of *interface* and *implementation*. The interface of a class consists of the operations that users of the class can execute. The implementation includes the class' data members, the bodies of the functions that constitute the interface, and any functions needed to define the class that are not intended for general use.

## Encapsulation

- enforces the separation of a class’ interface and implementation. A class that is encapsulated hides its implementation - users of the class can use the interface but have no access to the implementation.


## Abstract data type

- A class that uses data abstraction and encapsulation defines an abstract data type. In an abstract data type, the class designer worries about how the class is implemented. Programmers who use the class need not know how the type works. They can instead think abstractly about what the type does.


## Class 'Designer' and 'User' programmer roles

- Programmers tend to think about the people who will run their applications as users. Similarly a class designer designs and implements a class for users of that class. In this case, the user is a programmer, not the ultimate user of the application.


### "Functions defined in the class are implicitly ```inline```"

### "Objects that are ```const```, and references or pointers to ```const``` objects, may call only ```const``` member functions."


## Class Scope and Member Functions

- The definitions of the member functions of a class are nested inside the scope of the class itself. The compiler processes classes in two steps - the member declarations are compiled first, after which the member function bodies, if any, are processed. Thus, member function bodies may use other members of their class regardless of where in the class those members appear.

## Defining a Member Function outside the Class

- As with any other function, when we define a member function outside the class body, the member’s definition must match its declaration. That is, the return type, parameter list, and name must match the declaration in the class body. If the member was declared as a ```const``` member function, then the definition must also specify ```const``` after the parameter list.

Ex.

```cpp
double Sales_data::avg_price() const {
if (units_sold)
	return revenue/units_sold;
else
	return 0;
}
```


##
