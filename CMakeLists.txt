cmake_minimum_required(VERSION 3.5)

project(user_service 
	VERSION 1.0.0
	DESCRIPTION "C++ library with functions for working with users service"
	LANGUAGES CXX)

set(public_headers "*.h")
set(sources "*.cpp")

add_library(${PROJECT_NAME}_lib ${sources} ${public_headers})
