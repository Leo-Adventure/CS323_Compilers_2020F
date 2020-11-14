//
// Created by nanos on 2020/10/7.
//

#ifndef CS323_COMPLIERS_PROJECT1_TEST_YYERROR_MYSELF_HPP
#define CS323_COMPLIERS_PROJECT1_TEST_YYERROR_MYSELF_HPP

#include <string>
#include <unordered_map>

enum class YYERROR_TYPE {
    LACK_OF_RC, LACK_OF_RB, LACK_OF_RP,
    LACK_OF_LC, LACK_OF_LB, LACK_OF_LP,
    MISS_SPEC, MISS_SEMI, MISS_COMMA
};

void yyerror_myself(YYERROR_TYPE type);

#endif //CS323_COMPLIERS_PROJECT1_TEST_YYERROR_MYSELF_HPP
