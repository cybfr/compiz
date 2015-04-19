/*
 * Copyright © 2011 Canonical Ltd.
 *
 * Permission to use, copy, modify, distribute, and sell this software
 * and its documentation for any purpose is hereby granted without
 * fee, provided that the above copyright notice appear in all copies
 * and that both that copyright notice and this permission notice
 * appear in supporting documentation, and that the name of
 * Canonical Ltd. not be used in advertising or publicity pertaining to
 * distribution of the software without specific, written prior permission.
 * Canonical Ltd. makes no representations about the suitability of this
 * software for any purpose. It is provided "as is" without express or
 * implied warranty.
 *
 * CANONICAL, LTD. DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN
 * NO EVENT SHALL CANONICAL, LTD. BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * Authored by: Sam Spilsbury <sam.spilsbury@canonical.com>
 */

#include "test-point.h"

class CompPointTestPoint :
    public CompWindowPointTest
{
    public:

	CompPointTestPoint ();
	~CompPointTestPoint ();

    protected:

	CompPoint p;
};

CompPointTestPoint::CompPointTestPoint () :
    p (0, 0)
{
}

CompPointTestPoint::~CompPointTestPoint ()
{
}

TEST_F(CompPointTestPoint, TestPoint)
{
  p.setX (10);

  EXPECT_EQ (p.x (), 10);

  p.setY (10);

  EXPECT_EQ (p.y (), 10);
  EXPECT_EQ (p, CompPoint (10, 10));

  EXPECT_TRUE (p == CompPoint (10, 10));
  EXPECT_FALSE (p != CompPoint (10, 10));

  p -= CompPoint (5, 5);

  EXPECT_EQ (p, CompPoint (5, 5));

  p += CompPoint (3, 3);

  EXPECT_EQ (p, CompPoint (8, 8));
}