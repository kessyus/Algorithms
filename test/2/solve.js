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
 * Complete the 'newPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

function newPassword(a, b) {
  // Write your code here
  let password = "";
  let limit = a.length > b.length ? a.length : b.length;
  for (let i = 0; i < limit; i++) {
    if (a[i] !== undefined) password += a[i];
    if (b[i] !== undefined) password += b[i];
  }
  return password;
}

function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const a = readLine();

  const b = readLine();

  const result = newPassword(a, b);

  ws.write(result + "\n");

  ws.end();
}
