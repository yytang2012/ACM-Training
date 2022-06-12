def main():
    try:
        while True:
            a, b = map(int, input().split())
            print(a + b)
    except EOFError:
        pass


if __name__ == "__main__":
    main()
