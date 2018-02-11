struct ForwardType;
struct ImplementedType {};

void Foo() {
  ForwardType* a;
  ImplementedType b;
}

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 13749354388332789217,
      "detailed_name": "ForwardType",
      "short_name": "ForwardType",
      "kind": 0,
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [0],
      "uses": ["1:8-1:19|-1|1|4", "5:3-5:14|-1|1|4"]
    }, {
      "id": 1,
      "usr": 8508299082070213750,
      "detailed_name": "ImplementedType",
      "short_name": "ImplementedType",
      "kind": 6,
      "spell": "2:8-2:23|-1|1|2",
      "extent": "2:1-2:26|-1|1|0",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [1],
      "uses": ["6:3-6:18|-1|1|4"]
    }],
  "funcs": [{
      "id": 0,
      "usr": 4654328188330986029,
      "detailed_name": "void Foo()",
      "short_name": "Foo",
      "kind": 12,
      "storage": 1,
      "declarations": [],
      "spell": "4:6-4:9",
      "extent": "4:1-7:2",
      "base": [],
      "derived": [],
      "locals": [],
      "uses": [],
      "callees": []
    }],
  "vars": [{
      "id": 0,
      "usr": 11033478034711123650,
      "detailed_name": "ForwardType *a",
      "short_name": "a",
      "declarations": [],
      "spell": "5:16-5:17|0|3|2",
      "extent": "5:3-5:17|0|3|2",
      "variable_type": 0,
      "uses": [],
      "parent_id": 0,
      "parent_kind": 3,
      "kind": 13,
      "storage": 1
    }, {
      "id": 1,
      "usr": 8949902309768550158,
      "detailed_name": "ImplementedType b",
      "short_name": "b",
      "declarations": [],
      "spell": "6:19-6:20|0|3|2",
      "extent": "6:3-6:20|0|3|2",
      "variable_type": 1,
      "uses": [],
      "parent_id": 0,
      "parent_kind": 3,
      "kind": 13,
      "storage": 1
    }]
}
*/
