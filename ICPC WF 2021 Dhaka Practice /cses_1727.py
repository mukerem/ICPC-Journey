def analyze_partition(partition, bins):
    last = partition[0]
    counts = [1]
    for part in partition[1:]:
        if part != last:
            last = part
            counts += [1]
        else:
            counts[-1] += 1
    counts.append(bins - sum(counts))
    return multinomial(*partition) * multinomial(*counts)

def expected_max(balls, bins):
    return sum([max(partition) * analyze_partition(partition, bins)
                for partition in partitions(balls)
                if len(partition) <= bins])/bins^balls
print(expected_max(3, 2))
