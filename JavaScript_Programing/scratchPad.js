//find sum of all the items in the array

const grades = [60, 55, 80, 90, 99, 92, 75, 72];

//pure function that takes two arguments and returns their sum
function sum (acc, grade) {
    return acc + grade;
}

//uses reduce to map over the numbers array and sum function is passed in as argument
//therefore sum function takes in first two items of the array, which are 60 & 55, and sums them to 115, which is returned
//the returned value of 115 becomes the acc and the next element in the array becomes the grade in the next round of the sum function
//the acc argument in this type of function is often called the accumulator, hence the choice in variable name
const total = grades.reduce(sum);

//gives the number of elements in the grades array by counting its length
const count = grades.length;

//we can pass in an initial value of the acc by giving the groupByGrade an argument when we call it, and it doesn't have to be a number
//we are going to pass an empty object literal ({}) as a second argument which reduce function will begin to fill with grades
function groupByGrade (acc, grade) {
    //destructure acc values into an object we can use to count the number of each letter grade and initialize it so that we never have to deal with a null
    const {a = 0, b = 0, c = 0, d = 0, f = 0} = acc;
    if (grade >= 90) {
        //returns an object with the value of the accumulator spread into it and increments the number of A's if any
        return { ...acc, a: a + 1};
    } else if (grade >= 80) {
        return { ...acc, b: b + 1};
    } else if (grade >= 70) {
        return { ...acc, c: c + 1};
    } else if (grade >= 60) {
        return { ...acc, d: d + 1};
    } else {
        return { ...acc, f: f + 1};
    }
}

//maps over the grades array and runs the groupByGrade function
//passes an empty object literal as the second argument
const letterGradeCount = grades.reduce(groupByGrade, {});

console.log(total, count, total/count, letterGradeCount);