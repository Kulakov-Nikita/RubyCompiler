class Person
  # Конструктор класса (метод initialize)
  def initialize(name, age)
    @name = name
    @age = to_s(age)
  end

  def introduce()
    puts("Имя: " + @name +"\nВозраст: " + @age)
  end
end

me = Person.new("Никита", 22)
me.introduce()
