import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Scanner;
import java.util.stream.Collectors;

public class __BASE__ {
    private static final int INTEGER = 0;
    private static final int BOOLEAN = 1;
    private static final int FLOAT = 2;
    private static final int STRING = 3;
    private static final int NIL = 4;
    private static final int ARRAY = 5;

    public int __iVal;
    public boolean __bVal;
    public float __fVal;
    public String __sVal;
    public ArrayList<__BASE__> __aVal;

    public int __type = -1;

    public __BASE__() {
        __type = NIL;
    }

    public __BASE__(int value) {
        this.__iVal = value;
        this.__type = INTEGER;
    }

    public __BASE__(boolean value) {
        this.__bVal = value;
        this.__type = BOOLEAN;
    }

    public __BASE__(float value) {
        this.__fVal = value;
        this.__type = FLOAT;
    }

    public __BASE__(String value) {
        this.__sVal = value;
        this.__type = STRING;
    }

    public __BASE__(ArrayList<__BASE__> value) {
        this.__aVal = new ArrayList<>();
        this.__aVal = value;
        this.__type = ARRAY;
    }

    public __BASE__ __add__(__BASE__ o) {
        if (this.__type == INTEGER && o.__type == INTEGER) {
            return new __BASE__(this.__iVal + o.__iVal);
        }

        if (this.__type == INTEGER && o.__type == FLOAT) {
            return new __BASE__(this.__iVal + o.__fVal);
        }

        if (this.__type == FLOAT && o.__type == INTEGER) {
            return new __BASE__(this.__fVal + o.__iVal);
        }

        if (this.__type == FLOAT && o.__type == FLOAT) {
            return new __BASE__(this.__fVal + o.__fVal);
        }

        if (this.__type == STRING && o.__type == STRING) {
            return new __BASE__(this.__sVal + o.__sVal);
        }

        if (this.__type == ARRAY && o.__type == ARRAY){
            ArrayList<__BASE__> base__s = (new ArrayList<>(this.__aVal));
            base__s.addAll(o.__aVal);
            return new __BASE__(base__s);
        }

        throw new UnsupportedOperationException("add isn't support operation for types: " + this.__type + " and: " + o.__type);
    }

    public __BASE__ __sub__(__BASE__ o) {
        if (this.__type == INTEGER && o.__type == INTEGER) {
            return new __BASE__(this.__iVal - o.__iVal);
        }

        if (this.__type == INTEGER && o.__type == FLOAT) {
            return new __BASE__(this.__iVal - o.__fVal);
        }

        if (this.__type == FLOAT && o.__type == INTEGER) {
            return new __BASE__(this.__fVal - o.__iVal);
        }

        if (this.__type == FLOAT && o.__type == FLOAT) {
            return new __BASE__(this.__fVal - o.__fVal);
        }

        if (this.__type == ARRAY && o.__type == ARRAY){
            ArrayList<__BASE__> t = new ArrayList<>(this.__aVal);
            t.removeAll(o.__aVal);
            return new __BASE__(new ArrayList<>(t));
        }

        throw new UnsupportedOperationException("sub isn't support operation for types: " + this.__type + " and: " + o.__type);
    }

    public __BASE__ __mul__(__BASE__ o) {
        if (this.__type == INTEGER && o.__type == INTEGER) {
            return new __BASE__(this.__iVal * o.__iVal);
        }

        if (this.__type == INTEGER && o.__type == FLOAT) {
            return new __BASE__(this.__iVal * o.__fVal);
        }

        if (this.__type == FLOAT && o.__type == INTEGER) {
            return new __BASE__(this.__fVal * o.__iVal);
        }

        if (this.__type == FLOAT && o.__type == FLOAT) {
            return new __BASE__(this.__fVal * o.__fVal);
        }

        if (this.__type == STRING && o.__type == INTEGER) {
            if (o.__iVal < 0) throw new IllegalArgumentException("Argument is zero");
            if (o.__iVal == 0) return new __BASE__("");
            return new __BASE__(new String(new char[o.__iVal]).replace("\0", this.__sVal));
        }

        if (this.__type == STRING && o.__type == FLOAT) {
            int val = (int) o.__fVal;
            if (val < 0) throw new IllegalArgumentException("Argument is zero");
            if (val == 0) return new __BASE__("");
            return new __BASE__(new String(new char[val]).replace("\0", this.__sVal));
        }

        if (this.__type == ARRAY && o.__type == INTEGER) {
            if (o.__iVal < 0) throw new IllegalArgumentException("Argument is zero");
            if (o.__iVal == 0) return new __BASE__(new ArrayList<>());
            int value = o.__iVal;
            ArrayList<__BASE__> arrayList = new ArrayList<>();
            for (int i = 0; i < value; i++)
                arrayList.addAll(this.__aVal);
            return new __BASE__(arrayList);
        }

        if (this.__type == ARRAY && o.__type == FLOAT) {
            int val = (int) Math.floor(o.__fVal);
            if (val < 0) throw new IllegalArgumentException("Argument is zero");
            if (val == 0) return new __BASE__(new ArrayList<>());
            ArrayList<__BASE__> arrayList = new ArrayList<>();
            for (int i = 0; i < val; i++)
                arrayList.addAll(this.__aVal);
            return new __BASE__(arrayList);
        }

       if (this.__type == ARRAY && o.__type == STRING) {
            String str = this.__aVal.get(0).toString();
            for (int i = 1; i < this.__aVal.size(); i++) {
                str += (new __BASE__(o.__sVal)).toString() + this.__aVal.get(i).toString();
            }
            return new __BASE__(str);
        }

        throw new UnsupportedOperationException("mul isn't support operation for types: " + this.__type + " and: " + o.__type);
    }

    public __BASE__ __div__(__BASE__ o) {
        if (this.__type == INTEGER && o.__type == INTEGER) {
            return new __BASE__(this.__iVal / o.__iVal);
        }

        if (this.__type == INTEGER && o.__type == FLOAT) {
            return new __BASE__(this.__iVal / o.__fVal);
        }

        if (this.__type == FLOAT && o.__type == INTEGER) {
            return new __BASE__(this.__fVal / o.__iVal);
        }

        if (this.__type == FLOAT && o.__type == FLOAT) {
            return new __BASE__(this.__fVal / o.__fVal);
        }

        throw new UnsupportedOperationException("div isn't support operation for types: " + this.__type + " and: " + o.__type);
    }

    public __BASE__ __mod__(__BASE__ o) {
        if (this.__type == INTEGER && o.__type == INTEGER) {
            return new __BASE__(this.__iVal % o.__iVal);
        }

        if (this.__type == INTEGER && o.__type == FLOAT) {
            return new __BASE__(this.__iVal % o.__fVal);
        }

        if (this.__type == FLOAT && o.__type == INTEGER) {
            return new __BASE__(this.__fVal % o.__iVal);
        }

        if (this.__type == FLOAT && o.__type == FLOAT) {
            return new __BASE__(this.__fVal % o.__fVal);
        }

        if (this.__type == STRING) return new __BASE__(this.__sVal);

        throw new UnsupportedOperationException("div isn't support operation for types: " + this.__type + " and: " + o.__type);
    }

    public __BASE__ __eql__(__BASE__ o) {
        if (this.__type == NIL && o.__type == NIL) return new __BASE__(true);
        if (this.__type == NIL || o.__type == NIL) return new __BASE__(false);

        if (this.__type == INTEGER && o.__type == INTEGER) {
            return new __BASE__(this.__iVal == o.__iVal);
        }

        if (this.__type == INTEGER && o.__type == FLOAT) {
            return new __BASE__(this.__iVal == o.__fVal);
        }

        if (this.__type == FLOAT && o.__type == INTEGER) {
            return new __BASE__(this.__fVal == o.__iVal);
        }

        if (this.__type == FLOAT && o.__type == FLOAT) {
            return new __BASE__(this.__fVal == o.__fVal);
        }

        if (this.__type == STRING && o.__type == STRING) {
            return new __BASE__(this.__sVal.equals(o.__sVal));
        }

        if (this.__type == BOOLEAN && o.__type == BOOLEAN) {
            return new __BASE__(this.__bVal == o.__bVal);
        }

        if (this.__type != o.__type) return new __BASE__(false);

        throw new UnsupportedOperationException("eql isn't support operation for types: " + this.__type + " and: " + o.__type);
    }

    public __BASE__ __not_eql__(__BASE__ o) {
        try {
            if(this.__eql__(o).__bVal)return new __BASE__(false);
            else return new __BASE__(true);
        } catch(UnsupportedOperationException e) {
            throw new UnsupportedOperationException("not_eql isn't support operation for types: " + this.__type + " and: " + o.__type);
        }
    }

    public __BASE__ __les__(__BASE__ o) {
        if (this.__type == INTEGER && o.__type == INTEGER) {
            return new __BASE__(this.__iVal < o.__iVal);
        }

        if (this.__type == INTEGER && o.__type == FLOAT) {
            return new __BASE__(this.__iVal < o.__fVal);
        }

        if (this.__type == FLOAT && o.__type == INTEGER) {
            return new __BASE__(this.__fVal < o.__iVal);
        }

        if (this.__type == FLOAT && o.__type == FLOAT) {
            return new __BASE__(this.__fVal < o.__fVal);
        }

        if (this.__type == STRING && o.__type == STRING) {
            int compared = this.__sVal.compareTo(o.__sVal);
            return new __BASE__(compared < 0);
        }

        throw new UnsupportedOperationException("less isn't support operation for types: " + this.__type + " and: " + o.__type);
    }

    public __BASE__ __les_or_eql__(__BASE__ o) {
        try {
            return new __BASE__(__eql__(o).__bVal || __les__(o).__bVal);
        } catch (UnsupportedOperationException e) {
            throw new UnsupportedOperationException("less_or_eqls isn't support operation for types: " + this.__type + " and: " + o.__type);
        }
    }

    public __BASE__ __greater__(__BASE__ o) {
        try {
            return new __BASE__(!__les_or_eql__(o).__bVal);
        } catch (UnsupportedOperationException e) {
            throw new UnsupportedOperationException("greater isn't support operation for types: " + this.__type + " and: " + o.__type);
        }
    }

    public __BASE__ __greater_or_eql__(__BASE__ o) {
        try {
            return new __BASE__(!__les__(o).__bVal);
        } catch (UnsupportedOperationException e) {
            throw new UnsupportedOperationException("greater_or_eql isn't support operation for types: " + this.__type + " and: " + o.__type);
        }
    }

    public __BASE__ __not__() {
        if (this.__type == NIL) return new __BASE__(true);
        if (this.__type == BOOLEAN) return new __BASE__(!this.__bVal);
        return new __BASE__(false);
    }

    public __BASE__ __logical_and__(__BASE__ o) {
        if (this.__type == BOOLEAN && o.__type == BOOLEAN)
            return new __BASE__(this.__bVal && o.__bVal);
        if (this.__type == BOOLEAN)
            return new __BASE__(this.__bVal);
        if (o.__type == BOOLEAN)
            return new __BASE__(o.__bVal);
        return new __BASE__(true);
    }

    public __BASE__ __logical_or__(__BASE__ o) {
        if (this.__type == BOOLEAN && o.__type == BOOLEAN)
            return new __BASE__(this.__bVal || o.__bVal);
        return new __BASE__(true);
    }

    public __BASE__ __pow__(__BASE__ o) {
        if (this.__type == INTEGER && o.__type == INTEGER) {
            return new __BASE__((int)Math.pow(this.__iVal, o.__iVal));
        }

        if (this.__type == INTEGER && o.__type == FLOAT) {
            return new __BASE__((float) Math.pow(this.__iVal, o.__iVal));
        }

        if (this.__type == FLOAT && o.__type == INTEGER) {
            return new __BASE__((float) Math.pow(this.__iVal, o.__iVal));
        }

        if (this.__type == FLOAT && o.__type == FLOAT) {
            return new __BASE__((float) Math.pow(this.__iVal, o.__iVal));
        }

        throw new UnsupportedOperationException("pow isn't support operation for types: " + this.__type + " and: " + o.__type);
    }

    public __BASE__ __member_access__(__BASE__ index) {
        if(index.__type != INTEGER) throw new IllegalArgumentException("index must be integer");

        if(this.__type == ARRAY) {
            if(index.__iVal >= this.__aVal.size()) return new __BASE__();
            return this.__aVal.get(index.__iVal);
        }
        if(this.__type == STRING) {
            if(index.__iVal<0)return new __BASE__(Character.toString(this.__sVal.charAt(this.__sVal.length() + index.__iVal)));
            if(index.__iVal >= this.__sVal.length()) return new __BASE__();
            return new __BASE__(Character.toString(this.__sVal.charAt(index.__iVal)));
        }

        throw new UnsupportedOperationException("member_access isn't support operation for type: " + this.__type);
    }

    public __BASE__ length(){
        if(this.__type == ARRAY) {
            return new __BASE__(this.__aVal.size());
        }
        if(this.__type == STRING) {
            return new __BASE__(this.__sVal.length());
        }
        throw new UnsupportedOperationException("length isn't support operation for type: " + this.__type);
    }

    public __BASE__ size()
    {
        return this.length();
    }

    public __BASE__ contains(__BASE__ str)
    {
        if(this.__type != STRING) throw new UnsupportedOperationException("contains isn't support operation for type: " + this.__type);
        return new __BASE__(this.__sVal.contains(str.__sVal));
    }

    public __BASE__ gsub(__BASE__ a, __BASE__ b)
    {
        if(a.__type != STRING)throw new UnsupportedOperationException("regex must be a STRING not a: " + this.__type);
        if(b.__type != STRING)throw new UnsupportedOperationException("replacement must be a STRING not a: " + this.__type);
        if(this.__type != STRING) throw new UnsupportedOperationException("gsub isn't support operation for type: " + this.__type);
        return new __BASE__(this.__sVal.replaceAll(a.__sVal, b.__sVal));
    }
    public __BASE__ sub(__BASE__ a, __BASE__ b)
    {
        if(a.__type != STRING)throw new UnsupportedOperationException("regex must be a STRING not a: " + this.__type);
        if(b.__type != STRING)throw new UnsupportedOperationException("replacement must be a STRING not a: " + this.__type);
        if(this.__type != STRING) throw new UnsupportedOperationException("sub isn't support operation for type: " + this.__type);
        return new __BASE__(this.__sVal.replaceFirst(a.__sVal, b.__sVal));
    }
    public __BASE__ split(__BASE__ a)
    {
        if(this.__type != STRING) throw new UnsupportedOperationException("split isn't support operation for type: " + this.__type);
        String[] tmp = this.__sVal.split(a.__sVal);
        ArrayList<__BASE__> arrayList = new ArrayList<>();
        for(String s:tmp)
        {
            arrayList.add(new __BASE__(s));
        }
        return new __BASE__(arrayList);
    }
    public __BASE__ join(__BASE__ a)
    {
        if(this.__type != ARRAY) throw new UnsupportedOperationException("join isn't support operation for type: " + this.__type);
        if(a.__type != STRING)throw new UnsupportedOperationException("delimeter must be a STRING not a: " + this.__type);
        ArrayList<String> joined = new ArrayList<>();
        for(__BASE__ str:this.__aVal)
        {
            if(str.__type!=STRING)throw new UnsupportedOperationException("join isn't support for array with object type: " + this.__type);
            joined.add(str.__sVal);
        }
        return new __BASE__(String.join(a.__sVal, joined));
    }
    public __BASE__ strip()
    {
        if(this.__type != STRING) throw new UnsupportedOperationException("strip isn't support operation for type: " + this.__type);
        return new __BASE__(this.__sVal.trim());
    }
    public __BASE__ reverse()
    {
        if(this.__type != STRING) throw new UnsupportedOperationException("reverse isn't support operation for type: " + this.__type);
        return new __BASE__(new StringBuilder(this.__sVal).reverse().toString());
    }
    public __BASE__ isEmpty()
    {
        if(this.__type != STRING) throw new UnsupportedOperationException("isEmpty isn't support operation for type: " + this.__type);
        return new __BASE__(this.__sVal.isEmpty());
    }

    public __BASE__ __member_access_assign__(__BASE__ index, __BASE__ value) {
        if(index.__type != INTEGER) throw new IllegalArgumentException("index must be integer");

        if(this.__type == ARRAY) {
            if(index.__iVal >= this.__aVal.size()) {
                ArrayList<__BASE__> a = new ArrayList<>();
                for(int i = 0; i < index.__iVal; ++i) {
                    a.add(__member_access__(new __BASE__(i)));
                }
                a.add(value);
                this.__aVal = a;
            }else {
                this.__aVal.set(index.__iVal, value);
            }

            return value;
        }

        throw new UnsupportedOperationException("member_access_assign isn't support operation for type: " + this.__type);
    }

    public String toString() {
        String s = "";
        if (this.__type == INTEGER)
            s += this.__iVal;
        if (this.__type == FLOAT)
            s += this.__fVal;
        if (this.__type == STRING)
            s += this.__sVal;
        if (this.__type == BOOLEAN)
            s += this.__bVal;
        if (this.__type == ARRAY) {
            s += "[" + __aVal.stream().map(__BASE__::toStringForArray).collect(Collectors.joining(", ")) + "]";
        }
        return s;
    }

    private String toStringForArray() {
        if(this.__type == STRING) return "\"" + this.__sVal +"\"";
        return toString();
    }

    public static void flatten(__BASE__ input, __BASE__ output) {
        for (__BASE__ element : input.__aVal) {
            if (element.__type == ARRAY) {
                flatten(element, output);
            } else {
                output.__aVal.add(element);
            }
        }
    }

    public static void print(__BASE__ value) {
        System.out.print(value.toString());
    }

    public static void println(__BASE__ value) {
        if(value.__type == ARRAY)
        {
            __BASE__ output = new __BASE__(new ArrayList<>());
            flatten(value, output);
            for(__BASE__ str:output.__aVal)
            {
                System.out.println(str.toString());
            }
        }
        else System.out.println(value.toString());
    }

    public static __BASE__  __gets__() {
        Scanner scanner = new Scanner(System.in);
        return new __BASE__(scanner.nextLine());
    }

    public __BASE__ __to_i__() {
        if (this.__type == INTEGER)
            return new __BASE__(this.__iVal);
        if (this.__type == FLOAT)
            return new __BASE__((int)this.__fVal);
        if (this.__type == STRING) {
            String str = "";
            int value = 0;
            for (int i = 0; i < this.__sVal.length() && Character.isDigit(this.__sVal.charAt(i)); i++) {
                str += this.__sVal.charAt(i);
            }
            if (!str.isEmpty())
                value = Integer.parseInt(str);
            return new __BASE__(value);
        }
        throw new UnsupportedOperationException("to_i() isn't support operation for type: " + this.__type);
    }

    public __BASE__ __to_f__() {
        if (this.__type == INTEGER)
            return new __BASE__((float)this.__iVal);
        if (this.__type == FLOAT)
            return new __BASE__(this.__fVal);
        if (this.__type == STRING) {
            String str = "";
            int value = 0;
            for (int i = 0; i < this.__sVal.length() && (Character.isDigit(this.__sVal.charAt(i)) || this.__sVal.charAt(i) == '.'); i++) {
                if (!str.contains("."))
                    str += this.__sVal.charAt(i);
                else
                    return new __BASE__((float)value);
            }
            if (!str.isEmpty())
                value = Integer.parseInt(str);
            return new __BASE__((float)value);
        }
        throw new UnsupportedOperationException("to_f() isn't support operation for type: " + this.__type);
    }

    public __BASE__ __to_s__() {
        return new __BASE__(this.toString());
    }

    public __BASE__ upcase()
    {
        if(this.__type != STRING){
            throw new UnsupportedOperationException("upcase() isn't support operation for type: " + this.__type);
        }
        return new __BASE__(this.__sVal.toUpperCase());
    }
    public __BASE__ downcase()
    {
        if(this.__type != STRING){
            throw new UnsupportedOperationException("downcase() isn't support operation for type: " + this.__type);
        }
        return new __BASE__(this.__sVal.toLowerCase());
    }


    public static __BASE__ __to_s__(__BASE__ value) {
        return new __BASE__(value.toString());
    }

    public __BASE__ __split__() {
        if (this.__type == STRING) {
            String str = this.__sVal;
            String[] strs = str.split(" ");
            ArrayList<__BASE__> base__s = new ArrayList<>();

            for (String s : strs) {
                base__s.add(new __BASE__(s));
            }
            return new __BASE__(base__s);
        }

        throw new UnsupportedOperationException("split() isn't support operation for type: " + this.__type);
    }
    @Override
    public boolean equals(Object obj) {
        __BASE__ o = (__BASE__) obj;
        return __eql__(o).__bVal;
    }

    public __BASE__ __unary_minus__() {
        if (this.__type == INTEGER) {
            return new __BASE__((this.__iVal * -1));
        }

        if (this.__type == FLOAT) {
            return new __BASE__((this.__fVal * -1));
        }

        if (this.__type == STRING) {
            return new __BASE__(this.__sVal);
        }

        throw new UnsupportedOperationException("unary_minus isn't support operation for type: " + this.__type);
    }

    public Iterator __get_iterator__()
    {
        if (this.__type != ARRAY) {
            throw new UnsupportedOperationException("__get_iterator__ isn't support operation for type: " + this.__type);
        }
        return __aVal.iterator();
    }

    public __BASE__ __unary_plus__() {
        if (this.__type == INTEGER) {
            return new __BASE__(this.__iVal);
        }

        if (this.__type == FLOAT) {
            return new __BASE__(this.__fVal);
        }

        if (this.__type == STRING) {
            return new __BASE__(this.__sVal);
        }

        throw new UnsupportedOperationException("unary_plus isn't support operation for type: " + this.__type);
    }
}
