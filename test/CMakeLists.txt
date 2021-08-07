cmake_minimum_required(VERSION 3.10)

# download github repository
include(${PROJECT_SOURCE_DIR}/cmake/DownloadProject/DownloadProject.cmake)
download_project(PROJ googletest
                GIT_REPOSITORY https://github.com/google/googletest.git
                GIT_TAG master
                UPDATE_DISCONNECTED 1
)

# put directory under root.
add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR}) 
add_executable(TestSample1 TestSublib1.cpp TestMylib1.cpp)
target_link_libraries(TestSample1 mylibrary gtest gmock_main)

# 
include_directories(${PROJECT_SOURCE_DIR}/lib/include)

# C++11をターゲットに追加
target_compile_features(TestSample1 PUBLIC cxx_std_11)

# Enable the GoogleTest integration.
include(GoogleTest)

# Add the test case use the old feature.
gtest_add_tests(TARGET TestSample1)
