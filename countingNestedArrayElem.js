const arr4 = [1, 2, [3, 4, [5, 6, [7, 8, [9, 10]]]]];

//way1
function getLength(a) {
    let count = 0;
    for (const value of a) {
        if (Array.isArray(value)) {
            // Recurse
            count += getLength(value);
        } else {
            // Count
            ++count;
        }
    }
    return count;
}

//way2
function getLength(array) {
    let count = 0;
    for (const item of array) count += !Array.isArray(item) || getLength(item);
    return count;
}

//way3
function getLength(arr){
    return arr.reduce(function fn(acc, item) {
      if(Array.isArray(item)) return item.reduce(fn);
      return acc + 1;
    }, 0);
  }
  
console.log(getLength(arr4)) //10
