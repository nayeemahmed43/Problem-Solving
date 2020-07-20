function capitalization(string) {
    string = string.toLowerCase();
    const words = [];
    for(let word of string.split(' ')) {
        words.push(word[0].toUpperCase() + word.slice(1));
    }
    return words.join(' ');
}

console.log(capitalization('helLo world')); //Hello World