
include_directories(
  model
)

add_executable(NNCNNTriReluForRelationLabeler NNCNNTriReluForRelationLabeler.cpp)
target_link_libraries(NNCNNTriReluForRelationLabeler ${LIBS})
