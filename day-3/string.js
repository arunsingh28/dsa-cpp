const reverseString = (st) => {
  const stArr = st.split("");
  var newArr = [];
  for (var i = stArr.length - 1; i >= 0; i--) {
    newArr.push(stArr[i]);
  }
  console.log(newArr.join(""));

  //     const stArr = st.split("").reverse().join("");
  //   console.log(stArr);
};

const palindrome = (st) => {
  const reverseString = st.split("").reverse().join("");
  console.log(reverseString === st ? "is palindrom" : "not palindrom");
};

const sentenceCapitiz = (para) => {
  const cap = para
    .split(" ")
    .map((word) => word[0].toUpperCase() + word.slice(1))
    .join(" ");
  console.log(cap);
};

// reverseString(1234);
// palindrome("cddc");
sentenceCapitiz("hello world");
