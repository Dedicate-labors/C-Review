class Solution {
    
    private Node root = new Node();
    public List<String> removeSubfolders(String[] folder) {
         List<String> list = new ArrayList<>();
        //构建字典树
        for (String url:folder
             ) {
            insert(url);
        }
//        验证url
        DFS(list,root,"");
        return list;
    }
    
    private void DFS(List<String> list, Node root,String url) {
        if (root == null){
            return;
        }
        if (root.isURL){
            list.add(url);
            return;
        }
        HashMap<String,Node> hashMap = root.map;
        for (Map.Entry<String,Node> entity:hashMap.entrySet()
             ) {
            DFS(list,entity.getValue(),url+"/"+entity.getKey());
        }

    }

    private void insert(String url){
        String [] urls = url.split("/");
        Node node = this.root;
        HashMap<String,Node> currentMap = node.map;
        Node endNode = null;
        for (String e:urls
             ) {
            if (e == null || e.length() == 0){
                continue;
            }
            if (!currentMap.containsKey(e)){
                Node n = new Node();
                n.data = e;
                currentMap.put(e,n);
            }
            endNode = currentMap.get(e);
            if (endNode.isURL){
                return;
            }
            currentMap = endNode.map;

        }
        endNode.isURL = true;
    }
    class Node{
        String data;
        boolean isURL;
        HashMap<String,Node> map;

        public Node() {
            map = new HashMap<>();
            this.isURL = false;
        }
    }
}