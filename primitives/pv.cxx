/**
 * @file pv.h
 * @brief Wrapper class for points and vectors
 * @date 2022-10-26
 *
 */

module;

#include <opencv2/core/matx.hpp>

export module primitives:PV;

export namespace primitives {
    using Point = cv::Vec4d;
    using Vector = cv::Vec4d;

    Point makePoint(double x, double y, double z) {
        return cv::Vec4d(x, y, z, 1.0);
    }

    Vector makeVector(double x, double y, double z) {
        return cv::Vec4d(x, y, z, 0.0);
    }
}
