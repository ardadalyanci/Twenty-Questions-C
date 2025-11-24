Twenty Questions: C Binary Search Tree Engine

A terminal-based implementation of the classic "Twenty Questions" game, built from scratch in C. This project demonstrates the practical application of Binary Search Trees (BST) to store decision logic and uses recursion for tree navigation and dynamic insertion.

📂 Project Structure

This project separates the data structure implementation from the game logic, following standard C modular programming practices.

twenty.c: Contains the game loop, user input handling, and the high-level flow of the application.

bst.c: The engine of the project. Implements the recursive logic for inserting nodes and building the decision tree structure in memory.

bst.h: Header file defining the struct node and function prototypes, serving as the interface between the game logic and the data structure.

🛠️ Technical Concepts Implemented

Binary Search Trees (BST): Uses a BST to organize questions.

Left Child: Represents a "Yes" answer (Logic flow for ID < Current_ID).

Right Child: Represents a "No" answer (Logic flow for ID > Current_ID).

Recursion: Utilizes recursive functions for node insertion to traverse the tree and link new nodes without breaking the pointer chain.

Dynamic Memory Management: Manually handles memory using malloc to create nodes and correctly frees the entire tree structure upon exit to prevent memory leaks.

Pointers: Extensive use of struct pointers to link decision nodes.

🚀 How to Compile and Run

This project can be compiled using gcc on any Linux/Unix environment (including WSL).

1. Compile

Run the following command in your terminal to link the files and create the executable:

gcc -Wall twenty.c bst.c -o twenty_questions


2. Run

Execute the program:

./twenty_questions


🎮 Example Usage

Welcome! Press 'q' to quit or any other key to continue:
> [Enter]

You think of a fruit or vegetable and I will try to guess it!

Does it grow underground?
y/n: n
Does it grow on a tree?
y/n: y
Is it red in color?
y/n: y

It's an apple!
y/n: y

I win!


📝 Future Improvements

Implement file I/O to save the state of the tree so the game "learns" new objects between sessions.

Expand the dataset to include animals or objects beyond fruits and vegetables.
