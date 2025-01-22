name
RubyCompiler.exe .\tests\integer_and_string_operations.rb
java -noverify -classpath . __PROGRAM__ > .\results\integer_and_string_operations.txt
ruby .\tests\integer_and_string_operations.rb > .\results\(Ruby)integer_and_string_operations.txt
fc .\results\integer_and_string_operations.txt .\results\(Ruby)integer_and_string_operations.txt > .\results\(Diff)integer_and_string_operations.txt

RubyCompiler.exe .\tests\arrays.rb
java -noverify -classpath . __PROGRAM__ > .\results\arrays.txt
ruby .\tests\arrays.rb > .\results\(Ruby)arrays.txt
fc .\results\arrays.txt .\results\(Ruby)arrays.txt > .\results\(Diff)arrays.txt

RubyCompiler.exe .\tests\bin_oct_hex_dec.rb
java -noverify -classpath . __PROGRAM__ > .\results\bin_oct_hex_dec.txt
ruby .\tests\bin_oct_hex_dec.rb > .\results\(Ruby)bin_oct_hex_dec.txt
fc .\results\bin_oct_hex_dec.txt .\results\(Ruby)bin_oct_hex_dec.txt > .\results\(Diff)bin_oct_hex_dec.txt

RubyCompiler.exe .\tests\if-else.rb
java -noverify -classpath . __PROGRAM__ > .\results\if-else.txt
ruby .\tests\if-else.rb > .\results\(Ruby)if-else.txt
fc .\results\if-else.txt .\results\(Ruby)if-else.txt > .\results\(Diff)if-else.txt

RubyCompiler.exe .\tests\for-while.rb
java -noverify -classpath . __PROGRAM__ > .\results\for-while.txt
ruby .\tests\for-while.rb > .\results\(Ruby)for-while.txt
fc .\results\for-while.txt .\results\(Ruby)for-while.txt > .\results\(Diff)for-while.txt

RubyCompiler.exe .\tests\functions.rb
java -noverify -classpath . __PROGRAM__ > .\results\functions.txt
ruby .\tests\functions.rb > .\results\(Ruby)functions.txt
fc .\results\functions.txt .\results\(Ruby)functions.txt > .\results\(Diff)functions.txt

RubyCompiler.exe .\tests\input-output.rb
java -noverify -classpath . __PROGRAM__ > .\results\input-output.txt
ruby .\tests\input-output.rb > .\results\(Ruby)input-output.txt
fc .\results\input-output.txt .\results\(Ruby)input-output.txt > .\results\(Diff)input-output.txt

RubyCompiler.exe .\tests\classes.rb
java -noverify -classpath . __PROGRAM__ > .\results\classes.txt
ruby .\tests\classes.rb > .\results\(Ruby)classes.txt
fc .\results\classes.txt .\results\(Ruby)classes.txt > .\results\(Diff)classes.txt

RubyCompiler.exe .\tests\floats.rb
java -noverify -classpath . __PROGRAM__ > .\results\floats.txt
ruby .\tests\floats.rb > .\results\(Ruby)floats.txt
fc .\results\floats.txt .\results\(Ruby)floats.txt > .\results\(Diff)floats.txt

RubyCompiler.exe .\tests\multi-axes-array.rb
java -noverify -classpath . __PROGRAM__ > .\results\multi-axes-array.txt
ruby .\tests\multi-axes-array.rb > .\results\(Ruby)multi-axes-array.txt
fc .\results\multi-axes-array.txt .\results\(Ruby)multi-axes-array.txt > .\results\(Diff)multi-axes-array.txt

RubyCompiler.exe .\tests\logical_operators.rb
java -noverify -classpath . __PROGRAM__ > .\results\logical_operators.txt
ruby .\tests\logical_operators.rb > .\results\(Ruby)logical_operators.txt
fc .\results\logical_operators.txt .\results\(Ruby)logical_operators.txt > .\results\(Diff)logical_operators.txt

RubyCompiler.exe .\tests\string_operations.rb
java -noverify -classpath . __PROGRAM__ > .\results\string_operations.txt
ruby .\tests\string_operations.rb > .\results\(Ruby)string_operations.txt
fc .\results\string_operations.txt .\results\(Ruby)string_operations.txt > .\results\(Diff)string_operations.txt
