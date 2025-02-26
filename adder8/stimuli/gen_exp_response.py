def compute_expected_results(input_filename, output_filename):
  with open(input_filename, 'r') as infile, open(output_filename, 'w') as outfile:
    for line in infile:
      # Read a and b from the file
      a = int(line[:8], 2)
      b = int(line[8:16], 2)
      # Calculate the correct results
      result = a + b
      # Write into sum and carry out
      sum_bin = f"{result & 0xFF:08b}"
      cout_bin = f"{(result >> 8) & 1:01b}"
      # Write to the file
      outfile.write(sum_bin + cout_bin + "\n")

if __name__ == "__main__":
  compute_expected_results("stimuli.txt", "expected_response.txt")
  