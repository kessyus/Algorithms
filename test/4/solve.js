"use strict";

const fs = require("fs");

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .replace(/\s*$/, "")
    .split("\n")
    .map((str) => str.replace(/\s*$/, ""));

  main();
});

function readLine() {
  return inputString[currentLine++];
}

// Complete the braces function below.
function braces(values) {
  let n = values.length;
  let result = [];
  for (let i = 0; i < n; i++) {
    let word = values[i].split("");
    if (word[0] === "}" || word[0] === "]" || word[0] === ")") {
      result.push("NO");
      continue;
    }

    for (let j = 1; j < word.length; j++) {
      if (word[j] === "}") {
        if (word[j - 1] !== "{") {
          result.push("NO");
          break;
        }
        word.splice(j - 1, 2);
        j -= 2;
      }

      if (word[j] === "]") {
        if (word[j - 1] !== "[") {
          result.push("NO");
          break;
        }
        word.splice(j - 1, 2);
        j -= 2;
      }

      if (word[j] === ")") {
        if (word[j - 1] !== "(") {
          result.push("NO");
          break;
        }
        word.splice(j - 1, 2);
        j -= 2;
      }
    }

    if (word.length === 0) result.push("YES");
    if (result[i] === undefined) result.push("NO");
  }
  return result;
}

function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const valuesCount = parseInt(readLine(), 10);

  let values = [];

  for (let i = 0; i < valuesCount; i++) {
    const valuesItem = readLine();
    values.push(valuesItem);
  }

  let res = braces(values);

  ws.write(res.join("\n") + "\n");

  ws.end();
}
