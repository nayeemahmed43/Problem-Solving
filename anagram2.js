function sortString(string) {
    return string.replace(/[^\w]/g,'').toLowerCase().split('').sort().join('');
}
function anagram2(str1,str2) {
    return sortString(str1) === sortString(str2);
}

console.log(anagram2('The eyes','They see'));