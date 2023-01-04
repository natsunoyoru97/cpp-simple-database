// Copyright 2022 natsunoyoru97
//
// Created by natsunoyoru on 22-12-31.
//
#ifndef SRC_STORAGE_STORAGE_H_
#define SRC_STORAGE_STORAGE_H_

#include <cstdint>

#include "../pager/pager.h"

namespace storage {

// TODO(natsunoyoru): comment out what Table does 
class Table {
 public:
  // TODO(natsunoyoru97): considering making some of the member variables
  // private
  pager::Pager* pager_;

  explicit Table(const char* filename);
  ~Table();
  void* GetRowSlot(uint32_t row_num);
};

}  // namespace storage

#endif  // SRC_STORAGE_STORAGE_H_
