**ASSOCIATON**


To qualify as an association, an object and another object must have the following relationship:</br>

The associated object (member) is otherwise unrelated to the object (class)</br>
The associated object (member) can belong to more than one object (class) at a time</br>
The associated object (member) does not have its existence managed by the object (class)</br>
The associated object (member) may or may not know about the existence of the object (class)</br></br>

We can say that association models as “uses-a” relationship. The doctor “uses” the patient (to earn income). The patient uses the doctor (for whatever health purposes they need).</br>

Implementing associations: </br>
Because associations are a broad type of relationship, they can be implemented in many different ways. However, most often, associations are implemented using pointers, where the object points at the associated object. In our example(i have also added codes), we’ll implement a bi-directional Doctor/Patient relationship, since it makes sense for the Doctors to know who their Patients are, and vice-versa.



Reflexive association: </br>
Sometimes objects may have a relationship with other objects of the same type. This is called a reflexive association. A good example of a reflexive association is the relationship between a university course and its prerequisites (which are also university courses)
(added codes).
