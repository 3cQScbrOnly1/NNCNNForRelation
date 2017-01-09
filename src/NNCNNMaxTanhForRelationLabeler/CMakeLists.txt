
include_directories(
  model
)

add_executable(NNCNNMaxTanhForRelationLabeler NNCNNMaxTanhForRelationLabeler.cpp)
target_link_libraries(NNCNNMaxTanhForRelationLabeler ${LIBS})
