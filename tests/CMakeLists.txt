include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.15.2
    FIND_PACKAGE_ARGS NAMES GTest
)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

# ── Test executable ───────────────────────────────────────────
add_executable(adw-cpp-tests
    test_main.cpp
    test_enums.cpp
    test_construction.cpp
)

target_link_libraries(adw-cpp-tests PRIVATE
    GTest::gtest
    GTest::gtest_main
    AdwCpp::adw-cpp
)

target_compile_features(adw-cpp-tests PRIVATE cxx_std_23)

# ── Coverage ──────────────────────────────────────────────────
if(ENABLE_COVERAGE)
    target_compile_options(adw-cpp-tests PRIVATE
        --coverage -fprofile-arcs -ftest-coverage
    )
    target_link_options(adw-cpp-tests PRIVATE --coverage)

    find_program(LCOV_PATH lcov REQUIRED)
    find_program(GENHTML_PATH genhtml REQUIRED)

    add_custom_target(coverage
        COMMENT "Generating HTML coverage report in build/coverage/"
        COMMAND ${LCOV_PATH}
            --capture
            --directory ${CMAKE_BINARY_DIR}
            --output-file ${CMAKE_BINARY_DIR}/coverage.info
            --exclude "*/googletest/*"
            --exclude "*/tests/*"
        COMMAND ${GENHTML_PATH}
            ${CMAKE_BINARY_DIR}/coverage.info
            --output-directory ${CMAKE_BINARY_DIR}/coverage
        DEPENDS adw-cpp-tests
    )
endif()

gtest_discover_tests(adw-cpp-tests)
