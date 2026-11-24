#include "hash.h"

int main()
{
    HashTable ht;

    ht.insert(1, 100);
    ht.insert(6, 200);
    ht.insert(11, 300);
    ht.insert(3, 400);

    ht.print();

    int value;

    if (ht.find(6, value))
    {
        cout << "找到数据: " << value << endl;
    }

    ht.remove(6);

    cout << "删除后的哈希表:" << endl;

    ht.print();

    return 0;
}

