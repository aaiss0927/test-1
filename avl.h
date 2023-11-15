/*
 * File: avl.h
 * Author: KeyLimePie (https://github.com/flashcy/INHA_OSAP_001_KeyLimePie.git)
 * Date: 2023-11-15
 * License: MIT License
 */

#ifndef AVL_AVL_H_
#define AVL_AVL_H_

#include "node.h"

class AVL {
public:
	// Default constructor of the AVL class
	AVL();

	// Check whether AVL tree is empty or not
	int IsEmpty();
	// Calculate the height of the node
	int CalculateHeight(Node* node);
	// Perform the LL rotation
	Node* LL(Node* node);
	// Perform the RR rotation
	Node* RR(Node* node);
	// Perform the LR rotation
	Node* LR(Node* node);
	// Perform the RL rotation
	Node* RL(Node* node);
	// Get the balance factor of the node
	// BalanceFactor is criteria of AVL restructing. This value is gap of Leftnode_height and Rightnode_height
	int GetBalanceFactor(Node* node);
	// Perform the task of balancing AVL tree.
	Node* Balancing(Node* node);
        // Insert the node
        Node* InsertNode(Node* node, int inputnumber);

	// Find Node that Node's number is equal to parameter's number
	// FindNode is used in Minimum, Maximum
	Node* FindNode(int number);

	// Plus total set size
	void plus_size();

	// Get the root of AVL tree
	Node* get_root() const;
	// Get the size of AVL tree
	int get_size() const;
	// Set the root of AVL tree
	void set_root(Node* root);

private:
	// The root of AVL tree
	Node* root_;
	// The size of AVL tree
	int size_;
};

#endif // AVL_AVL_H_
