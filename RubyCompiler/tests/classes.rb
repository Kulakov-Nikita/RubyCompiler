class Person
  def initialize(name, age)
    @name = name
    @age = age
  end

  def introduce()
    puts("Name: " + @name +"\nAge: " + @age)
  end
end

me = Person.new("Nikita", "22")
me.introduce()

