struct Foo {
  void Used();
};

void user() {
  auto x = &Foo::Used;
}


/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 15041163540773201510,
      "detailed_name": "Foo",
      "short_name": "Foo",
      "kind": 6,
      "spell": "1:8-1:11|-1|1|2",
      "extent": "1:1-3:2|-1|1|0",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [0],
      "vars": [],
      "instances": [],
      "uses": ["6:13-6:16|-1|1|4"]
    }],
  "funcs": [{
      "id": 0,
      "usr": 18417145003926999463,
      "detailed_name": "void Foo::Used()",
      "short_name": "Used",
      "kind": 16,
      "storage": 1,
      "declarations": [{
          "spelling": "2:8-2:12",
          "extent": "2:3-2:14",
          "content": "void Used()",
          "param_spellings": []
        }],
      "declaring_type": 0,
      "base": [],
      "derived": [],
      "locals": [],
      "uses": ["6:18-6:22|1|3|64"],
      "callees": []
    }, {
      "id": 1,
      "usr": 9376923949268137283,
      "detailed_name": "void user()",
      "short_name": "user",
      "kind": 12,
      "storage": 1,
      "declarations": [],
      "spell": "5:6-5:10",
      "extent": "5:1-7:2",
      "base": [],
      "derived": [],
      "locals": [],
      "uses": [],
      "callees": ["6:18-6:22|0|3|64", "6:18-6:22|0|3|64"]
    }],
  "vars": [{
      "id": 0,
      "usr": 8436636043513449412,
      "detailed_name": "void (Foo::*)() x",
      "short_name": "x",
      "declarations": [],
      "spell": "6:8-6:9|1|3|2",
      "extent": "6:3-6:22|1|3|2",
      "uses": [],
      "parent_id": 1,
      "parent_kind": 3,
      "kind": 13,
      "storage": 1
    }]
}
*/
