def check_scale(arr):
    if arr == sorted(arr):
        return "ascending"
    elif arr == sorted(arr, reverse=True):
        return "descending"
    else:
        return "mixed"

def main():
    arr = list(map(int, input().split()))
    result = check_scale(arr)
    print(result)

if __name__ == "__main__":
    main()