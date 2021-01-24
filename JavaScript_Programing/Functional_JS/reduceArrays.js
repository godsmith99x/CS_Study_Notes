// Example of reduce function in use

const grades = [81, 92, 67, 76, 88, 91, 80, 77];

const total = grades.reduce(function (acc, num) {
	return acc + num;
});

console.log(total);

const average = total / grades.length;

console.log(average);

function groupByGrade(acc, grade) {

}

const letterGradeCount = grades.reduce(groupByGrade, {});