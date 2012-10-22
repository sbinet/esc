#include "big.hxx"
#include <iostream>

static const int NMAX = 10;

Big::Big() : m_data(new int[NMAX])
{
  std::cout << "Big::Big\n";
}

Big::~Big()
{
  std::cout << "Big::~Big\n";
  delete []m_data;
}

Big::Big(const Big& rhs) :
  m_data(new int[NMAX])
{
  std::cout << "Big::Big(const Big&)\n";
  for (int i = 0; i < NMAX; i++) {
    m_data[i] = rhs.m_data[i];
  }
}

Big&
Big::operator=(const Big& rhs)
{
  std::cout << "Big::operator=(const Big&)\n";
  if (&rhs != this) {
    for (int i = 0; i < NMAX; i++) {
      m_data[i] = rhs.m_data[i];
    }
  }
  return *this;
}

Big
operator+(const Big&a, const Big&b)
{
  std::cout << "operator+\n";
  for (int i = 0; i < NMAX; i++) {
    a.m_data[i] += b.m_data[i];
  }
  return a;
}

Big
munge(const Big &a)
{
  return a;
}