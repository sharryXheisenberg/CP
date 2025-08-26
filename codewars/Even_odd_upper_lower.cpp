#include <string>
#include <string_view>

std::string to_weird_case(std::string_view str) {
    return {str.begin(), str.end()};
}
