#include "../include/laminar_beth_pro.h"
#include <vector>

int main() {
    SovereignAI::print_status();

    // Create a dummy tensor (simulating 8-bit quantized activations)
    std::vector<float> tensor(1024, 0.5f);

    // Apply the Laminar filter
    SovereignAI::process_laminar_inference(tensor.data(), tensor.size());

    return 0;
}
