///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10b_animal_farm - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   25_Apr_2022
///////////////////////////////////////////////////////////////////////////////


class Node {
public:
    virtual void dump() const;
    virtual bool validate() const noexcept;
    virtual bool operator>( const Node &rightSide );

protected:
    static bool compareByAddress( const Node *node1, const Node *node2 );

    Node* next = nullptr;
};


