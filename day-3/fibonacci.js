const findFabonacci = (n) => {
  var a = 0,
    b = 1;
  for (var i = 0; i <= n; i++) {
    const temp = a + b;
    a = b;
    b = temp;
    console.log(b);
  }
};

findFabonacci(20);
