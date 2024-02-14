cmake_minimum_required(VERSION 3.25)

project(swiftc LANGUAGES C)

enable_testing()
include_directories(include)

add_executable(mem_test tests/mem.c)
add_test(
  NAME mem_test
  COMMAND $<TARGET_FILE:mem_test>
)

add_executable(syscall_test tests/syscall.c)
add_test(
  NAME syscall_test
  COMMAND $<TARGET_FILE:syscall_test>
)
