#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    MergeProcessor merge_processor;

    if (argc > 1)
    {
        merge_processor.ValidateInputNumbers(argv);
    }

    return 0;
}
