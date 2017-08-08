#include <gtest/gtest.h>
#include "potato-gl.hpp"
#include <cstdint>

TEST(VertexAttributes, Size_Float3Char4Int4) {
  typedef VertexAttribute<float, 3>   t1;
  typedef VertexAttribute<char, 4>    t2;
  typedef VertexAttribute<int32_t, 4> t3;
  typedef Vertex<t1, t2, t3>          vertex_t;

  static const int size = vertex_t::size;
  ASSERT_EQ(32, size);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
