
void backwards(std::vector<int>& vec){
    reverse(vec.begin(), vec.end());
}

int smallest(const std::vector<int>& vec){
    return *min_element(vec.begin(), vec.end());
}

int sum(const std::vector<int>& vec){
    return accumulate(vec.begin(), vec.end(), 0);
}

int veryOdd(const std::vector<int>& suchVector){
    int c = 0;
    for(int i=1; i<suchVector.size(); i+=2)if(suchVector[i]%2)c++;
    return c;
}
