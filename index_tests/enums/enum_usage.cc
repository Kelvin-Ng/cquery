enum class Foo {
  A,
  B = 20
};

Foo x = Foo::A;

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 16985894625255407295,
      "detailed_name": "Foo",
      "short_name": "Foo",
      "kind": 5,
      "spell": "1:12-1:15|-1|1|2",
      "extent": "1:1-4:2|-1|1|0",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [0, 1],
      "instances": [2],
      "uses": ["6:1-6:4|-1|1|4", "6:9-6:12|-1|1|4"]
    }],
  "funcs": [],
  "vars": [{
      "id": 0,
      "usr": 439339022761937396,
      "detailed_name": "Foo::A",
      "short_name": "A",
      "hover": "Foo::A = 0",
      "declarations": [],
      "spell": "2:3-2:4|0|2|2",
      "extent": "2:3-2:4|0|2|2",
      "variable_type": 0,
      "uses": ["6:14-6:15|-1|1|4"],
      "parent_id": 0,
      "parent_kind": 2,
      "kind": 15,
      "storage": 0
    }, {
      "id": 1,
      "usr": 15962370213938840720,
      "detailed_name": "Foo::B",
      "short_name": "B",
      "hover": "Foo::B = 20",
      "declarations": [],
      "spell": "3:3-3:4|0|2|2",
      "extent": "3:3-3:9|0|2|2",
      "variable_type": 0,
      "uses": [],
      "parent_id": 0,
      "parent_kind": 2,
      "kind": 15,
      "storage": 0
    }, {
      "id": 2,
      "usr": 10677751717622394455,
      "detailed_name": "Foo x",
      "short_name": "x",
      "hover": "Foo x = Foo::A",
      "declarations": [],
      "spell": "6:5-6:6|-1|1|2",
      "extent": "6:1-6:15|-1|1|0",
      "variable_type": 0,
      "uses": [],
      "parent_kind": 0,
      "kind": 13,
      "storage": 1
    }]
}
*/
