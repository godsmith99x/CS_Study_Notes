// Example of reduce function in use

const grades = [81, 92, 67, 76, 88, 91, 80, 77, 59];

const total = grades.reduce(function (acc, num) {
	return acc + num;
});


const count = grades.length;


function groupByGrade(acc, grade) {
	//destructure letter grade items into acc object with initial value of 0 for each
	const {A = 0, B = 0, C = 0, D = 0, F = 0} = acc;
	if (grade >= 90) {
		return {...acc, A: A + 1}; // if a grade is > 90, it will add 1 to the count for the letter grade A
	} else if (grade >= 80) {
		return {...acc, B: B + 1};
	} else if (grade >= 70) {
		return {...acc, C: C + 1};
	} else if (grade >= 60) {
		return {...acc, D: D + 1};
	} else {
		return {...acc, F: F + 1};
	}
}

const letterGradeCount = grades.reduce(groupByGrade, {});

console.log(count, total, letterGradeCount);