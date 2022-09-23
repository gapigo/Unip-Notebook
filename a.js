CONCATENATE(
    IF(
        SEARCH(", 1,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 1), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 2,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 2), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 3,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 3), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 4,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 4), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 5,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 5), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 6,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 6), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 7,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 7), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 8,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 8), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 9,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 9), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 10,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 10), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 11,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 11), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 12,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 12), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 13,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 13), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 14,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 14), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 15,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 15), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 16,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 16), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 17,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 17), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 18,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 18), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 19,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 19), "DD/MM/YYYY, "),
        ""
    ),
    IF(
        SEARCH(", 20,", CONCATENATE(", ", {Lista suspensa}, ",")) > 0,
        FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 20), "DD/MM/YYYY, "),
        ""
    )
)


WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 1)

DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 1), TODAY())



IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 1), TODAY()) > 0, SEARCH(", 1,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 1), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 2), TODAY()) > 0, SEARCH(", 2,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 2), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 3), TODAY()) > 0, SEARCH(", 3,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 3), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 4), TODAY()) > 0, SEARCH(", 4,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 4), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 5), TODAY()) > 0, SEARCH(", 5,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 5), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 6), TODAY()) > 0, SEARCH(", 6,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 6), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 7), TODAY()) > 0, SEARCH(", 7,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 7), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 8), TODAY()) > 0, SEARCH(", 8,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 8), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 9), TODAY()) > 0, SEARCH(", 9,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 9), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 10), TODAY()) > 0, SEARCH(", 10,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 10), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 11), TODAY()) > 0, SEARCH(", 11,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 11), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 12), TODAY()) > 0, SEARCH(", 12,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 12), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 13), TODAY()) > 0, SEARCH(", 13,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 13), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 14), TODAY()) > 0, SEARCH(", 14,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 14), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 15), TODAY()) > 0, SEARCH(", 15,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 15), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 16), TODAY()) > 0, SEARCH(", 16,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 16), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 17), TODAY()) > 0, SEARCH(", 17,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 17), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 18), TODAY()) > 0, SEARCH(", 18,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 18), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 19), TODAY()) > 0, SEARCH(", 19,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 19), "DD/MM/YYYY"),
IF(
    AND(DAYS(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 20), TODAY()) > 0, SEARCH(", 20,", CONCATENATE(", ", {Dias úteis do mês Lista}, ",")) > 0),
    FORMAT_DATE(WORKDAY(DATE(YEAR(TODAY()), MONTH(TODAY()),1), 20), "DD/MM/YYYY"),
    ""
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)
)