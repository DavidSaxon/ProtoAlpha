/*!
 * \file
 * \author David Saxon
 */
#ifndef CHAOSCORE_GFX_VECTOR2_HPP_
#define CHAOSCORE_GFX_VECTOR2_HPP_

#include "chaoscore/base/uni/UTF8String.hpp"

namespace chaos
{
namespace gfx
{

/*!
 * \brief Represents a 2 dimensional vector.
 */
class Vector2
{
public:

    //--------------------------------------------------------------------------
    //                             PUBLIC ATTRIBUTES
    //--------------------------------------------------------------------------

    /*!
     * \brief X access component of this vector.
     */
    float x;
    /*!
     * \brief Y access component of this vector.
     */
    float y;

    //--------------------------------------------------------------------------
    //                                CONSTRUCTORS
    //--------------------------------------------------------------------------

    /*!
     * \brief Default constructor.
     *
     * Creates a new Vector2 with the x and y components initialised as 0.
     */
    Vector2();

    /*!
     * \brief Component constructor.
     *
     * Creates a new Vector2 with the given x any y component values.
     */
    Vector2( float x, float y );

    /*!
     * \brief Scalar constructor.
     *
     * Creates a new Vector2 with both the x and y components initialised to the
     * given scalar.
     */
    Vector2( float scalar );

    /*!
     * \brief Copy constructor.
     *
     * Creates a copy of the given Vector2.
     */
    Vector2( const Vector2& other );

    //--------------------------------------------------------------------------
    //                                 OPERATORS
    //--------------------------------------------------------------------------

    /*!
     * \brief Assignment operator.
     *
     * Assigns the values of this Vector2 to be a copy of the values of the
     * other given Vector2.
     *
     * \param other Vector2 to copy data from.
     * \return A reference to this Vector2 once the assignment has taken place.
     */
    Vector2& operator=( const Vector2& other );

    /*!
     * \brief Equality operator.
     *
     * Compares whether this Vector2 and the other given Vector2 are considered
     * "equal". A comparison of the components of the vector is performed using
     * chaos::math::float_equals using the default values for
     * ```delta_threshold``` and ```ulps_threshold```.
     *
     * \param other Vector2 to compare this vector against.
     * \return Whether the vectors are considered equal.
     */
    bool operator==( const Vector2& other ) const;

    /*!
     * \brief Inequality operator.
     *
     * Compares whether this Vector2 and the other given Vector2 are not
     * considered "equal". See Vector2::operator== for further information.
     *
     * \param other Vector2 to compare this vector against.
     * \return Whether the vectors are not considered equal.
     */
    bool operator!=( const Vector2& other ) const;

    /*!
     * \brief Scalar addition operator.
     *
     * \param scalar The scalar to add to this Vector2.
     * \return A new Vector2 containing the results of the addition.
     */
    Vector2 operator+( float scalar ) const;

    /*!
     * \brief Scalar compound addition operator.
     *
     * \param scalar The scalar to add to this Vector2.
     * \return A reference to this Vector2 once the addition has taken place.
     */
    Vector2& operator+=( float scalar );

    /*!
     * \brief Vector addition operator.
     *
     * \param other The other Vector2 to add to this Vector2.
     * \return A new Vector2 containing the results of the addition.
     */
    Vector2 operator+( const Vector2& other ) const;

    /*!
     * \brief Compound vector addition operator.
     *
     * \param other The other Vector2 to add to this Vector2.
     * \return A reference to this Vector2 once the addition has taken place.
     */
    Vector2& operator+=( const Vector2& other );

    /*!
     * \brief Scalar subtraction operator.
     *
     * \param scalar The scalar to subtract from this Vector2.
     * \return A new Vector2 containing the results of the subtraction.
     */
    Vector2 operator-( float scalar ) const;

    /*!
     * \brief Scalar compound subtraction operator.
     *
     * \param scalar The scalar to subtract from this Vector2.
     * \return A reference to this Vector2 once the subtraction has taken place.
     */
    Vector2& operator-=( float scalar );

    /*!
     * \brief Vector subtraction operator.
     *
     * \param other The other Vector2 to subtract from this Vector2.
     * \return A new Vector2 containing the results of the subtraction.
     */
    Vector2 operator-( const Vector2& other ) const;

    /*!
     * \brief Vector compound subtraction operator.
     *
     * \param other The other Vector2 to subtract from this Vector2.
     * \return A reference to this Vector2 once the subtraction has taken place.
     */
    Vector2& operator-=( const Vector2& other );

    /*!
     * \brief Scalar multiplication operator.
     *
     * \param scalar The scalar to multiply this Vector2 by.
     * \return A new Vector2 containing the results of the multiplication.
     */
    Vector2 operator*( float scalar ) const;

    /*!
     * \brief Scalar compound multiplication operator.
     *
     * \param scalar The scalar to multiply this Vector2 by.
     * \return A reference to this Vector2 once the multiplication has taken
     *         place.
     */
    Vector2& operator*=( float scalar );

    /*!
     * \brief Scalar division operator.
     *
     * \param scalar The scalar to divide this Vector2 by.
     * \return A new Vector2 containing the results of the division.
     */
    Vector2 operator/( float scalar ) const;

    /*!
     * \brief Scalar compound division operator.
     *
     * \param scalar The scalar to divide this Vector2 by.
     * \return A reference to this Vector2 once the division has taken place.
     */
    Vector2& operator/=( float scalar );
};

//------------------------------------------------------------------------------
//                               EXTERNAL OPERATORS
//------------------------------------------------------------------------------

chaos::uni::UTF8String& operator<<(
        chaos::uni::UTF8String& s,
        const Vector2& v );

std::ostream& operator<<( std::ostream& stream, const Vector2& v );

} // namespace gfx
} // namespace chaos

#endif
