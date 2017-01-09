
include_directories(
  model
)

add_executable(NNCNNMaxSigForRelationLabeler NNCNNMaxSigForRelationLabeler.cpp)
target_link_libraries(NNCNNMaxSigForRelationLabeler ${LIBS})
