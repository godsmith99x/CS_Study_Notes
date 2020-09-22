
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