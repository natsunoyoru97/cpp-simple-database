// Copyright 2022 natsunoyoru97
//
// Created by natsunoyoru on 22-12-31.
//
#ifndef SRC_STORAGE_STORAGE_H_
#define SRC_STORAGE_STORAGE_H_

#include "../pager/pager.h"

namespace storage {

// Storage manager of the database -
// A wrapper to maintain the database files
// and it only provides a READ interface
class Table {
 private:
  Pager* pager_;
  explicit Table(const char* filename);

 public:
  static Table* InitTable(const char* filename);
  ~Table();
  Pager* GetPager();
  const char* GetRowSlot(uint32_t row_num);
};

}  // namespace storage

#endif  // SRC_STORAGE_STORAGE_H_
