
定義:
1. General tree  
    每個節點沒有子節點限制，也不要求如何排序。
2. Binary tree  
   每個節點都只能最多有兩子節點，也不要求如何排序。
3. Complete binary tree  
  在Binary tree的規則上再加上，每層必須從左至右依序填入，滿了才能去下一層。
4. Binary search tree (BST)  
  在Binary tree的規則上再加上，每個節點的左子樹必須全部小於該節點，它的右子樹必須全部大於該節點。
5. AVL tree  
  在Binary search tree的規則上再加上，每個節點的左右子樹的高度差必須在+-1內。如果插入或刪除時則需要將其中一個節點視為根重新排序，並且要符合AVL tree的規則。
6. Red-Black tree  
  在Binary search tree的規則上再加上，每個節點為黑色或紅色且根與葉為黑色。同時紅色節點不能有紅色子節點，並且所有路徑上的黑色子節點數量要相同。
7. Max heap  
  在Complete binary tree的規則上再加上，大小必須由上(最大)至下(最小)排序，如果該節點不符合則會一格一格往上爬。
8. Min heap  
  在Complete binary tree的規則上再加上，大小必須由上(最小)至下(最大)排序，如果該節點不符合則會一格一格往上爬。
建構
1. General tree  
https://app.smartdraw.com/editor.aspx?templateId=01bcab48-4f0b-41cb-956d-089e2ef871e4&flags=128#credID=-87527221&depoId=71775251
   <img width="644" height="509" alt="image" src="https://github.com/user-attachments/assets/bde01308-c362-4d98-b36a-b31b296cc20a" />

3. Binary tree  
https://tree-visualizer.netlify.app/
<img width="1560" height="792" alt="image" src="https://github.com/user-attachments/assets/c3e6c6a3-2ef5-405d-8d6a-7fbf8f8e35c5" />

4. Complete binary tree  
https://tree-visualizer.netlify.app/
<img width="1683" height="586" alt="image" src="https://github.com/user-attachments/assets/c3f37dd7-98b7-4879-b5a1-58e1c09875f5" />

5. Binary search tree (BST)  
https://www.cs.usfca.edu/~galles/visualization/BST.html
<img width="735" height="478" alt="image" src="https://github.com/user-attachments/assets/07af9996-2ac4-43e7-bcc7-c27965c12f9c" />

6. AVL tree  
https://www.cs.usfca.edu/~galles/visualization/AVLtree.html
<img width="874" height="443" alt="image" src="https://github.com/user-attachments/assets/bb61ca52-82d3-4d32-bf3a-b10439f4be7a" />

7. Red-Black tree  
https://www.cs.usfca.edu/~galles/visualization/RedBlack.html
<img width="900" height="400" alt="image" src="https://github.com/user-attachments/assets/246d0c3c-b471-47c9-9379-d00d82d8a84d" />

8. Max heap  
  https://sercankulcu.github.io/files/data_structures/slides/Bolum_08_Heap.html
  <img width="900" height="400" alt="image" src="https://github.com/user-attachments/assets/092f842a-bc45-4f37-9ad4-a73f6b096ea2" />

9. Min heap  
  https://www.cs.usfca.edu/~galles/visualization/Heap.html
  <img width="900" height="400" alt="image" src="https://github.com/user-attachments/assets/f00a7ef4-9ed6-4e4a-bb26-b6d67b612f47" />
