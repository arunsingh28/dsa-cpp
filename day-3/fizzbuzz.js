const fizzBuzz = (n) => {
  for (var i = 1; i <= n; i++) {
    if (i % 5 === 0 && i % 3 === 0) console.log("FizzBuzz");
    else if (i % 3 === 0) console.log("Fizz");
    else if (i % 5 === 0) console.log("Buzz");
    else console.log(i);
  }
};

// fizzBuzz(40);

// find the min and max from an array

const findMinMax = (arr) => {
  var minPrice = arr[0];
  var maxProfit = 0;
  for (var i = 1; i < arr.length; i++) {
    minPrice = Math.min(minPrice, arr[i]);
    maxProfit = Math.max(maxProfit, arr[i] - minPrice);
  }
  console.log(minPrice);
  console.log(maxProfit);
};

// findMinMax([2, 10, 43, 9, 4]);

// array chunks
const arrayChunks = (arr, limit) => {
  var result = [];
  var index = 0;

  while (index < arr.length) {
    const chunk = arr.slice(index, index + limit);
    result.push(chunk);
    index += limit;
  }

  console.log(result);
};

// arrayChunks([1, 5, 4, 3, 2, 6, 3, 1], 3);

const twoSums = (arr, sum) => {
  //   var firstIndex = arr[0];
  //   var secondIndex = arr[1];
  for (var i = 0; i <= arr.length; i++) {
    for (var j = i + 1; j < arr.length; j++) {
      if (arr[i] + arr[j] === sum) {
        return [i, j];
      }
    }
  }
  return [];
};

const res = twoSums([1, 5, 3, 7, 2], 6);
console.log(res);
