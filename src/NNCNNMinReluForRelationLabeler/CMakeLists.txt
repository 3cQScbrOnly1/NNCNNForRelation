
include_directories(
  model
)

add_executable(NNCNNMinReluForRelationLabeler NNCNNMinReluForRelationLabeler.cpp)
target_link_libraries(NNCNNMinReluForRelationLabeler ${LIBS})
