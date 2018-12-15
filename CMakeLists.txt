cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

set(EXECUTABLE_NAME employee)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${EXECUTABLE_NAME}
	${CMAKE_CURRENT_SOURCE_DIR}/src/employee_test.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/AbstractEmployee.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/Employee.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/Manager.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/Fink.cpp
)
