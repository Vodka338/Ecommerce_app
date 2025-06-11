<!-- README.md -->

<h1 align="center">🛒 Product Sorting System in C++</h1>

<p align="center">
  <strong>Course:</strong> Data Structures and Algorithms<br>
  <strong>Project:</strong> Implement a C++ application that sorts products using various sorting algorithms based on multiple criteria like price, rating, name, or product ID.
</p>

<hr>

## 👨‍🏫 Instructor's Objective

> Design and implement multiple sorting algorithms in C++ to sort a list of products based on different criteria. Apply appropriate algorithms depending on data type and use case. Demonstrate your understanding of algorithm behavior, efficiency, and data structure use in a menu-driven console program.

---

## 👥 Group Members

- **Maru Kinfe**
- **Sisay Belete**
- **Abdulkader Bezabih**
- **Addisu Tamiru**
- **Abrham Dirsha**
- **Eyasu**

---

## 📌 Project Objectives

1. Practice and understand key sorting algorithms.
2. Use data structures like arrays and vectors effectively.
3. Build a real-world inspired, menu-driven console application.
4. Demonstrate logic correctness and algorithm efficiency.

---

## 🔄 Sorting Criteria & Algorithms Used

| **Criterion**     | **Data Type** | **Algorithm**     | **Reason**                              |
|-------------------|---------------|-------------------|------------------------------------------|
| **Price**         | `float`       | Quick Sort        | Efficient average performance            |
| **Rating**        | `float`       | Merge Sort        | Stable and accurate                      |
| **Name**          | `string`      | Bubble Sort       | Simple string comparisons (A-Z)          |
| **Product ID**    | `int`         | Insertion Sort    | Best for small or nearly sorted datasets |

---

## 💡 Sorting Algorithm Descriptions

### 🔹 Quick Sort *(for Price)*
- Uses divide and conquer.
- Selects a pivot and partitions elements.
- Very fast on large, unsorted data.

### 🔹 Merge Sort *(for Rating)*
- Also divide and conquer.
- Always stable, even in worst case.
- Guarantees `O(n log n)` performance.

### 🔹 Bubble Sort *(for Name)*
- Compares and swaps adjacent items.
- Easy to understand and implement.
- Chosen for alphabetic string sorting.

### 🔹 Insertion Sort *(for Product ID)*
- Good for small and nearly sorted datasets.
- Shifts elements to correct position.
- Simple yet effective.

---

## 🧠 Data Structure Used

```cpp
struct Product {
    int id;
    string name;
    float price;
    float rating;
};
