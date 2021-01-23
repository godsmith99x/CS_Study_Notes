// 1. create a constant named friends,
// which is an array that contains 2
// names of your choosing.

const friends = ["Amanda", "Jeffrey"];
console.log(friends);

// 2. Create a new constant named updatedFriends,
// which includes the friends array values plus
// one additional name

const updatedFriends = [...friends, "Nathan"];
console.log(updatedFriends);

// 3. Create a new constant named friendNameLengths,
// which is based on the array updatedFriends,
// but instead of having the friends names,
// have the array store the length of each persons name.

//mapped over updatedFriends array and used unnamed function to find length of each string
const friendNameLengths = updatedFriends.map(function (str) {
	return str.length
});
console.log(friendNameLengths);

// 4. Create a new constant named shorterNamedFriends,
// which will be a list of the friends except the friend with the longest name.


// 5. Print each variable to the console.

// Solution can be seen at:
// https://jsbin.com/nevonet/1/edit?js,console