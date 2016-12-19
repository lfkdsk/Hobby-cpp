//
// Created by 刘丰恺 on 2016/12/19.
//

#ifndef HOBBY_UTILS_HPP
#define HOBBY_UTILS_HPP

#include <sstream>

template<typename TSrc>
std::string ToStr(TSrc src) {
    std::stringstream ss;
    ss << src;
    return ss.str();
}

// variadic template version
template<typename TSrc, typename ... TRest>
std::string ToStr(TSrc src, TRest &&... rest) {
    std::string r = ToStr(src);
    r += ToStr(std::forward<TRest>(rest)...);
    return r;
}

#endif //HOBBY_UTILS_HPP
