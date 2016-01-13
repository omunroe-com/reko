#region License
/* 
 * Copyright (C) 1999-2016 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System;
using System.Collections.Generic;

namespace Reko.Core
{
    /// <summary>
    /// Represents a table of jumps or calls. Initially, it is empty.
    /// item, but further analysis may grow this size.
    /// </summary>
    [Obsolete("Deprecate this in favor of just storing the datatype in the DataType property")]
    public class ImageMapVectorTable : ImageMapItem
    {
        public ImageMapVectorTable(Address[] vector, int size)
        {
            this.Addresses = new List<Address>(vector);
        }

        public Address TableAddress { get; private set; }
        public List<Address> Addresses { get; private set; }
    }
}