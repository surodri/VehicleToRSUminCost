//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package mincostvanet1.simulations;


import org.car2x.veins.base.phyLayer.BasePhyLayer;

//
// Adaptation of the PhyLayer class for 802.11p.
//
// @see BaseWaveApplLayer
// @see Nic80211p
// @see Mac1609_4
//
simple PhyLayer80211pLinkFailure extends BasePhyLayer
{
    parameters:
        @namespace(PhyLayer80211pLinkFailure);
        headerLength @unit(bit)  = default(46 bit); //defines the length of the phy header (SIGNAL without PREAMBLE)
}
