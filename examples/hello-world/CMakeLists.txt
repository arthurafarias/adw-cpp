add_executable(hello-world main.cpp)

target_link_libraries(hello-world PRIVATE
    AdwCpp::adw-cpp
)

target_compile_features(hello-world PRIVATE cxx_std_23)
