//Author: Jean Carlos Chavarria Hughes

#include "algorithm.hh"

//The function copy if for copying elements from a vector to another
//It copies the elements in the range [first,last) into the range beginning at result.
//The function returns an iterator to the end of the destination range (which points to the element following the last element copied).
//The ranges shall not overlap in such a way that result points to an element in the range [first,last).

template<class InputIterator, class OutputIterator>
  OutputIterator copy (InputIterator first, InputIterator last, OutputIterator result)
{
  while (first!=last) {
    *result = *first;
    ++result; ++first;
  }
  return result;
}

template <class ForwardIterator>
   ForwardIterator adjacent_find (ForwardIterator first, ForwardIterator last)
{
  if (first != last)
  {
    ForwardIterator next=first; ++next;
    while (next != last) {
      if (*first == *next)     // or: if (pred(*first,*next)), for version (2)
        return first;
      ++first; ++next;
    }
  }
  return last;
}

/*
Version2
template <class ForwardIterator, class BinaryPredicate>
   ForwardIterator adjacent_find (ForwardIterator first, ForwardIterator last,BinaryPredicate pred){
   	//Por el momento esta funcion no hace nada
   }
*/

template <class BidirectionalIterator>
   void reverse2 (BidirectionalIterator first, BidirectionalIterator last)
   {
   	while ((first!=last)&&(first!=--last)){
   		std::iter_swap(first,last);
   		++first;
   	}
   }


template <class ForwardIterator>
  void generate ( ForwardIterator first, ForwardIterator last, int n, int m)
{
  int value = n;
  while (first != last) {
  *first = value + m;
    value = value + m;
    ++first;
  }
}
