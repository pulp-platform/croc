import random

def generate_test_vectors(filename, num_vectors=100):
  with open(filename, 'w') as f:
    for _ in range(num_vectors):
      a = random.randint(0, 255)  # 8-bit value
      b = random.randint(0, 255)  # 8-bit value
      
      binary_string = f"{a:08b}{b:08b}"
      f.write(binary_string + "\n")

if __name__ == "__main__":
  generate_test_vectors("stimuli.txt", 32)
