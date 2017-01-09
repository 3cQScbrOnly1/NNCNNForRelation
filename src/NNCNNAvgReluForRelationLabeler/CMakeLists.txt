
include_directories(
  model
)

add_executable(NNCNNAvgReluForRelationLabeler NNCNNAvgReluForRelationLabeler.cpp)
target_link_libraries(NNCNNAvgReluForRelationLabeler ${LIBS})
