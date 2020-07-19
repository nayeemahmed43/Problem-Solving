
function repeatChar(str) {
    str = str.toLowerCase()
    for(let char of str) {
        if(str.indexOf(char) !== str.lastIndexOf(char)) {
            return true;
        }
    }
    return false;
}
console.log(repeatChar('aA')); //"true"