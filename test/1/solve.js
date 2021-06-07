"use strict";

const fs = require("fs");

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", function (inputStdin) {
  inputString += inputStdin;
});

process.stdin.on("end", function () {
  inputString = inputString.split("\n");

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/*
 * Complete the 'fourthBit' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER number as parameter.
 */

function fourthBit(number) {
  // Write your code here
  let binary = (number >>> 0).toString(2);

  return binary[binary.length - 4];
}

function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const number = parseInt(readLine().trim(), 10);

  const result = fourthBit(number);

  ws.write(result + "\n");

  ws.end();
}
