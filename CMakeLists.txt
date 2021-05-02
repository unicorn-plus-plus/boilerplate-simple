cmake_minimum_required(VERSION 3.16)

project(
  "TBR_PROJECT_NAME"
  VERSION 0.0.0
  DESCRIPTION "TBR_DESCRIPTION"
  LANGUAGES CXX
)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
  add_subdirectory(apps)
  add_subdirectory(tests)
endif()

add_subdirectory(src)
