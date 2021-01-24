// Example of reduce function in use

const numbers = [1, 2, 3, 4, 5, 6, 7];

const total = numbers.reduce(function (acc, num) {
	return acc + num;
});

console.log(total);

const average = total / numbers.length;

console.log(average);