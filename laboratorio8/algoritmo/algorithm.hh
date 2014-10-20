//Author: JeanCarlos Chavarria Hughes

#include <iostream>
#include <algorithm>
#include <vector>

template <class InputIterator, class OutputIterator>
	OutputIterator copy (InputIterator first, InputIterator last, OutputIterator result);

template <class ForwardIterator>
	ForwardIterator adjacent_find (ForwardIterator first, ForwardIterator last);

/*
template <class ForwardIterator, class BinaryPredicate>
   ForwardIterator adjacent_find (ForwardIterator first, ForwardIterator last,BinaryPredicate pred);
*/

template <class BidirectionalIterator>
   void reverse2 (BidirectionalIterator first, BidirectionalIterator last);

template <class ForwardIterator>
	void generate ( ForwardIterator first, ForwardIterator last, int n, int m);
