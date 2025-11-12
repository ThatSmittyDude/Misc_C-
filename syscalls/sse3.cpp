#include <immintrin.h>
#include <iostream>

int main() {
    // Define two arrays of 4 floats each
    float a[4] = {1.0f, 2.0f, 3.0f, 4.0f};
    float b[4] = {5.0f, 6.0f, 7.0f, 8.0f};
    float result[4];

    // Load arrays into SSE registers
    __m128 vecA = _mm_loadu_ps(a);
    __m128 vecB = _mm_loadu_ps(b);

    // Perform addition
    __m128 vecResult = _mm_add_ps(vecA, vecB);

    // Store the result back into an array
    _mm_storeu_ps(result, vecResult);

    // Print the result
    for (int i = 0; i < 4; ++i) {
        std::cout << result[i] << " ";
    }

    return 0;
}
