std::vector<bool> vec; // ...some operations...
bool b = vec[0]; // Accessing a boolean element
int i = vec[0]; // Implicit conversion to int might lose precision or cause unexpected behavior.  The conversion will result in 0 or 1. However, in some situations it is useful to perform an explicit conversion instead of implicit conversion. 