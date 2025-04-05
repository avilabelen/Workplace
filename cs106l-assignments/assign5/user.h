/*
 * CS106L Assignment 5: TreeBook
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */

#include <iostream>
#include <string>

class User
{
public:
  User(const std::string& name);
  void add_friend(const std::string& name);
  std::string get_name() const;
  size_t size() const;
  void set_friend(size_t index, const std::string& name);

  /** 
   * STUDENT TODO:
   * Your custom operators and special member functions will go here!
   */// Destructor
  ~User();

  // Constructor de copia
  User(const User& other);

  // Operador de asignación por copia
  User& operator=(const User& other);

  // Eliminar constructor de movimiento y operador de asignación por movimiento
  User(User&&) = delete;
  User& operator=(User&&) = delete;

  // Operador += (para agregar amigos mutuamente)
  User& operator+=(User& other);

  // Operador < (para ordenar por nombre)
  bool operator<(const User& other) const;

  // Operador << (como función amiga)
  friend std::ostream& operator<<(std::ostream& os, const User& user);


private:
  std::string _name;
  std::string* _friends;
  size_t _size;
  size_t _capacity;
};