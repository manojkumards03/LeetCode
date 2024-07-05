bool isValid(char* s) {
    int len = strlen(s);
    if (len == 0) 
        return true;
    if (s[0] == ')' || s[0] == '}' || s[0] == ']') 
        return false;

    int* stack = (int*)malloc(len * sizeof(int));
    int top = -1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } 
        else if (top >= 0 && ((s[i] == ')' && stack[top] == '(') || (s[i] == '}' && stack[top] == '{') || (s[i] == ']' && stack[top] == '['))) {
            top--;
        } 
        else {
            free(stack);
            return false;
        }
    }

    bool result = (top == -1);
    free(stack);
    return result;
}