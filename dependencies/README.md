**DEPENDENCIES**

In casual conversation, we use the term dependency to indicate that an object is reliant upon another object for a given task. 
For example, if you break your foot, you are dependent on crutches to get around (but not otherwise).</br>
Flowers are dependent upon bees to pollinate them, in order to grow fruit or propagate (but not otherwise).</br></br>

A dependency occurs when one object invokes another object’s functionality in order to accomplish some specific task. 
This is a weaker relationship than an association, but still, any change to object being depended upon may break 
functionality in the (dependent) caller.
A dependency is always a unidirectional relationship.</br>

A good example of a dependency that you’ve already seen many times is std::cout (of type std::ostream). Our classes that use std::cout use it in order to accomplish the task of printing something to the console, but not otherwise.</br></br>

Dependencies vs Association in C++ :

There’s typically some confusion about what differentiates a dependency from an association.</br>
In C++, associations are a relationship between two classes at the class level. That is, one class keeps a direct or indirect “link” to the associated class as a member. For example, a Doctor class has an array of pointers to its Patients as a member. You can always ask the Doctor who its patients are. The Driver class holds the id of the Car the driver object owns as an integer member. The Driver always knows what Car is associated with it.</br>

Dependencies typically are not represented at the class level -- that is, the object being depended on is not linked as a member. Rather, the object being depended on is typically instantiated as needed (like opening a file to write data to), or passed into a function as a parameter.</br>
