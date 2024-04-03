#include <iostream>
using namespace std;

class TrieNode
{

public:
  char data;
  TrieNode *children[26];
  bool isTerminal;

  TrieNode(char ch)
  {

    data = ch;
    for (int i = 0; i < 26; i++)
    {
      children[i] = NULL;
    }
    isTerminal = false;
  }
};

class Trie
{

public:
  TrieNode *root;
  void insertUtil(TrieNode *root, string word)
  {
    // base case
    if (word.length() == 0)
    {
      root->isTerminal = true;
    }

    int index = word[0] - 'A';
    TrieNode *child;

    // Present wala case
    if (root->children[index] != NULL)
    {
      child = root->children[index];
    }
    // Absent wala case
    else
    {
      child = new TrieNode(word[0]);
      root->children[index] = child;
    }

    // Recursion use karege dubara karne ke liye

    insertUtil(child, word.substr(1));
  }
  void insert(string word)
  {
    insertUtil(root, word);
  }
};

int main()
{

  Trie t;

  return 0;
}