//use spread syntax to update an immutable array
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

