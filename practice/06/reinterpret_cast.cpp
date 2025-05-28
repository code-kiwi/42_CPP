int main(void) {
    float a = 42.24;

    void *b = &a; // Implicit promotion (OK)
    int *c = reinterpret_cast<int *>(b);
    int& d = reinterpret_cast<int &>(b);

    return 0;
}

/*
    NOTES:
    - most permissive type of cast, USE WITH CAUTION
    - useful, for example, when we receive bytes of data and we do not know how to interpret them.
    Then, we cast them into the appropriate type.
*/