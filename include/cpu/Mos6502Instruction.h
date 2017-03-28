//===-- include/cpu/Mos6502Intruction.h - Mos6502 Instruction ---*- C++ -*-===//
//
//                           The OsNES Project
//
// This file is distributed under GPL v2. See LICENSE.md for details.
//
//===----------------------------------------------------------------------===//
///
/// \file
/// Data structure representing and instruction for the Mos6502.
///
//===----------------------------------------------------------------------===//
#ifndef MOS_6502_INSTRUCTION_H
#define MOS_6502_INSTRUCTION_H

#include <string>

#include "common/CommonTypes.h"

namespace Cpu {

/// \class Mos6502Instruction
/// \brief This class represents a machine instruction for the Mos6502 architecture.
struct Mos6502Instruction {
      enum class InstructionType {
        NO_OP = 0,
        ONE_OP = 1,
        TWO_OP = 2
      };
      /// Opcode for the given instruction.
      byte opcode;
      /// Name of the instruction.
      std::string name;
      /// Addressing mode for the given instruction.
      std::string addr;
      /// Instruction type
      InstructionType type;
      struct {
        /// Low byte operand for the given instuction, if it exists.
        byte lo;
        /// High byte operand for the given instuction, if it exists.
        byte hi;
      } operand;
      /// Cycles to execute for the given instruction.
      byte cycles;
    };

} // namespace Cpu

#endif // MOS_6502_INSTRUCTION_H //
