function capitalization2(string) {
    string = string.toLowerCase();
    let result = string[0].toUpperCase();
    for(let i=1; i<string.length; i++) {   //i=1 because first char already capitalized
        if(string[i-1] === ' ') {         //space in left of the character
            result += string[i].toUpperCase(); 
        }else {
            result += string[i];
        }
    }
    return result;
}
console.log(capitalization2('helLo world'));