**AGGREGATION** </br>
To qualify as an aggregation, a whole object and its parts must have the following relationship:</br>

The part (member) is part of the object (class)</br>
The part (member) can belong to more than one object (class) at a time</br>
The part (member) does not have its existence managed by the object (class)</br>
The part (member) does not know about the existence of the object (class)</br></br>


Unlike a composition, parts can belong to more than one object at a time, and the whole object is not responsible for the existence and lifespan of the parts.</br>
When an aggregation is created, the aggregation is not responsible for creating the parts. When an aggregation is destroyed, the aggregation is not responsible for destroying the parts.</br></br>


For example, consider the relationship between a person and their home address. In this example, for simplicity, we’ll say every person has an address. However, that address can belong to more than one person at a time: for example, to both you and your roommate or significant other. However, that address isn’t managed by the person -- the address probably existed before the person got there, and will exist after the person is gone. Additionally, a person knows what address they live at, but the addresses don’t know what people live there. Therefore, this is an aggregate relationship.</br></br>


Alternatively, consider a car and an engine. A car engine is part of the car. And although the engine belongs to the car, it can belong to other things as well, like the person who owns the car. The car is not responsible for the creation or destruction of the engine. And while the car knows it has an engine (it has to in order to get anywhere) the engine doesn’t know it’s part of the car. When it comes to modeling physical objects, the use of the term “destroyed” can be a little dicey. One might argue, “If a meteor fell out of the sky and crushed the car, wouldn’t the car parts all be destroyed too?” Yes, of course. But that’s the fault of the meteor. The important point is that the car is not responsible for destruction of its parts (but an external force might be). </br></br>
We can say that aggregation models “has-a” relationships (a department has teachers, the car has an engine).</br></br>

Compositions:

Typically use normal member variables
Can use pointer members if the class handles object allocation/deallocation itself
Responsible for creation/destruction of parts


Aggregations:

Typically use pointer or reference members that point to or reference objects that live outside the scope of the aggregate class
Not responsible for creating/destroying parts</br></br>

While aggregations can be extremely useful, they are also potentially more dangerous. Because aggregations do not handle deallocation of their parts, that is left up to an external party to do so. If the external party no longer has a pointer or reference to the abandoned parts, or if it simply forgets to do the cleanup (assuming the class will handle that), then memory will be leaked.
For this reason, compositions should be favored over aggregations.</br></br>

You may also run across the term aggregate class in your C++ journeys, which is defined as a struct or class that has no provided constructors, destructors, or overloaded assignment, has all public members, and does not use inheritance -- essentially a plain-old-data struct. Despite the similarities in naming, aggregates and aggregation are different and should not be confused.
