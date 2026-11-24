#include "hash.h"

HashTable::HashTable() : size(5), table(5)
{
}

int HashTable::hash(int key) const
{
    return (key % size + size) % size;
}

void HashTable::insert(int key, int value)
{
    int index = hash(key);
    for (auto &node : table[index])
    {
        if (node.key == key)
        {
            node.value = value;
            return;
        }
    }
    table[index].push_back({key, value});
}

bool HashTable::find(int key, int &value) const
{
    int index = hash(key);
    for (auto &node : table[index])
    {
        if (node.key == key)
        {
            value = node.value;
            return true;
        }
    }
    return false;
}

void HashTable::remove(int key)
{
    int index = hash(key);
    for (auto it = table[index].begin(); it != table[index].end(); it++)
    {
        if (it->key == key)
        {
            table[index].erase(it);
            return;
        }
    }
}

void HashTable::print() const
{
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "]: ";

        for (const auto &node : table[i])
        {
            cout << "(" << node.key << ", "
                 << node.value << ") -> ";
        }

        cout << "NULL" << endl;
    }
}