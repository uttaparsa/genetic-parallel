// cpp_compiler_options_openmp.cpp
#include <omp.h>
#include <iostream>


using namespace std;


int main(int argc, char* argv[]) {
    // omp_set_dynamic(0);
    
    omp_set_num_threads(4);
    #pragma omp parallel
    {
        
        cout << "threads=" << omp_get_num_threads() << endl;
    }
    return 0;
}