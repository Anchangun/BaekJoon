def main():
    mapping = {
        'NLCS': 'North London Collegiate School',
        'BHA': 'Branksome Hall Asia',
        'KIS': 'Korea International School',
        'SJA': 'St. Johnsbury Academy'
    }

    abbr = input().strip()
    print(mapping[abbr])


if __name__ == "__main__":
    main()
