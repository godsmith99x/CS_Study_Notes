//replace function that takes two arguments with function that only needs one argument and applies to array
//function that takes two arguments and uses those arguments to returns them using template literal syntax (` `) and string interpolation ${placeholder}
/*function greet(greeting, name) {
    return `${greeting} ${name}`;
} */

//console.log(greet('Good morning', 'James'));

//apply greeting to array of friends

//this function is an example of a closure
function greet(greeting) {
    return function (name) {
        return `${greeting} ${name}`;
    };
}

const friends = ['Nate', 'Jim', 'Scott', 'Dean'];

//calls greet with a greeting argument, which is mapped across the friends array
const friendGreetings = friends.map(greet('Good Morning'));

console.log(friendGreetings);