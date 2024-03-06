#include <iostream>
#include "BinarySearchTree.cpp"

using namespace std;


//  +=====================================================+
//  |                                                     |
//  |          THE TEST CODE BELOW WILL PRINT             |
//  |              OUTPUT TO "USER LOGS"                  |
//  |                                                     |
//  |  Use the output to test and troubleshoot your code  |
//  |                                                     |
//  +=====================================================+


static void test() {
    
    {
        cout << "\n----- Test: Construct Node with Value -----\n";
        
        // Test for value
        Node node(10);
        cout << "Node value: " << node.value << " - EXPECTED: 10\n";
        cout << (node.value == 10 ? "PASS\n" : "FAIL\n");

        // Test for left pointer
        cout << "Node left pointer (should be nullptr): " << node.left << " - EXPECTED: 0\n";
        cout << (node.left == nullptr ? "PASS\n" : "FAIL\n");

        // Test for right pointer
        cout << "Node right pointer (should be nullptr): " << node.right << " - EXPECTED: 0\n";
        cout << (node.right == nullptr ? "PASS\n" : "FAIL\n");
    }
    
}

