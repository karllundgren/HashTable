//
// Created by Karl Lundgren on 2019-03-09.
//
/*
#include <list>
#include <vector>
#include <string>
#include <iostream>
//#include "hashTable.h"

using namespace std;

template <typename T, typename k, typename v>
hashTable<T,k,v>::hashTable(T size){
    this->size = size;

    table = new list<item>[this->size];
}

template <typename T, typename k, typename v>
T hashTable<T,k,v>::preHash(string key){
    T preHash = 0;
    for (T i = 0; i < key.length(); i++) {
        preHash += (i + 1) * abs(T(key[i]));
    }
    return preHash;
}

template <typename T, typename k, typename v>
T hashTable<T,k,v>::hash(string key){

    return preHash(key) % size;
}

template <typename T, typename k, typename v>
T hashTable<T,k,v>::hash(T key){
    return key % size;
}

template <typename T, typename k, typename v>
void hashTable<T,k,v>::addItem(k key, v value){
    T index = hash(key);

    item myItem = new item;
    myItem.k = key;
    myItem.v = value;

    //list<vector<string>> ::iterator i;
    for (auto i = table[index].begin(); i != table[index].end() ; i++) {
        if ((*i)[0] == key){
            //replace duplicate key
            *i = myItem;
            return;
        }
    }

    table[index].push_back(myItem);
}

template <typename T, typename k, typename v>
void hashTable<T,k,v>::removeItem(k key){
    T index = hash(key);

    //list<vector<string>> ::iterator i;
    for (auto i = table[index].begin(); i != table[index].end() ; i++) {
        if ((*i).key == key){
            table[index].erase(i);
            break;
        }
    }
}

template <typename T, typename k, typename v>
v hashTable<T,k,v>::getValue(k key){
    T index = hash(key);

    //list<vector<string>> ::iterator i;
    for (auto i = table[index].begin(); i != table[index].end() ; i++) {
        if ((*i).key == key){
            return (*i).value;
        }
    }
    return NULL;
}

template <typename T, typename k, typename v>
void hashTable<T,k,v>::displayTable(){

    for (T i = 0; i < size; i++) {
        cout<<i;
        //list<vector<item>> :: iterator j;
        for (auto j = table[i].begin(); j != table[i].end() ; j++) {
            cout << " --> (" << (*j)[0] << ", " << (*j)[1] << ")";
        }
        cout << endl;
    }
}
 */