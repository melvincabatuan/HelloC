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

The function name, ```Sales_data::avg_price```, uses the scope operator to say that we are defining the function named ```avg\_price``` that is declared in the scope of the ```Sales\_data``` class. Once the compiler sees the function name, the rest of the code is interpreted as being inside the scope of the class. Thus, when ```avg\_price``` refers to revenue and ```units\_sold```, it is implicitly referring to the members of ```Sales\_data```. 


## Constructors

- Each class defines how objects of its type can be initialized. Classes control object initialization by defining one or more special member functions known as *constructors*. The job of a constructor is to initialize the data members of a class object. A *constructor* is run whenever an object of a class type is created.

Constructors have the same name as the class. Unlike other functions, constructors have no return type. Like other functions, constructors have a (possibly empty) parameter list and a (possibly empty) function body. A class can have multiple constructors. Like any other overloaded function, the constructors must differ from each other in the number or types of their parameters.

Unlike other member functions, constructors may not be declared as ```const```. When we create a ```const``` object of a class type, the object does not assume its “constness” until after the constructor completes the object’s initialization. Thus, constructors can write to ```const``` objects during their construction.


### "The *default constructor* is one that takes no arguments."

### "The compiler generates a default constructor automatically only if a class declares no constructors."

## Best Practices: Constructors should not override in-class initializers except to use a different initial value. If you can’t use in-class initializers, each constructor should explicitly initialize every member of built-in type.


## Copy, Assignment, and Destruction

In addition to defining how objects of the class type are initialized, classes also control what happens when we copy, assign, or destroy objects of the class type. Objects are copied in several contexts, such as when we initialize a variable or when we pass or return an object by value. Objects are assigned when we use the assignment operator. Objects are destroyed when they cease to exist, such as when a local object is destroyed on exit from the block in which it was created. Objects stored in a vector (or an array) are destroyed when that vector (or array) is destroyed.

Although the compiler will synthesize the copy, assignment, and destruction operations for us, it is important to understand that for some classes the default versions do not behave appropriately. In particular, the synthesized versions are unlikely to work correctly for classes that allocate resources that reside outside the class objects themselves.

However, it is worth noting that many classes that need dynamic memory can (and generally should) use a *vector* or a *string* to manage the necessary storage. Classes that use vectors and strings avoid the complexities involved in allocating and deallocating memory.

Moreover, the synthesized versions for copy, assignment, and destruction work correctly for classes that have vector or string members. When we copy or assign an object that has a vector member, the vector class takes care of copying or assigning the elements in that member. When the object is destroyed, the vector member is destroyed, which in turn destroys the elements in the vector. Similarly for strings.


## Access Control and Encapsulation

In C++ we use access specifiers to enforce encapsulation:

- Members defined after a public specifier are accessible to all parts of the program. The public members define the interface to the class.

- Members defined after a private specifier are accessible to the member functions of the class but are not accessible to code that uses the class. The private sections encapsulate (i.e., hide) the implementation.


### "The only difference between using ```class``` and using ```struct``` to define a class is the default access level."


## Benefits of Encapsulation

- User code cannot inadvertently corrupt the state of an encapsulated object.

- The implementation of an encapsulated class can change over time without requiring changes in user-level code.


By defining data members as private, the class author is free to make changes in the data. If the implementation changes, only the class code needs to be examined to see what effect the change may have. User code needs to change only when the interface changes. If the data are public, then any code that used the old data members might be broken. It would be necessary to locate and rewrite any code that relied on the old representation before the program could be used again.

Another advantage of making data members private is that the data are protected from mistakes that users might introduce. If there is a bug that corrupts an object’s state, the places to look for the bug are localized: Only code that is part of the implementation could be responsible for the error. The search for the mistake is limited, greatly easing the problems of maintenance and program correctness.


### "Although user code need not change when a class definition changes, the source files that use a class must be recompiled any time the class changes." 

## Best Practices: It is a good idea to write constructor initializers in the same order as the members are declared. Moreover, when possible, avoid using members to initialize other members.

## Default Arguments and Constructors

Ex.

```cpp
class Sales_data {

public:
	// defines the default constructor as well as one that takes a string argument
	Sales_data(std::string s = ""): bookNo(s) { }
	// remaining constructors unchanged
	Sales\_data(std::string s, unsigned cnt, double rev): bookNo(s), units\_sold(cnt), revenue(rev*cnt) { }
	Sales\_data(std::istream &is) { read(is, *this); }
	// remaining members as before
};
```

### "A constructor that supplies default arguments for all its parameters also defines the default constructor."

### "In practice, it is almost always right to provide a default constructor if other constructors are being defined."


## ```static``` Class Members

Classes sometimes need members that are associated with the class, rather than with individual objects of the class type. We can access a static member directly through the scope operator.

### "The best way to ensure that the object is defined exactly once is to put the definition of ```static``` data members in the same file that contains the definitions of the class noninline member functions."

## Best Practices: Even if a const static data member is initialized in the class body, that member ordinarily should be defined outside the class definition.

# Defined Terms:

## abstract data type 

- Data structure that encapsulates (hides) its implementation.

## access specifier 

- Keywords public and private. Used to define whether members are accessible to users of the class or only to friends and members of the class. Specifiers may appear multiple times within a class. Each specifier sets the access of the following members up to the next specifier.

## aggregate class 

- Class with only public data members that has no in-class

## initializers or constructors. 

- Members of an aggregate can be initialized by a brace enclosed list of initializers.

## class 

- C++ mechanism for defining our own abstract data types. Classes may have data, function, or type members. A class defines a new type and a new scope.

## class declaration 

- The keyword class (or struct) followed by the class name followed by a semicolon. If a class is declared but not defined, it is an incomplete type.

## class keyword 

- Keyword used to define a class; by default members are private.

## class scope 

- Each class defines a scope. Class scopes are more complicated than other scopes—member functions defined within the class body may use names that appear even after the definition.

## const member function 

- A member function that may not change an object's ordinary (i.e., neither static nor mutable) data members. The ```this``` pointer in a const member is a pointer to const. A member function may be overloaded based on whether the function is const.

## constructor 

- A special member function used to initialize objects. Each constructor should give each data member a well-defined initial value.

## constructor initializer list 

- Specifies initial values of the data members of a class. The members are initialized to the values specified in the initializer list before the body of the constructor executes. Class members that are not initialized in the initializer list are default initialized.

## converting constructor 

- A nonexplicit constructor that can be called with a single argument. Such constructors implicitly convert from the argument’s type to the class type.

## data abstraction 

- Programming technique that focuses on the interface to a type. Data abstraction lets programmers ignore the details of how a type is represented and think instead about the operations that the type can perform. Data abstraction is fundamental to both object-oriented and generic
programming.

## default constructor 

- Constructor that is used if no initializer is supplied.

## delegating constructor 

- Constructor with a constructor-initializer list that has one entry that designates another constructor of the same class to do the initialization.

## encapsulation 

- Separation of implementation from interface; encapsulation hides the implementation details of a type. In C++, encapsulation is enforced by putting the implementation in the private part of a class.

## explicit constructor 

- Constructor that can be called with a single argument but cannot be used in an implicit conversion. A constructor is made explicit by prepending the keyword explicit to its declaration.

## forward declaration 

- Declaration of an as yet undefined name. Most often used to refer to the declaration of a class that appears prior to the definition of that class. 

## friend 

- Mechanism by which a class grants access to its nonpublic members. Friends have the same access rights as members. Both classes and functions may be named as friends.

## implementation 

- The (usually private) members of a class that define the data and any operations that are not intended for use by code that uses the type.

## incomplete type 

- Type that is declared but not defined. It is not possible to use an incomplete type to define a variable or class member. It is legal to define references or pointers to incomplete types.

## interface 

- The (public) operations supported by a type. Ordinarily, the interface does not include data members.
