//------------------------------------------------------------------------------
/**
 * O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n) < O(n!)
 * O(1) -> index of array or hashmap
 * O(log n) -> binary search (keep dividing in half on a sorted array)
 * O(n) -> min/max value of array, find inside array
 * O(n log n) -> mergesort, quicksort (firefox/chrome)
 * O(n^2) -> bubble sort
 * O(2^n) -> fibonnacci, finding all the subsets on a set
 * O(n!) -> factorial
 */
console.log(Number.MAX_VALUE);

//------------------------------------------------------------------------------
/**
 * Given an array and an index tell if the num is even or odd
 * Complexity: O(1)
 * @param {array, number} arr, n
 * @returns {string}
 */
function isEvenOrOdd(arr, n) {
  return arr[n] % 2 === 0 ? "even" : "odd";
}

console.log(isEvenOrOdd([1, 2, 3, 4, 5], 3));

//------------------------------------------------------------------------------
/**
 * Function 1: return the minimum value of an array.
 * Complexity: O(n)
 * @param {array} n array of numbers
 * @returns {number}
 */
function getMin(arr) {
  let min = arr[0];
  for (let i = 0; i < arr.length; i++) {
    if (min > arr[i]) min = arr[i];
  }
  return min;
}

let list = new Array();
list = [10, 50, 28, 50, -8, 1, 9];
console.log(getMin(list));

//------------------------------------------------------------------------------
/**
 * Function 2: returns the minimum value of an array.
 * Complexity: O(n^2)
 * Example of sorting using Bubble sort
 * @param {array} n array of numbers
 * @returns {number}
 */
function getMin2(arr) {
  for (let i = 0; i < arr.length; i++) {
    let outterNum = arr[i];
    for (let j = i + 1; j < arr.length; j++) {
      let innerNum = arr[j];
      if (outterNum > innerNum) {
        arr[i] = innerNum;
        arr[j] = outterNum;
        outterNum = arr[i];
        innerNum = arr[j];
      }
    }
  }
  let min = arr[0];
  return min;
}

let list2 = new Array();
list2 = [10, 50, 28, 50, -8, 1, 9];
console.log(getMin2(list));

//------------------------------------------------------------------------------
/**
 * Given a string, find its word frequency data
 * Complexity: O(1)
 * @param {hashmap, string}
 * @returns {number}
 */
function getWordFrequency(dictionary, word) {
  return dictionary[word];
}

const dictionary = {
  the: 22038615,
  be: 12545825,
  and: 10741073,
  of: 10343885,
  a: 10144200,
  in: 6996437,
  to: 6332195,
};
console.log(getWordFrequency(dictionary, "the"));
console.log(getWordFrequency(dictionary, "in"));

//------------------------------------------------------------------------------
/**
 * Given a string, find its word frequency data
 * Complexity: O(n)
 * @param {array, string}
 * @returns {number}
 */
function getWordFrequency2(arr, givenWord) {
  return arr.find((item) => item.word === givenWord).value;
}

const dictionary2 = [
  { word: "the", value: 22038615 },
  { word: "be", value: 12545825 },
  { word: "and", value: 10741073 },
  { word: "of", value: 10343885 },
  { word: "a", value: 10144200 },
  { word: "in", value: 6996437 },
  { word: "to", value: 6332195 },
];
console.log(getWordFrequency2(dictionary2, "the"));
console.log(getWordFrequency2(dictionary2, "in"));

//------------------------------------------------------------------------------
/**
 * You want to find duplicate words in an array.
 * Complexity: O(n^2)
 * @param {array}
 * @returns {boolean}
 */
function hasDuplicates(arr) {
  for (let i = 0; i < arr.length; i++)
    for (let j = i + 1; j < arr.length; j++) if (arr[i] === arr[j]) return true;
  return false;
}

let list3 = [0, 1, 2, 3, 4, 5, 2, 6];
console.log(hasDuplicates(list3));

//------------------------------------------------------------------------------
/**
 * Find the solutions for a multi-variable equation that looks like this:
 * 3x + 9y + 8z = 79
 * Complexity: O(n^3)
 * @param {number}
 * @returns {array}
 */
function solveProblem(num) {
  let solutions = [];
  for (let x = 0; x < num; x++)
    for (let y = 0; y < num; y++)
      for (let z = 0; z < num; z++)
        if (3 * x + 9 * y + 8 * z === 79) solutions.push({ x, y, z });
  return solutions;
}

console.log(solveProblem(10));

//------------------------------------------------------------------------------
/**
 * Find the index of an element in a sorted array.
 * Binary Search example
 * Complexity: O(log n)
 * @param {array}
 * @returns {number}
 */
function binarySearch(arr, word, offset = 0) {
  const half = parseInt(arr.length / 2);
  const current = arr[half];

  if (current === word) {
    return offset + half;
  } else if (word > current) {
    const right = arr.slice(half);
    return binarySearch(right, word, offset + half);
  } else {
    const left = arr.slice(0, half);
    return binarySearch(left, word, offset);
  }
}

const directory = [
  "Adrian",
  "Bella",
  "Charlotte",
  "Daniel",
  "Emma",
  "Hanna",
  "Isabella",
  "Jayden",
  "Kaylee",
  "Luke",
  "Mia",
  "Nora",
  "Olivia",
  "Paisley",
  "Riley",
  "Thomas",
  "Wyatt",
  "Xander",
  "Zoe",
];
console.log(binarySearch(directory, "Hanna"));
console.log(binarySearch(directory, "Adrian"));
console.log(binarySearch(directory, "Zoe"));

//------------------------------------------------------------------------------
/**
 * Create a function for a factorial of a number.
 * Complexity: O(n!)
 * @param {number}
 * @returns {number}
 */
function factorial(num) {
  if (num === 1) return 1;
  else return num * factorial(num - 1);
}

console.log(factorial(5));
console.log(factorial(10));

//------------------------------------------------------------------------------
/**
 * MergeSort
 * Complexity: O(n log n)
 * Sort array in asc order using merge-sort
 * @example
 *    sort([3, 2, 1]) => [1, 2, 3]
 *    sort([3]) => [3]
 *    sort([3, 2]) => [2, 3]
 * @param {array} array
 */
function sort(array = []) {
  const size = array.length;
  // base case
  if (size < 2) {
    return array;
  }
  if (size === 2) {
    return array[0] > array[1] ? [array[1], array[0]] : array;
  }
  // slit and merge
  const mid = parseInt(size / 2, 10);
  return merge(sort(array.slice(0, mid)), sort(array.slice(mid)));
}

/**
 * Merge two arrays in asc order
 * @example
 *    merge([2,5,9], [1,6,7]) => [1, 2, 5, 6, 7, 9]
 * @param {array} array1
 * @param {array} array2
 * @returns {array} merged arrays in asc order
 */
function merge(array1 = [], array2 = []) {
  const merged = [];
  let array1Index = 0;
  let array2Index = 0;
  // merge elements on a and b in asc order. Run-time O(a + b)
  while (array1Index < array1.length || array2Index < array2.length) {
    if (
      array1Index >= array1.length ||
      array1[array1Index] > array2[array2Index]
    ) {
      merged.push(array2[array2Index]);
      array2Index += 1;
    } else {
      merged.push(array1[array1Index]);
      array1Index += 1;
    }
  }
  return merged;
}

let array = [8, 9, 1, 2, 5, 6, 9, 4, 3, 0, 10, 20, -1, 0];
console.log(sort(array));

//------------------------------------------------------------------------------
/**
 * Insert items on a hashmap
 * @param {Map, String, Integer}
 * @returns {Map}
 */
function insertMap(map, key, value) {
  map.set(key, value);
  return map;
}

const map = new Map();
console.log(insertMap(map, "word", 1));
console.log(insertMap(map, "text", 1));
console.log(map);
console.log(map["word"]);

