cmake_minimum_required(VERSION 3.22)
set(PROJECT_NAME dcmafp)
project(${PROJECT_NAME} VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ../bin)

set(SRCS
    src/main.cpp
)
add_executable(${PROJECT_NAME} ${SRCS})

find_package(PkgConfig REQUIRED QUIET)

pkg_search_module(FMT REQUIRED fmt)
pkg_search_module(SPDLOG REQUIRED spdlog)
pkg_search_module(MYSQLCLIENT REQUIRED mysqlclient)
pkg_search_module(OPENCV4 REQUIRED opencv4)
pkg_search_module(HIREDIS REQUIRED hiredis)
pkg_search_module(REDISPP REQUIRED redis++)
pkg_search_module(PISTACHE REQUIRED libpistache)
pkg_search_module(YAMLCPP REQUIRED yaml-cpp)

include_directories(
    ${FMT_INCLUDE_DIRS}
    ${SPDLOG_INCLUDE_DIRS}
    ${MYSQLCLIENT_INCLUDE_DIRS}
    ${OPENCV4_INCLUDE_DIRS}
    ${HIREDIS_INCLUDE_DIRS}
    ${REDISPP_INCLUDE_DIRS}
    ${PISTACHE_INCLUDE_DIRS}
    ${YAMLCPP_INCLUDE_DIRS}
)

target_link_libraries(
    ${PROJECT_NAME}
    ${FMT_LIBRARIES}
    ${SPDLOG_LIBRARIES}
    ${MYSQLCLIENT_LIBRARIES}
    ${OPENCV4_LIBRARIES}
    ${HIREDIS_LIBRARIES}
    ${REDISPP_LIBRARIES}
    ${PISTACHE_LIBRARIES}
    ${YAMLCPP_LIBRARIES}
    -lmysqlpp
    -ldcmnet
)