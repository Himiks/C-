#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

class TreeNode {
public:
    int value;
    std::vector<TreeNode*> children;

    TreeNode(int val) : value(val) {}
};

void parseInput(std::istream& input, std::unordered_map<int, TreeNode*>& nodes) {
    std::string line;
    while (std::getline(input, line)) {
        if (line == "0") break;

        std::istringstream iss(line);
        int parent, child;
        iss >> parent;
        if (nodes.find(parent) == nodes.end()) {
            nodes[parent] = new TreeNode(parent);
        }
        while (iss >> child) {
            if (nodes.find(child) == nodes.end()) {
                nodes[child] = new TreeNode(child);
            }
            nodes[parent]->children.push_back(nodes[child]);
        }
    }
}

TreeNode* findRoot(const std::unordered_map<int, TreeNode*>& nodes) {
    std::set<int> allChildren;
    for (const auto& pair : nodes) {
        for (TreeNode* child : pair.second->children) {
            allChildren.insert(child->value);
        }
    }
    for (const auto& pair : nodes) {
        if (allChildren.find(pair.first) == allChildren.end()) {
            return pair.second;
        }
    }
    return nullptr;
}

void preorderTraversal(TreeNode* node, std::vector<TreeNode*>& result) {
    if (!node) return;
    result.push_back(node);
    for (TreeNode* child : node->children) {
        preorderTraversal(child, result);
    }
}

void mirrorTree(TreeNode* node) {
    if (!node) return;
    std::reverse(node->children.begin(), node->children.end());
    for (TreeNode* child : node->children) {
        mirrorTree(child);
    }
}

void formatOutput(const std::vector<TreeNode*>& nodes, std::ostream& output) {
    for (TreeNode* node : nodes) {
        if (!node->children.empty()) {
            output << node->value;
            for (TreeNode* child : node->children) {
                output << " " << child->value;
            }
            output << "\n";
        }
    }
    output << "0\n";
}

int main() {
    std::ifstream inputFile("alice.in");
    std::ofstream outputFile("alice.out");

    std::unordered_map<int, TreeNode*> nodes;
    parseInput(inputFile, nodes);
    inputFile.close();

    TreeNode* root = findRoot(nodes);
    if (!root) {
        outputFile << "0\n";
        outputFile.close();
        return 0;
    }

    std::vector<TreeNode*> result;
    preorderTraversal(root, result);
    mirrorTree(root);

    std::vector<TreeNode*> mirroredResult;
    preorderTraversal(root, mirroredResult);
    formatOutput(mirroredResult, outputFile);
    outputFile.close();

    // Clean up dynamically allocated memory
    for (auto& pair : nodes) {
        delete pair.second;
    }

    return 0;
}
