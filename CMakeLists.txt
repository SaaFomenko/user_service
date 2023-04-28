cmake_minimum_required(VERSION 3.5)

project(user_service)

# set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# set Postgresql actual version.
set(PostgreSQL_ADDITIONAL_VERSIONS "15")

# set for Debian 11 postgresql 14.4 source install version.
# Commited this three sets for Windows.
set(PostgreSQL_LIBRARY "/usr/local/pgsql/lib/libpq.so.5.14")
set(PostgreSQL_INCLUDE_DIR "/usr/local/pgsql/include")
set(PostgreSQL_TYPE_INCLUDE_DIR "/usr/local/pgsql/include/libpq")

file(GLOB
	lib_source "lib/*.cpp"
)

add_subdirectory(
	"../libpqxx/libpqxx-7.7.5" libpqxx-build
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(${PROJECT_NAME}_lib STATIC 
	${lib_source})

add_executable(${PROJECT_NAME}.exe main.cpp 
	${lib_source})


#target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
#target_link_libraries(${PROJECT_NAME}.exe ${PROJECT_NAME}_lib libpqxx-build)
target_link_libraries(${PROJECT_NAME}.exe ${PROJECT_NAME}_lib pqxx)
