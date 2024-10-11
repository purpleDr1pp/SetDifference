
template <typename InIter1, typename InIter2, typename OutIter>
OutIter SetDifference(InIter1 first1, InIter1 last1,
    InIter2 first2, InIter2 last2,
    OutIter out) {
    auto iter1 = first1;
    auto iter2 = first2;
    while (iter1 != last1) {
        if (iter2 == last2) { // Если iter2 достиг конца
            *out = *iter1;
            ++out;
            ++iter1;
        }
        else if (*iter1 < *iter2) { // Если *iter1 < *iter2
            *out = *iter1;
            ++out;
            ++iter1;
        }
        else if (*iter1 == *iter2) { // Если *iter1 == *iter2
            ++iter1;
            ++iter2;
        }
        else { // Если *iter1 > *iter2
            ++iter2;
        }
    }
    return out;
}
