//use map function to update an item in an immutable array
const meals = [
    {id: 1, description: 'Breakfast', calories: 420},
    {id: 2, description: 'Lunch', calories: 520},
];

const newMeal = {
    id: 3,
    description: 'Snack',
    calories: 180,
};

//... before meals means copy all the data from meals into new object literal with newMeal info as well
const updatedMeals = [...meals, newMeal];

console.log(meals, updatedMeals);

//creates a new object literal, called updatedMealsDescription, by iterating over each index in the updatedMeals array and running the updateDescription function at each point
const updatedMealsDescription = updatedMeals.map(updateDescription);


//looks at the id of the object literal in the array at each index of a matrix, and if the id is 2, it updates the description and copies it into a new array, called updatedMealsDescription, otherwise it just copies the full object literal, unchanged, into the new array
function updateDescription (meal) {
    if (meal.id === 2) {
        return {
            ...meal,
            description: 'Early Lunch',
        };
    }
    return meal;
}

console.log(updatedMealsDescription);

//uses filter function on an array to remove an item
//within the filter function, we are calling an anonymous function to return true if we want the item included in the new array, called filtered meals, and false if we don't. we are filtering out id = 1
const filteredMeals = updatedMeals.filter(function(meal){
    return meal.id !== 1;
});

console.log(filteredMeals);