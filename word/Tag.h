//
// Created by 刘丰恺 on 16/6/5.
//

#ifndef HOBBY_TAG_H
#define HOBBY_TAG_H

/*
 * Tag标示符对应的数字编码
 * 255+的编码值防止出现奇怪的问题
 */
#include <string>

enum Tag {
    AND = 256,
    BASIC = 257,
    BREAK = 258,
    DO = 259,
    ELSE = 260,
    EQ = 261,
    FALSE = 262,
    GE = 263,
    ID = 264,
    IF = 265,
    INDEX = 266,
    LE = 267,
    MINUS = 268,
    NE = 269,
    NUM = 270,
    OR = 271,
    REAL = 272,
    TEMP = 273,
    TRUE = 274,
    WHILE = 275,
    CHAR = 276,
    DOUBLE = 277
};

enum NodeType {

};

typedef std::string TYPE_STRING;

///////////////////////////////////////////////////////////////////////////
// Token
///////////////////////////////////////////////////////////////////////////

const TYPE_STRING IF_TOKEN = "if";
const TYPE_STRING TRUE_TOKEN = "true";
const TYPE_STRING ELSE_TOKEN = "else";
const TYPE_STRING FALSE_TOKEN = "false";
const TYPE_STRING DO_TOKEN = "do";
const TYPE_STRING BREAK_TOKEN = "break";
const TYPE_STRING WHILE_TOKEN = "while";
const TYPE_STRING INT_TOKEN = "int";
const TYPE_STRING FLOAT_TOKEN = "float";
const TYPE_STRING CHAR_TOKEN = "char";
const TYPE_STRING DOUBLE_TOKEN = "double";
const TYPE_STRING BOOL_TOKEN = "bool";


#endif //HOBBY_TAG_H
