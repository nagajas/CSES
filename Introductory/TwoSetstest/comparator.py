def compare_files(file1_path, file2_path):
    with open(file1_path, 'r') as file1:
        content1 = file1.read()
    with open(file2_path, 'r') as file2:
        content2 = file2.read()

    words1 = content1.split()
    words2 = content2.split()

    if words1 == words2:
        print("Files match.")
    else:
        print("Files do not match.")

# Example usage
file1_path = 'test_output.txt'
file2_path = 'out.txt'

compare_files(file1_path, file2_path)
