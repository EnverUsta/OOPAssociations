**ASSOCIATION**

To qualify as an association, an object and another object must have the following relationship:

The associated object (member) is otherwise unrelated to the object (class)</br>
The associated object (member) can belong to more than one object (class) at a time</br>
The associated object (member) does not have its existence managed by the object (class)</br>
The associated object (member) may or may not know about the existence of the object (class)</br></br>
The relationship between doctors and patients is a great example of an association. The doctor clearly has a relationship with his patients, but conceptually it’s not a part/whole (object composition) relationship. A doctor can see many patients in a day, and a patient can see many doctors (perhaps they want a second opinion, or they are visiting different types of doctors). Neither of the object’s lifespans are tied to the other.</br></br>
We can say that association models as “uses-a” relationship. The doctor “uses” the patient (to earn income). The patient uses the doctor (for whatever health purposes they need).</br></br>
Because associations are a broad type of relationship, they can be implemented in many different ways. However, most often, associations are implemented using pointers, where the object points at the associated object.
