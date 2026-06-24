cmake_minimum_required(VERSION 3.20)

project(adw-cpp
    VERSION      1.0.0
    DESCRIPTION  "Modern C++23 bindings for GTK4 and Libadwaita"
    HOMEPAGE_URL "https://github.com/username/adw-cpp"
    LANGUAGES    CXX
)

# ── Language standard ─────────────────────────────────────────
set(CMAKE_CXX_STANDARD          23)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS        OFF)

# ── Options ───────────────────────────────────────────────────
option(BUILD_EXAMPLES   "Build example applications" OFF)
option(BUILD_TESTING    "Build test suite"           OFF)
option(ENABLE_COVERAGE  "Enable gcov code coverage"  OFF)

# ── Includes ──────────────────────────────────────────────────
include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

# ── Sources ───────────────────────────────────────────────────
file(GLOB_RECURSE ${PROJECT_NAME}_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c
)

# ── Library target ────────────────────────────────────────────
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SOURCES})

add_library(AdwCpp::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/adw-cpp>
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VERSION   ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
    EXPORT_NAME ${PROJECT_NAME}
)

# ── PkgConfig dependencies ────────────────────────────────────
find_package(PkgConfig REQUIRED)

pkg_check_modules(adwaita  IMPORTED_TARGET REQUIRED libadwaita-1)
pkg_check_modules(gtk4     IMPORTED_TARGET REQUIRED gtk4 gtk4-unix-print)
pkg_check_modules(graphene IMPORTED_TARGET REQUIRED graphene-1.0)
# pkg_check_modules(cppgir   IMPORTED_TARGET REQUIRED cppgir)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        # PkgConfig::cppgir
        PkgConfig::adwaita
        PkgConfig::gtk4
)

# ── Sub-projects ──────────────────────────────────────────────
add_subdirectory(examples)

if(BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()

# ── Install: library & headers ────────────────────────────────
install(TARGETS ${PROJECT_NAME}
    EXPORT      AdwCppTargets
    LIBRARY     DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE     DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME     DESTINATION ${CMAKE_INSTALL_BINDIR}
    INCLUDES    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/adw-cpp
)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/adw-cpp
    FILES_MATCHING PATTERN "*.hpp"
)

# ── Install: CMake package ────────────────────────────────────
install(EXPORT AdwCppTargets
    FILE        AdwCppTargets.cmake
    NAMESPACE   AdwCpp::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/AdwCpp
)

configure_package_config_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/AdwCppConfig.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/AdwCppConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/AdwCpp
)

write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/AdwCppConfigVersion.cmake
    VERSION      ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
)

install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/AdwCppConfig.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/AdwCppConfigVersion.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/AdwCpp
)

# ── Install: pkg-config file ──────────────────────────────────
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/adw-cpp.pc.in
    ${CMAKE_CURRENT_BINARY_DIR}/adw-cpp.pc
    @ONLY
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/adw-cpp.pc
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig
)

