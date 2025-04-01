# Singleton Design Pattern

### Idea
``` 
To restrict on creating only a single instance of the classes and reuse it over the places.
```
#### levels of implementation
- 2
### variation
```
The first hand implementation will brreak in case of multi-threading, as multiple threads can put simultaneous access, which can result in multiple instance created.
```

#### concepts
```
**Restricting the object creation** - So, for restricting of object creation what we did is put the constructor function under private access specifier
- but this doesn't completely resticts from creating objects, we have to control the copy constructor and the operator overloading as well.

**Mutex** - In C++, a mutex class is used to prevent critical code from being accessed by various resources. Mutex provides synchronization in C++, which means only one thread can access the object at the same time. By using the Mutex keyword, we can lock our object from being accessed by multiple threads at the same time. The mutex class is a synchronization primitive that can be used to protect shared data from being simultaneously accessed by multiple threads. A mutex is a lockable object that is designed to signal when critical sections of code need exclusive access, preventing other threads with the same protection from executing concurrently and accessing the same memory locations.

to put lock
```