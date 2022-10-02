


class SmallestInfiniteSet {
public:
    set<int>pq;
    int cur;
    SmallestInfiniteSet()
    {
        cur=1;
    }
    
    int popSmallest() 
    {
        if (!pq.empty())
        {
            int res=*(pq.begin());
            pq.erase(pq.begin());
            return res;
        }
        return cur++;
    }
    
    void addBack(int num) {
        if (num<cur) pq.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
