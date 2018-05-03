cmake_minimum_required (VERSION 3.8)

set(CMAKE_SYSTEM_NAME WindowsStore)
set(CMAKE_SYSTEM_VERSION 10.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

project ("CMakeUWP")

add_executable (CMakeUWP WIN32
	CMakeUWP.cpp
	CMakeUWP_TemporaryKey.pfx
)

target_link_libraries(CMakeUWP
	PRIVATE
		WindowsApp
)
