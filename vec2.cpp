int main()
{
    vector<int> myVec;
    for(int i;i<=100;i++){
        myVec.push_back(i);
    } 
    for(int i:myVec)
    cout<<i<<endl;

    return 0;
}
