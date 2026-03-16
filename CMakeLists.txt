cmake_minimum_required(VERSION 3.23)
project(adobe-predicates VERSION 0.0.1)


# Target definition
add_library(adobe-predicates)
target_sources(adobe-predicates
    PRIVATE
        src/predicates.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS include
        FILES include/adobe/predicates/predicates.hpp
)
add_library(adobe::predicates ALIAS adobe-predicates)
set_target_properties(adobe-predicates PROPERTIES POSITION_INDEPENDENT_CODE ON)
target_compile_features(adobe-predicates PRIVATE cxx_std_17)


# Installation
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    adobe-predicates-config-version.cmake
    COMPATIBILITY AnyNewerVersion
)
configure_package_config_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/adobe-predicates-config.cmake.in
    adobe-predicates-config.cmake
    INSTALL_DESTINATION lib/cmake/adobe-predicates
)
install(
    TARGETS adobe-predicates
    EXPORT adobe-predicates-targets
    FILE_SET HEADERS
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
)
install(
    FILES
        ${CMAKE_CURRENT_BINARY_DIR}/adobe-predicates-config.cmake
        ${CMAKE_CURRENT_BINARY_DIR}/adobe-predicates-config-version.cmake
    DESTINATION lib/cmake/adobe-predicates
)
install(
    EXPORT adobe-predicates-targets
    DESTINATION lib/cmake/adobe-predicates
)
