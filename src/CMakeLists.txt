set(SRC ${PROJECT_SOURCE_DIR}/src)

set(PROJECT_FILES
	${SRC}/main.cpp
	${SRC}/foo.cpp
)

add_executable(Git ${PROJECT_FILES})

set_property(TARGET Git PROPERTY CXX_STANDARD 14)
set_property(TARGET Git PROPERTY CXX_STANDARD_REQUIRED ON)

target_include_directories(Git PRIVATE ${CMAKE_SOURCE_DIR} )
