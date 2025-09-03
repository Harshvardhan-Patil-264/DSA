int countWords(string str) {
    string word;
    stringstream ss(str);  // break string into words
    int count = 0;

    while (ss >> word)     // extract each word into `word`
        count++;           // increment count

    return count;
}
