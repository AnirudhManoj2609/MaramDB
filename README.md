# MaramDB

**MaramDB** is a lightweight, hierarchical, and dynamic database system designed for flexible data organization and easy structural modifications. Inspired by modern database architectures, MaramDB aims to provide a simple yet powerful platform for developers to manage tree-like data structures efficiently.

---

## Features

- **Hierarchical Structure**  
  Each node in MaramDB can have multiple child nodes, allowing developers to model complex relationships naturally. The structure is similar to a tree, with dynamic depth and branching.

- **Dynamic Nodes**  
  Nodes can be added or removed at runtime. Parents automatically reference newly created child nodes, making structure management intuitive.

- **Flexible Node Data**  
  Each node can store arbitrary data, such as numeric values, strings, or user-defined objects. Nodes can also be extended for specialized use cases.

- **Safe Memory Management**  
  MaramDB uses modern C++ smart pointers (`unique_ptr` or `shared_ptr`) to ensure safe ownership and automatic cleanup of nodes, preventing memory leaks.

- **Easy Shape Modification**  
  Node hierarchy can be restructured dynamically, allowing nodes to be moved, copied, or reorganized without breaking existing references.

- **Persistent Design Ready**  
  The architecture is designed to be compatible with persistent storage. Each node can be serialized to disk, laying the foundation for long-term storage and retrieval.

---

## Conceptual Structure

