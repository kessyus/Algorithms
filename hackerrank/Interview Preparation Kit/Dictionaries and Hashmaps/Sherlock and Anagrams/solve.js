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
 * Complete the 'sherlockAndAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRINGs as parameter.
 */

function sherlockAndAnagrams(s) {
  // Write your code here
  let map = {};
  let counter = 0;
  for (let i = 0; i <= s.length; i++)
    for (let j = i; j <= s.length; j++) {
      let str = s.substring(i, j).split("").sort().join("");
      map[str] = (map[str] || 0) + 1;
      console.log(" i=" + i + " j=" + j);
      console.log(map);
    }
  console.log(map);
  for (let t in map) {
    if (t !== "") counter += Math.floor(map[t] / 2);
  }
  return counter;
}

function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const q = parseInt(readLine().trim(), 10);

  for (let qItr = 0; qItr < q; qItr++) {
    const s = readLine();

    const result = sherlockAndAnagrams(s);

    ws.write(result + "\n");
  }

  ws.end();
}
