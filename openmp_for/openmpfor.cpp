#include <iostream> 
#include <omp.h>

using namespace std; 
  
int main() { 
    int thread_num = omp_get_thread_num();
    int num_threads = omp_get_num_threads();

    #pragma omp parallel
    #pragma omp for
    for (int i = 0; i < 10; i++) {
        //cout << i << " From " << thread_num << " / " << num_threads << endl;
        cout << i << endl;
    }
} 
