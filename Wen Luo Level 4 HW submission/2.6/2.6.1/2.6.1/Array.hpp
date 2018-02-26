#ifndef Array_
#define Array_
#include "Point.hpp"

using namespace Paul;

namespace Paul
{
	namespace Containers
	{
		class Array
		{
		private:
			int m_size;
			CAD::Point* m_data;
		public:
			Array();
			Array(int size);
			Array(const Array& a);
			~Array();
			Array& operator=(const Array& a);
			int Size() const;
			void SetElement(int index, const CAD::Point& p);
			const CAD::Point& GetElement(int index) const;
			CAD::Point& operator[](int index);
			const CAD::Point& operator[](int index) const;
		};
	}
}
#endif