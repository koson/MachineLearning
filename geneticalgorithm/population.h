/** 
 @cond
 ############################################################################
 # LGPL License                                                             #
 #                                                                          #
 # This file is part of the Machine Learning Framework.                     #
 # Copyright (c) 2010, Philipp Kraus, <philipp.kraus@flashpixx.de>          #
 # This program is free software: you can redistribute it and/or modify     #
 # it under the terms of the GNU Lesser General Public License as           #
 # published by the Free Software Foundation, either version 3 of the       #
 # License, or (at your option) any later version.                          #
 #                                                                          #
 # This program is distributed in the hope that it will be useful,          #
 # but WITHOUT ANY WARRANTY; without even the implied warranty of           #
 # MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            #
 # GNU Lesser General Public License for more details.                      #
 #                                                                          #
 # You should have received a copy of the GNU Lesser General Public License #
 # along with this program. If not, see <http://www.gnu.org/licenses/>.     #
 ############################################################################
 @endcond
 **/


#ifndef MACHINELEARNING_GENETICALGORITHM_POPULATION_H
#define MACHINELEARNING_GENETICALGORITHM_POPULATION_H

#include "individual.hpp"
#include "fitnessfunction.hpp"


namespace machinelearning { namespace geneticalgorithm {

    /** class for the population / optimization structure
     * $LastChangedDate$
     **/
    class population {
        
        public :
        
            population( const fitnessfunction&, const individual&, const std::size_t&; const std::size_t&, const double& );
        
            std::size_t size( void ) const;
            void setEliteSize( const std::size:_t& );
            void setMutalProbability( const double& );
            std::vector<individuum> getElite( void ) const;
            void setParentsDie( const bool& );
            void optimze( const std::size_t& );
        
        
        private :
      
            
        
        
    };

};};

#endif