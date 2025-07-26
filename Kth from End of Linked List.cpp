 int getKthFromLast(Node *head, int k) {
        // Your code here
        Node* tra=head;
        int cnt=0;
        while(tra){
            tra=tra->next;
            cnt++;
        }
        if(cnt<k) return -1;
        cnt=cnt-k;
        tra=head;
        for(int i=0;i<cnt;i++){
            tra=tra->next;
        }
        return tra->data;
    }
