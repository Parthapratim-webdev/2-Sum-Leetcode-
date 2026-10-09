# 🔢 Two Sum – C++

## 📌 Description
The Two Sum problem finds two elements in an array whose sum equals a given target.
This solution uses an `unordered_map` to find the required pair efficiently.

## ⚙️ Workflow

1. Start the program.
2. Initialize the array and target value.
3. Create an empty `unordered_map` to store numbers and their indices.
4. Traverse the array using a loop.
5. Calculate the complement: `target - arr[i]`.
6. Check whether the complement exists in the map.
7. If found, return both indices.
8. Otherwise, store the current number and its index.
9. Repeat until a pair is found or the array ends.
10. Print the result and end the program.

## 🔄 Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Initialize Array and Target]
    B --> C[Create Empty Hash Map]
    C --> D[i = 0]
    D --> E{i < Array Size?}
    E -- No --> F[Return Empty Result]
    F --> G([End])
    E -- Yes --> H[Set first = arr[i]]
    H --> I[Calculate sec = target - first]
    I --> J{Is sec Present in Map?}
    J -- Yes --> K[Store Current Index and Complement Index]
    K --> L[Return Answer]
    L --> G
    J -- No --> M[Store arr[i] and Index i in Map]
    M --> N[Increment i]
    N --> E
