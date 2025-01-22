str = "Hello"
puts(str * 3)
puts(str + str)
puts(str.upcase())
puts(str.downcase())
puts(str[1])
puts(str[-1])
puts(str.length())
puts(str.size())
puts(str.include?("ell"))
puts(str.gsub("l", "x"))
puts(str.sub("l", "x"))
puts(str.split("l"))
array = ["1", "2", "3"]
puts(array.join(","))
str = "  hello  "
puts(str.strip())
str = "hello"
puts(str.reverse())
str = ""
puts(str.empty?())
str = "123"
puts(str.to_i() + 321)
