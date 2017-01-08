
include_directories(
  model
)

add_executable(NNCNNMaxReluForRelationLabeler NNCNNMaxReluForRelationLabeler.cpp)
target_link_libraries(NNCNNMaxReluForRelationLabeler ${LIBS})
