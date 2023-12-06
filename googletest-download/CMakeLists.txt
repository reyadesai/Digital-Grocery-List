cmake_minimum_required(VERSION 3.15)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           main
  SOURCE_DIR        "/class/classes/bhuyn053/final-project-ssuva003-rdesa022-bhyun053-kalva088/googletest-code"
  BINARY_DIR        "/class/classes/bhuyn053/final-project-ssuva003-rdesa022-bhyun053-kalva088/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)
