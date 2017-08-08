
template<typename... T> class Vertex;

template<> class Vertex<> {
public:
  static constexpr int size = 0;
};

template<typename HeadType, typename... TailTypes>
class Vertex<HeadType, TailTypes...> : private Vertex<TailTypes...> {
public:
  static constexpr int count = HeadType::count;

  static constexpr int size = sizeof(typename HeadType::type) * count + Vertex<TailTypes...>::size;
};

template<typename T, int Count>
class VertexAttribute {
public:
  using type = T;
  static constexpr int count = Count;
};
