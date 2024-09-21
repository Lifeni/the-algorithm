import { readFile } from "node:fs/promises";

const file = await readFile("./Org.txt");
const input = file.toString();
const output = input
  .split(",")
  .map((s) => parseFloat(s))
  .sort((a, b) => b - a);

console.log(output[2]);
