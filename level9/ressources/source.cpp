#include <cstdlib>
#include <cstring>

class N {
	public:
		N(int x) : m_x(x) {}

		void N::setAnnotation(const char *arg)
		{
			std::memcpy(m_buffer, arg, std::strlen(arg));
		}

		virtual int	N::operator+(const N &other)
		{
			return m_x + other.m_x;
		}

		virtual int	N::operator-(const N &other)
		{
			return m_x - other.m_x;
		}

	private:
		char	m_buffer[100];
		int	m_x;
};

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::exit(1);

	N	*a = new N(5);
	N	*b = new N(6);

	a->setAnnotation(argv[1]);

	return *a + *b;
}