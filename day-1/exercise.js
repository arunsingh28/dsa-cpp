// calculate simple interest
function findSI(p, r, t) {
  return p * r * t;
} // si = P*R*T/100

// find the max of 2 number
function findMaxOf2Numbers(a, b) {
  return a > b ? a : b;
}

// calculate factorial of n
function findFactorial(n) {
  var result = 1;
  for (let i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

// get the DL or not based on the age
function isElegbalForDL(age) {
  return age >= 18 ? true : false;
}
