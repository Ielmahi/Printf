 double num = va_arg(args, double);
char buffer[20]; // Adjust the buffer size accordingly
int chars_written = snprintf(buffer, sizeof(buffer), "%f", num);
    length_string += chars_written;