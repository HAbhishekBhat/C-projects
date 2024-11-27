Introduction
This document explains the implementation of an enhanced text editor in C. The text editor supports basic text operations like inserting and deleting lines, searching words, and saving/loading text to/from files. Additionally, it uses efficient data structures like a doubly linked list for managing text and a Trie for word searching.
Features
1. Insert and delete lines using a doubly linked list.
2. Search for words efficiently using a Trie.
3. Undo/Redo functionality using stacks.
4. Save text to and load text from files.
5. Display the entire text with line numbers.
Data Structures Used
1. **Doubly Linked List**: This is used to store the lines of text. Each node represents a single line.
   - Benefits: Allows efficient insertion and deletion of lines at any position.

2. **Trie**: This data structure is used for word searching. It allows efficient storage and lookup of words.
   - Benefits: Fast word search with time complexity proportional to the length of the word.

3. **Stack**: Two stacks (undo and redo) are used to track actions for implementing undo/redo functionality.
Code Explanation
1. Linked List Operations
The linked list is used to store lines of text. The following operations are implemented:
- **Insert Line**: Inserts a new line at a specified position in the linked list.
- **Delete Line**: Removes a line from a specified position in the linked list.
2. Trie Operations
The Trie data structure is used for efficient word searching. Each word in the text is inserted into the Trie. The search function checks if a word exists in the Trie.
3. Stack Operations
Two stacks are used for undo and redo functionality. Each stack node contains the action performed, the content involved, and the line number.
4. File Operations
The program supports saving the current text to a file and loading text from a file. This is implemented using standard C file I/O functions.
5. Display Functionality
The display function prints the entire text stored in the linked list, with each line numbered.
