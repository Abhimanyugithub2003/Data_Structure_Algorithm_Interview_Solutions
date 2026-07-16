1class StockSpanner {
2public:
3    stack<pair<int,int>> st;
4    StockSpanner() {
5        
6    }
7    
8    int next(int price) {
9        int spam=1;
10        while(!st.empty() && st.top().first<=price){
11            spam+=st.top().second;
12            st.pop();
13        }
14        st.push({price, spam});
15        return spam;
16    }
17};
18
19/**
20 * Your StockSpanner object will be instantiated and called as such:
21 * StockSpanner* obj = new StockSpanner();
22 * int param_1 = obj->next(price);
23 */