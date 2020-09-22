//remove data when copying to new object literal with spread operator
const meal = {
    id: 1,
    description: 'Breakfast',
};

const updateMeal = {
    //... before name means to inject data into new item but if any of the fields match, those in the new item take precedence 
    ...meal,
    //injects a calories field in meal object literal
    calories: 600,
    //takes all data from meal object literal but uses this description instead
    description: 'Brunch',
};

console.log(meal, updateMeal);

//this is a verbose way to just get the two fields we want but more elegant to use destructuring
//const description = updateMeal.description;
//const calories = updateMeal.calories;

//example of destructuring
const {description, calories} = updateMeal;

console.log(description, calories);

//destructuring with rest(...) syntax
//creates a new object literal with all data from updateMeal without the id field
const {id, ...mealWithoutId} = updateMeal;

console.log(mealWithoutId);