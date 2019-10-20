**CONTAINER**

Container classes typically implement a fairly standardized minimal set of functionality. 
Most well-defined containers will include functions that:

Create an empty container (via a constructor)</br>
Insert a new object into the container</br>
Remove an object from the container</br>
Report the number of objects currently in the container</br>
Empty the container of all objects</br>
Provide access to the stored objects</br>
Sort the elements (optional)</br></br>

Types of containers:

Container classes generally come in two different varieties.
Value containers are compositions that store copies of the objects that they are holding 
(and thus are responsible for creating and destroying those copies). Reference containers are aggregations that store pointers or 
references to other objects (and thus are not responsible for creation or destruction of those objects).

Unlike in real life, where containers can hold whatever types of objects you put in them, in C++,
containers typically only hold one type of data. For example, if you have an array of integers, it will only hold integers.
Unlike some other languages, many C++ containers do not allow you to arbitrarily mix types. 
If you need containers to hold integers and doubles, 
you will generally have to write two separate containers to do this (or use templates, which is an advanced C++ feature).
Despite the restrictions on their use, containers are immensely useful, and they make programming easier, safer, and faster.
