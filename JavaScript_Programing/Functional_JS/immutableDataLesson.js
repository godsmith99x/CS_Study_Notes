const meal = {
	description: 'Dinner',
};
// 1. In an Immutable way, add a property to the
// meal called calories setting it's value to 200,
// then log the result to the console

const updatedMeal = {
	...meal,
	calories: 200
};

console.log(updatedMeal);


// 2. In an Immutable way, increase the calories
// by 100 and print the result to the console

const updatedMeal2 = {
	...updatedMeal,
	calories: 100
};

console.log(updatedMeal2);


// 3. In an Immutable way, remove the calories property and log the result to the console

const {calories, ...updatedMeal3} = updatedMeal2;

console.log(updatedMeal3);

// See solution at: https://jsbin.com/sunewil/edit?js,console