
const grade1 = 50.0  Math.random() * 50.0;
const grade2 = 50.0  Math.random() * 50.0;
const grade3 = 50.0  Math.random() * 50.0;

console.log(grade1, letterGrade(grade1));

function letterGrade(grade) {
    if (grade >= 90) {
        return 'A';
    } else if (grade >= 80) {
        return 'B';
    } else if (grade >= 70) {
        return 'C';
    } else if (grade >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}