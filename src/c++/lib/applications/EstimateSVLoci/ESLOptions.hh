// -*- mode: c++; indent-tabs-mode: nil; -*-
//
// Manta
// Copyright (c) 2013 Illumina, Inc.
//
// This software is provided under the terms and conditions of the
// Illumina Open Source Software License 1.
//
// You should have received a copy of the Illumina Open Source
// Software License 1 along with this program. If not, see
// <https://github.com/downloads/sequencing/licenses/>.
//

///
/// \author Chris Saunders
///

#pragma once

#include "manta/Program.hh"
#include "options/AlignmentFileOptions.hh"
#include "options/ReadScannerOptions.hh"
#include "options/SVLocusSetOptions.hh"


struct ESLOptions
{

    ESLOptions() :
        graphOpt(3)
    {}

    AlignmentFileOptions alignFileOpt;
    ReadScannerOptions scanOpt;
    SVLocusSetOptions graphOpt;

    std::string outputFilename;
    std::string region;
    std::string statsFilename;
};


void
parseESLOptions(const manta::Program& prog,
                int argc, char* argv[],
                ESLOptions& opt);
