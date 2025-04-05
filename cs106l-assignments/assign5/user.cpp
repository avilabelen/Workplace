#include "user.h"
#include <iostream>
#include <algorithm>

/**
 * Creates a new User with the given name and no friends.
 */
User::User(const std::string& name)
  : _name(name)
  , _friends(nullptr)
  , _size(0)
  , _capacity(0)
{
}

/**
 * Adds a friend to this User's list of friends.
 * @param name The name of the friend to add.
 */
void
User::add_friend(const std::string& name)
{
  if (_size == _capacity) {
    _capacity = 2 * _capacity + 1;
    std::string* newFriends = new std::string[_capacity];
    for (size_t i = 0; i < _size; ++i) {
      newFriends[i] = _friends[i];
    }
    delete[] _friends;
    _friends = newFriends;
  }

  _friends[_size++] = name;
}

/**
 * Returns the name of this User.
 */
std::string
User::get_name() const
{
  return _name;
}

/**
 * Returns the number of friends this User has.
 */
size_t
User::size() const
{
  return _size;
}

/**
 * Sets the friend at the given index to the given name.
 * @param index The index of the friend to set.
 * @param name The name to set the friend to.
 */
void User::set_friend(size_t index, const std::string& name)
{
  _friends[index] = name;
}

/** 
 * STUDENT TODO:
 * The definitions for your custom operators and special member functions will go here!
 */
/**
 * Destructor
 */
User::~User() {
  delete[] _friends;
}

/**
 * Constructor de copia
 */
User::User(const User& other)
  : _name(other._name)
  , _size(other._size)
  , _capacity(other._capacity)
{
  _friends = new std::string[_capacity];
  for (size_t i = 0; i < _size; ++i) {
    _friends[i] = other._friends[i];
  }
}

/**
 * Operador de asignación por copia
 */
User& User::operator=(const User& other) {
  if (this != &other) {
    delete[] _friends;

    _name = other._name;
    _size = other._size;
    _capacity = other._capacity;

    _friends = new std::string[_capacity];
    for (size_t i = 0; i < _size; ++i) {
      _friends[i] = other._friends[i];
    }
  }
  return *this;
}

/**
 * Operador <<
 */
std::ostream& operator<<(std::ostream& os, const User& user) {
  os << "User(name=" << user._name << ", friends=[";
  for (size_t i = 0; i < user._size; ++i) {
    os << user._friends[i];
    if (i + 1 < user._size) os << ", ";
  }
  os << "])";
  return os;
}

/**
 * Operador += (simétrico)
 */
User& User::operator+=(User& other) {
  // Verificar si ya es amigo
  bool already_friend = false;
  for (size_t i = 0; i < _size; ++i) {
    if (_friends[i] == other._name) {
      already_friend = true;
      break;
    }
  }
  if (!already_friend) {
    this->add_friend(other._name);
  }

  // Hacer lo mismo en el otro usuario
  already_friend = false;
  for (size_t i = 0; i < other._size; ++i) {
    if (other._friends[i] == this->_name) {
      already_friend = true;
      break;
    }
  }
  if (!already_friend) {
    other.add_friend(this->_name);
  }

  return *this;
}

/**
 * Operador <
 */
bool User::operator<(const User& other) const {
  return _name < other._name;
}