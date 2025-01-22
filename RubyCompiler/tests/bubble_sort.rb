def bubble_sort(array)
    n = array.length()
    swapped = true
    while swapped
      swapped = false
      i = 0
      while i < n - 1
        if array[i] > array[i + 1]
          temp = array[i]
          array[i] = array[i + 1]
          array[i + 1] = temp
          swapped = true
        end
        i = i + 1
      end
    end
    return array
  end

array = [5, 2, 7, 3, 1, 9, 8, 4, 6, 0]
print(array)
print("\n")
print(bubble_sort(array))
