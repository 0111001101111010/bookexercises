// partial_sort() implementation for std::list<int> based on suggestion
// by Scott Meyers in Effective STL, item 31.
//
// See <http://stackoverflow.com/questions/9220750>.
 
#include <cstddef>
#include <list>
#include <iostream>
#include <set>
 
// Perdicate for sorting iterators based on their item's value.
struct iterator_less
{   
    bool operator() (std::list<int>::iterator lhs,
                     std::list<int>::iterator rhs) const
    {
        return (*lhs < *rhs);
    }
};
 
// Sorted container (with duplicates) that sorts iterators
// based on their item's value (see 'iterator_less').
typedef std::multiset<
        std::list<int>::iterator, iterator_less
    > iterator_set;
 
void partial_sort(std::list<int>& items, std::size_t n)
{
    // Build a set of iterators to the items, sorting
    // the them based on their item's value.
    iterator_set sorted;
    for (auto item = items.begin(); item!=items.end(); ++item)
    {
        // This is actually inserting an iterator that points
        // to the item rather than copying the item's value.
        sorted.insert(item);
    }
 
    // Move up to 'n' items from the sorted set to the
    // front of the list by "splicing" them at successive
    // positions starting with the smallest.
    auto position = items.begin();
    auto item = sorted.begin();
    for (std::size_t i=0; i<n && item!=sorted.end(); ++i)
    {
        // Move the next item into the ith position.
        items.splice(position, items, *item);
 
        // Move 'position' to the (i+1)th position
        // in the list for the next iteration, and
        // move 'next' to the (i+1)th smallest item.
        position = *item, ++position, ++item;
    }
}
 
int main ()
{
    std::list<int> items;
    items.push_back(11);
    items.push_back(2);
    items.push_back(3);
    items.push_back(99);
    items.push_back(1);
    items.push_back(4);
    items.push_back(5);
    items.push_back(7);
    items.push_back(34);
 
    partial_sort(items, 3);
 
    for (auto item=items.begin(); item!=items.end(); ++item)
    {
        std::cout << *item << std::endl;
    }
}// partial_sort() implementation for std::list<int> based on suggestion
// by Scott Meyers in Effective STL, item 31.
//
// See <http://stackoverflow.com/questions/9220750>.
 
#include <cstddef>
#include <list>
#include <iostream>
#include <set>
 
// Perdicate for sorting iterators based on their item's value.
struct iterator_less
{   
    bool operator() (std::list<int>::iterator lhs,
                     std::list<int>::iterator rhs) const
    {
        return (*lhs < *rhs);
    }
};
 
// Sorted container (with duplicates) that sorts iterators
// based on their item's value (see 'iterator_less').
typedef std::multiset<
        std::list<int>::iterator, iterator_less
    > iterator_set;
 
void partial_sort(std::list<int>& items, std::size_t n)
{
    // Build a set of iterators to the items, sorting
    // the them based on their item's value.
    iterator_set sorted;
    for (auto item = items.begin(); item!=items.end(); ++item)
    {
        // This is actually inserting an iterator that points
        // to the item rather than copying the item's value.
        sorted.insert(item);
    }
 
    // Move up to 'n' items from the sorted set to the
    // front of the list by "splicing" them at successive
    // positions starting with the smallest.
    auto position = items.begin();
    auto item = sorted.begin();
    for (std::size_t i=0; i<n && item!=sorted.end(); ++i)
    {
        // Move the next item into the ith position.
        items.splice(position, items, *item);
 
        // Move 'position' to the (i+1)th position
        // in the list for the next iteration, and
        // move 'next' to the (i+1)th smallest item.
        position = *item, ++position, ++item;
    }
}
 
int main ()
{
    std::list<int> items;
    items.push_back(11);
    items.push_back(2);
    items.push_back(3);
    items.push_back(99);
    items.push_back(1);
    items.push_back(4);
    items.push_back(5);
    items.push_back(7);
    items.push_back(34);
 
    partial_sort(items, 3);
 
    for (auto item=items.begin(); item!=items.end(); ++item)
    {
        std::cout << *item << std::endl;
    }
}