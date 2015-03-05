project(Pig)
cmake_minimum_required(VERSION 2.8)

ADD_SUBDIRECTORY(src)

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})

TARGET_LINK_LIBRARIES( ${PROJECT_NAME} pb protobuf )
