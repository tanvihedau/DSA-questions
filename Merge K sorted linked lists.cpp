class Solution {
public:
    Node* mergeKLists(vector<Node*>& lists) {
        if (lists.empty()) return nullptr;
        while (lists.size() > 1) {
            vector<Node*> temp;
            for (int i = 0; i < lists.size(); i += 2)
                temp.push_back(merge(lists[i], i + 1 < lists.size() ? lists[i + 1] : nullptr));
            lists = temp;
        }
        return lists[0];
    }

    Node* merge(Node* a, Node* b) {
        if (!a || !b) return a ? a : b;
        if (a->data > b->data) swap(a, b);
        a->next = merge(a->next, b);
        return a;
    }
};
