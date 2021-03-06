/*
 * Copyright © 2012 Canonical Ltd.
 *
 * Permission to use, copy, modify, distribute, and sell this software
 * and its documentation for any purpose is hereby granted without
 * fee, provided that the above copyright notice appear in all copies
 * and that both that copyright notice and this permission notice
 * appear in supporting documentation, and that the name of
 * Novell, Inc. not be used in advertising or publicity pertaining to
 * distribution of the software without specific, written prior permission.
 * Novell, Inc. makes no representations about the suitability of this
 * software for any purpose. It is provided "as is" without express or
 * implied warranty.
 *
 * NOVELL, INC. DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN
 * NO EVENT SHALL NOVELL, INC. BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * Author: Daniel d'Andrada <daniel.dandrada@canonical.com>
 */

#ifndef RESIZE_PROPERTY_WRITER_INTERFACE_H
#define RESIZE_PROPERTY_WRITER_INTERFACE_H

namespace resize
{

class PropertyWriterInterface
{
public:
    virtual ~PropertyWriterInterface() {}

    virtual bool updateProperty (Window, CompOption::Vector &, int) = 0;
    virtual void deleteProperty (Window) = 0;
    virtual const CompOption::Vector & readProperty (Window) = 0;
    virtual void setReadTemplate (const CompOption::Vector &) = 0;
    virtual const CompOption::Vector & getReadTemplate () = 0;
};

} /* namespace resize */

#endif /* RESIZE_PROPERTY_WRITER_INTERFACE_H */
