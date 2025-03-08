class MyArray {
  constructor() {
    this.length = 0;
    this.data = {};
  }
  push(item) {
    this.data[this.length] = item;
    this.length++;
    return this.data;
  }

  get(index) {
    return this.data[index];
  }

  pop() {
    delete this.data[this.length - 1];
    this.length--;
    return this.data;
  }

  shift() {
    for (var i = 0; i < this.length; i++) {
      this.data[i] = this.data[i + 1];
    }

    delete this.data[this.length - 1];
    this.length--;
    return this.data;
  }

  deleteByIndex(index) {
    for (var i = index; i < this.length - 1; i++) {
      this.data[i] = this.data[i + 1];
    }
    delete this.data[this.length - 1];
    this.length--;

    return this.data;
  }

  slice(start, end) {
    const newArray = new MyArray();
    for (var i = start; i < end && i < this.length; i++) {
      newArray.push(this.data[i]);
    }
    return newArray;
  }

  join(separator = ",") {
    let result = "";
    for (var i = 0; i < this.length; i++) {
      result += this.data[i];
      if (i < this.length - 1) result += separator;
    }
    return result;
  }
}

const arr = new MyArray();
arr.push("arun");
arr.push("appu");
arr.push("rahul");

const n = arr.slice(0, 2);
console.log(n);

const sp = arr.join("+");
console.log(sp);

console.log(arr);
