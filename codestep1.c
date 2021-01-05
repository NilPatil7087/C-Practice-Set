void message1() {
    printf("This is message1.\n");
}

void message2() {
    printf("This is message2.\n");
    message1();
    printf("Done with message2.\n");
}

int main() {
    message1();
    message2();
    printf("Done with main.\n");
    return 0;
}
