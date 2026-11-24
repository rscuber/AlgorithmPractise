#pragma once

#include <iostream>
#include <vector>
#include <list>

using namespace std;

struct Node
{
    int key;
    int value;
};

class HashTable
{
private:
    int size;
    vector<list<Node>> table;
    int hash(int key) const;

public:
    HashTable();
    void insert(int key, int value);
    bool find(int key, int &value) const;
    void remove(int key);
    void print() const;
};


